#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("abcdef\n");
//	printf("abc\0def\n");
//	return 0;
//}

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (1)
//	{
//		int input = 0;
//		// 输入
//		scanf("%d %d", &num1, &num2);
//		// 获取两个整数的最大值
//		int ret = Max(num1, num2);
//		// 输出
//		printf("%d\n", ret);
//		printf("是否继续（0/1）:");
//		scanf("%d", &input);
//		if (input == 1)
//			continue;
//		else
//			break;
//	}
//	
//	return 0;
//}

//int main()
//{
//	int iq = 0;
//	// 多组输入
//	while (scanf("%d", &iq) != EOF)
//	{
//		int input = 0;
//		if (iq >= 140)
//		{
//			printf("Genius\n");
//		}
//		else
//		{
//			printf("是否继续（0/1）：");
//			scanf("%d", &input);
//			if (input == 1)
//				continue;
//			else
//				break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	while (1)
//	{
//		int input = 0;
//		scanf("%d %d", &num1, &num2);
//		printf("%d %d", (num1 / num2), (num1 % num2));
//		printf("\n是否继续（0/1）：");
//		scanf("%d", &input);
//		if (input == 1)
//			continue;
//		else
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a; // 前置++，先++，后使用
//	printf("%d %d\n", a, b);
//	int c = 10;
//	int d = c++; // 后置++，先使用，后++
//	printf("%d %d\n", c, d);
//	int e = 10;
//	int f = e + 1;
//	printf("%d %d\n", e, f);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	double b = 3.14;
//	printf("%.2f\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 4;
//	if ((a == 3) && (b == 4))  // 并且
//	{
//		printf("hahahalalala\n");
//	}
//
//	if ((a == 3) || (b == 4))  // 或者
//	{
//		printf("hahahalalala\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int ret = 0;
//
//	if (a > b)
//		ret = a;
//	else
//		ret = b;
//
//	ret = a > b ? a : b;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 9;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//unsigned int num = 10;
//
//typedef unsigned int uint;
//
//uint a = 10;
//
//int main()
//{
//	int ret = 10; // 存放在内存中
//	register num = 10;  // 建议将变量存放在寄存器中
//	printf("%d ", num);
//	return 0;
//}

void test()
{
	int a = 5;
	a++;
	printf("%d ", a);
}

void test1()
{
	static int a = 5;
	a++;
	printf("%d ", a);
}

// static修饰局部变量 - 静态局部变量，生命周期结束不销毁  变量生命周期结束，变量就会被销毁
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	printf("\n");

	i = 0;
	while (i < 10)
	{
		test1();
		i++;
	}
	return 0;
}