#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 写代码将三个整数数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	// 输入
//	scanf("%d %d %d", &a, &b, &c);
//
//	// 比大小，进行输出
//	if (a > b)
//	{
//		if (a > c)
//		{
//			if (b > c)
//			{
//				printf("%d %d %d", a, b, c);
//			}
//			else
//			{
//				printf("%d %d %d", a, c, b);
//			}
//		}
//		else
//		{
//			printf("%d %d %d", c, a, b);
//		}
//	}
//	else // a < b
//	{
//		if (a > c)
//		{
//			printf("%d %d %d", b, a, c);
//		}
//		else // a < c
//		{
//			if (b > c)
//			{
//				printf("%d %d %d", b, c, a);
//			}
//			else
//			{
//				printf("%d %d %d", c, b, a);
//			}
//
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	// 输入
//	scanf("%d %d %d", &a, &b, &c);
//
//	// 比大小，进行输出
//	if (a < b)
//	{
//		if (b < c)
//			printf("%d %d %d", c, b, c);
//		else
//			printf("%d %d %d", b, c, a); // a与c的大小未知
//	}
//	else
//	{
//		if (a < c)
//			printf("%d %d %d", c, a, b);
//		else
//			printf("%d %d %d", a, c, b); // b与c的大小未知
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//
//	//比大小，进行输出
//	//1. 固定输出循序 a,b,c
//	//2. 要保证a变量的值>b变量的值>c变量的值,即可
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int n = 1;
//	int i = 0;
//	for (n; n < 101; n++)
//	{
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//			i++;
//		}
//			
//		if (i % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}

// 给定两个数，求这两个数的最大公约数 
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	// 输入
//	scanf("%d %d", &a, &b);
//
//	//计算最大公约数
//	if (a < b)
//	{
//		for (int i = a; i > 0; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("最大公约数为:%d", i);
//				break;
//			}
//		}
//	}
//	else
//	{
//		for (int i = b; i > 0; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("最大公约数为:%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

// 辗转相除法 求最大公约数
//int main()
//{
//	int a = 18;
//	int b = 24;
//	int c = 0;
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//int main()
//{
//	for (int i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印100~200之间的素数
//int main()
//{
//	for (int i = 100; i < 201; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}