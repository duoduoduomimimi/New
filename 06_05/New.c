#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int test(char* str)
//{
//	return 0;
//}
//
//int main()
//{
//	//int (*pf)(int, int) = &Add;
//	int (*pf)(int, int) = Add;
//
//	printf("%p\n", pf);
//	int (*pt)(char*) = test;
//	printf("%p\n", pt);
//	int ret = (*pf)(2, 3);
//	printf("%d\n", ret);
//	printf("%d\n", (*pf)(10, 20));
//	printf("%d\n", pf(2, 3));
//	return 0;
//}

//int main()
//{
//	(*(void(*)()) 0)();
//
//	void(*signal(int, void(*)(int)))(int);
//}

// 简单计算器的实现（加减乘除）
void menu()
{
	printf("*******************************\n");
	printf("******* 1. Add   2. Sub *******\n");
	printf("******* 3. Mul   4. Div *******\n");
	printf("******* 0. exit         *******\n");
	printf("*******************************\n");
}
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

//int Div(int x, int y)
//{
//	return x / y;
//}

double Div(int x, int y)
{
	return (double)x * 1.0 / y;
}

// switch实现控制流程
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		double tmp = 0;
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("结果为:> %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("结果为:> %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("结果为:> %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数:> ");
//			scanf("%d %d", &x, &y);
//			tmp = Div(x, y);
//			printf("结果为:> %.2f\n", tmp);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

// 函数指针实现控制流程
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	double tmp = 0;
	// 转移表
	//int (*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int (*pf[4])(int, int) = { 0, Add, Sub, Mul };

	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		
		if (input > 0 && input < 5)
		{
			printf("请输入两个整数:> ");
			scanf("%d %d", &x, &y);
			if (4 == input)
			{
				tmp = Div(x, y);
				printf("结果为:> %.2f\n", tmp);
			}
			else
			{
				ret = pf[input](x, y);
				printf("结果为:> %d\n", ret);
			}

		}
		else if (0 == input)
		{
			printf("退出计算器\n");
		}
		else
		{
			printf("选择错误!\n");
		}

	} while (input);
	return 0;
}