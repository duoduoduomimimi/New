#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include"add.h"
// ���뾲̬��
#pragma comment(lib,"add.lib")
//int main()
//{
//	char arr[] = "welcome to NewYork";
//	memset(arr, 'X', 5);
//	// 1. �����ڴ��ʱ�������ֽ�Ϊ��λ��
//	// 2. ÿ���ֽڵ����ݶ���һ����value
//	printf("%s\n", arr);
//	return 0;
//}

// дһ�����������������ͱ���������
// ͨ��ָ���ú������β���ʵ��֮�佨����������ϵ
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	// ����
//	printf("������������a��b:> ");
//	scanf("%d %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	// ����
//	Swap(&a, &b);
//
//	// ���
//	printf("����֮��~\n");
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

// дһ�����������ж�һ�����ǲ�������
// is_prime(i)
// ����1 ��ʾ������
// �Ż�0 ��ʾ��������
//int is_prime(int n)
//{
//	// 2~sqrt(n)֮����������Գ�
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	// ��ӡ100~200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//			if (count % 3 == 0)
//				printf("\n");
//		}
//		
//	}
//	return 0;
//}

//дһ�������ж�һ������ǲ�������
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//	/*return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);*/
//}
//
//int main()
//{
//	//1000~2000��֮�������
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		// �ж�y�ǲ�������
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//
//			if (count % 5 == 0)
//			{
//				printf("\n");
//			}
//				
//		}
//	}
//	return 0;
//}

// дһ��������ʵ��һ��������������Ķ��ֲ���
// �ҵ��ˣ��ͷ����±�
// �Ҳ������ͷ���-1
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//// ����ķ�ʽ
////int binary_search(int* arr[], int k)
////{
////	int sz = sizeof(arr) / sizeof(arr[0]); // ���ʽ�ļ�����Ϊ��1
////	int left = 0;
////	int right = sz - 1;
////	while (left <= right)
////	{
////		int mid = (left + right) / 2;
////		if (k > arr[mid])
////		{
////			left = mid + 1;
////		}
////		else if (k < arr[mid])
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////
////	return -1;
////}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//
//	//����
//	printf("������Ҫ���ҵ�Ԫ��:> ");
//	scanf("%d", &k);
//
//	//����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//	//���
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�±�Ϊ:> %d", ret);
//
//	return 0;
//}

// дһ��������ÿ����һ�Σ��ͽ� num ��ֵ����1
//void test(int* p)
//{
//	*p += 1;
//	printf("%d\n", *p);
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	test(&num);
//}

//int main()
//{
//	printf("len=%d\n", strlen("abcdef"));
//}

//int main()
//{
//	printf("%d ", printf("%d ", printf("%d ", 43))); // 43 3 2
//	return 0;
//}

//����������
//int Add(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//ʷ����򵥵ĵݹ�
//int main()
//{
//	printf("hahahalalala\n");
//	main();
//	return 0;
//}

void print(int n)
{
	if (n > 9) // ��λ��
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num); //1234

	// 1234%10 = 4
	// 1234/10 = 123
	// 123%10 = 3
	// 123/10 = 12
	// 12%10 = 2
	// 12/10 = 1
	// 1%10 = 1

	// print�����Ĺ��ܣ���num��ÿһλ����˳���ӡ����
	print(num);
	return 0;
}