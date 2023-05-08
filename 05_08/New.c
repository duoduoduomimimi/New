#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
// 数一下 1~100 的所有整数中出现多少个数字9
// 1. 个位上出现数字 9 : 19 29 39 49
// 2. 十位上出现数字 9 : 91 92 93 94
//int main()
//{
//	int count = 0;// 计数
//	
//	// 产生1~100的数字
//	for (int i = 1; i < 101; i++)
//	{
//		if (i < 10)
//		{
//			if (i % 9 == 0)
//				count++;
//		}
//		else
//		{
//			if (i < 90)
//			{
//				if (i % 10 == 9)
//					count++;
//			}
//			else if (i / 10 == 9)
//			{
//				count++; 
//			}
//			//else
//			//{
//			//	count++; // 多加 100
//			//}
//		}
//	}
//	count++; // 99
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
// 奇数为正，偶数为负
//int main()
//{
//	double sum = 0.0;
//	for (int i = 1; i < 101; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum += (-1.0) / i;
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10 个整数中最大值
int main()
{
	int arr[10] = { 0 };

	// 输入
	printf("输入10个整数:> ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// 比大小
	int max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < arr[i])
		{
			int tmp = max;
			max = arr[i];
			arr[i] = tmp;
		}
	}
	printf("其中的最大值为:> %d", max);
}

// 在屏幕上输出9 * 9乘法口诀表
//1*1 = 1
//1*2 = 2  2*2 = 4
//1*3 = 3  2*3 = 6
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d×%d=%-2d ", j, i, (j * i));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	// 输入
//	scanf("%d %d", &a, &b);
//
//	// 找出较小值
//	int n = (a > b ? a : b);
//
//	// 假设n就是最大公约数
//	while (1)
//	{
//		if (a % n == 0 && b % n == 0)
//		{
//			printf("%d", n);
//			break;
//		}
//		else
//		{
//			n--;
//		}
//	}
//	return 0;
//}

// 辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//
//	// 输入
//	scanf("%d %d", &a, &b);
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		int flag = 1;//先假设i是素数
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//
//	// 把arr1中的字符串拷贝到arr2中
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}