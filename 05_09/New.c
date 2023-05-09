#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include"add.h"
// 导入静态库
#pragma comment(lib,"add.lib")
//int main()
//{
//	char arr[] = "welcome to NewYork";
//	memset(arr, 'X', 5);
//	// 1. 设置内存的时候，是以字节为单位的
//	// 2. 每个字节的内容都是一样的value
//	printf("%s\n", arr);
//	return 0;
//}

// 写一个函数交换两个整型变量的内容
// 通过指针让函数的形参与实参之间建立真正的联系
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
//	// 输入
//	printf("输入两个整数a和b:> ");
//	scanf("%d %d", &a, &b);
//	printf("a=%d b=%d\n", a, b);
//
//	// 交换
//	Swap(&a, &b);
//
//	// 输出
//	printf("交换之后~\n");
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

// 写一个函数可以判断一个数是不是素数
// is_prime(i)
// 返回1 表示是素数
// 放回0 表示不是素数
//int is_prime(int n)
//{
//	// 2~sqrt(n)之间的数进行试除
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
//	// 打印100~200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
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

//写一个函数判断一个年份是不是闰年
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
//	//1000~2000年之间的闰年
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		// 判断y是不是闰年
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

// 写一个函数，实现一个整型有序数组的二分查找
// 找到了，就返回下标
// 找不到，就返回-1
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
//// 错误的方式
////int binary_search(int* arr[], int k)
////{
////	int sz = sizeof(arr) / sizeof(arr[0]); // 表达式的计算结果为：1
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
//	//输入
//	printf("请输入要查找的元素:> ");
//	scanf("%d", &k);
//
//	//查找
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//
//	//输出
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("下标为:> %d", ret);
//
//	return 0;
//}

// 写一个函数，每调用一次，就将 num 的值增加1
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

//函数的声明
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

//史上最简单的递归
//int main()
//{
//	printf("hahahalalala\n");
//	main();
//	return 0;
//}

void print(int n)
{
	if (n > 9) // 两位数
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

	// print函数的功能，把num的每一位按照顺序打印出来
	print(num);
	return 0;
}