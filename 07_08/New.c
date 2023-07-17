#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void Test1()
{
	Heap hp;
	HeapInit(&hp);
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// ������
		HeapPush(&hp, arr[i]);
	}
	HeapPrint(&hp);
	HeapPush(&hp, 10);
	HeapPrint(&hp);
}

void Test2()
{
	Heap hp;
	Heap* ph = &hp;
	HeapInit(ph);
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// ������
		HeapPush(ph, arr[i]);
	}
	int num = 0;
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
	HeapPop(ph);
	num = HeapSize(ph);
	printf("%d:\n", num);
	HeapPrint(ph);
}

void Test3()
{
	// ������
	Heap hp;
	Heap* ph = &hp;
	HeapInit(ph);
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// ������
		HeapPush(ph, arr[i]);
	}
	HeapPrint(ph);

	// ����: С��
	while (!HeapEmpty(ph))
	{
		printf("%d ",HeapTop(ph));
		HeapPop(ph);
	}
	printf("\n");
}

void Test4()
{
	// ������
	Heap hp;
	Heap* ph = &hp;
	HeapInit(ph);
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// ������
		HeapPush(ph, arr[i]);
	}
	HeapPrint(ph);


	// ���򣺴��
	while (!HeapEmpty(ph))
	{
		printf("%d ", HeapTop(ph));
		HeapPop(ph);
	}
	printf("\n");
}

// 1�� ����Ҫ��дһ��heap���ݽṹ����������������
// 2�� ��O(N)�Ŀռ临�Ӷ�
//void HeapSort(HPDataType* arr, int size)
//{
//	Heap hp;
//	Heap* ph = &hp;
//	HeapInit(ph);
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		// ������
//		HeapPush(ph, arr[i]);
//	}
//	HeapPrint(ph);
//	i = 0;
//	// ���򣺴��
//	while (!HeapEmpty(ph))
//	{
//		arr[i++] = HeapTop(ph);
//		HeapPop(ph);
//	}
//	HeapDestroy(ph);  // ��ֹ�ڴ�й¶
//}

void HeapSort(HPDataType* arr, int size)
{
	// ����
	// ��ʽһ���ӵڶ����ڵ㴦����ʼ���������ϵ��� O(N * logN)
	//int i = 0;
	//for (i = 1; i < size; i++)
	//{
	//	AdjustUp(arr, i);
	//}

	// ��ʽ��: �ӵ�����һ����Ҷ�ӽڵ㴦����ʼ��ǰ�������µ���  O(N)
	int i = 0;
	int parent = (size - 1 - 1) / 2; // ���һ���ڵ�ĸ��׽ڵ�
	for (i = parent; i >= 0; i--)
	{
		AdjustDown(arr, size, i);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	// ���� - �����
	// ���� - ��С��
	int end = size - 1;
	while (end > 0) // O(N * logN)
	{
		Swap(&arr[0], &arr[end]);
		AdjustDown(arr, end, 0);  // O(logN)
		end--;
	}
}

void Test5()
{
	// �����鵱�е�ֵ����
	int arr[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, size);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void PrintTopK(int* arr, int n, int k)
{
	// 1�����ѣ���ǰk��Ԫ�ؽ��н��� - С��
	int i = 0;
	int* kMinHeap = (int*)malloc(sizeof(int) * k);
	assert(kMinHeap);
	for (i = 0; i < k; i++)
	{
		kMinHeap[i] = arr[i];
	}
	for (i = (k - 1 - 1) / 2; i >= 0; i--) // �ӵ�һ����Ҷ�ӽڵ㴦����ʼ���µ���
	{
		AdjustDown(kMinHeap, k, i);
	}

	// 2����ʣ�µ�n-k,������Ѷ�Ԫ�ؽ��бȽϣ��������������滻���ٵ����ѵ�˳��
	int j = 0;
	for (j = k; j < n; j++)
	{
		if (arr[j] > kMinHeap[0])
		{
			kMinHeap[0] = arr[j];
			AdjustDown(kMinHeap, k, 0);
		}
	}

	for (i = 0; i < k; i++)
	{
		printf("%d ", kMinHeap[i]);
	}
	printf("\n");
}

void Test6()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int) * n);
	assert(a);
	srand((unsigned int)time(NULL));
	//srand(time(0));
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 10000;
	}
	a[5] = 10000 + 1;
	a[1231] = 10000 + 2;
	a[531] = 10000 + 3;
	a[5121] = 10000 + 4;
	a[115] = 10000 + 5;
	a[2335] = 10000 + 6;
	a[9999] = 10000 + 7;
	a[76] = 10000 + 8;
	a[423] = 10000 + 9;
	a[3144] = 10000 + 10;
	PrintTopK(a, n, 10);
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	Test6();
	return 0;
}