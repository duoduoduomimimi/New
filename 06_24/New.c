#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

// 从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

// 打印1~100之间3的倍数的数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 8 == 0 && count)
//			printf("\n");
//	}
//	return 0;
//}

//求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int tmp = 0;
//	while (tmp=b-a)
//	{
//		b = a;
//		a = tmp;
//	}
//	printf("%d\n", a);
//	return 0;
//}

// 打印闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		/*if (count % 10 == 0 && count)
//			printf("\n");*/
//	}
//	return 0;
//}

//打印素数
int main()
{
	int i = 0;
	for (i = 100; i < 201; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
				flag = 0;
		}
		if (flag)
			printf("%d ", i);
	}
	return 0;
}