#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[100] = { 0 };
//	for (int i = 0; i < 100; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[100] = { 0 };
//	printf("%d\n", sizeof(arr)); // 400
//	printf("%d\n", sizeof(arr[0])); // 4
//
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// ��ӡ������ÿ��Ԫ�صĵ�ַ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]); 
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6 }; // ����ȫ��ʼ�� 
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	for (i; i < 3; i++)
//	{
//		int j = 0;
//		for (j; j < 5; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6 }; // ����ȫ��ʼ�� 
//	int arr2[3][5] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int row = sizeof(arr2) / sizeof(arr2[0]);
//	int col = sizeof(arr2[0]) / sizeof(arr2[0][0]);
//
//	for (i; i < row; i++)
//	{
//		int j = 0;
//		for (j; j < col; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ð�������ʵ��
void bubble_sort(int arr[],int sz)
{
	//int sz = sizeof(arr) / sizeof(arr[0]); // 1
	//����
	int i = 0;
	
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1; // �����Ѿ���������
		//ÿһ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
		{
			break;
		}
	}
}
 
int main()
{
	int arr[] = { 2,5,3,7,1,8,6,4,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

