#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// д���뽫�������������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	// ����
//	scanf("%d %d %d", &a, &b, &c);
//
//	// �ȴ�С���������
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
//	// ����
//	scanf("%d %d %d", &a, &b, &c);
//
//	// �ȴ�С���������
//	if (a < b)
//	{
//		if (b < c)
//			printf("%d %d %d", c, b, c);
//		else
//			printf("%d %d %d", b, c, a); // a��c�Ĵ�Сδ֪
//	}
//	else
//	{
//		if (a < c)
//			printf("%d %d %d", c, a, b);
//		else
//			printf("%d %d %d", a, c, b); // b��c�Ĵ�Сδ֪
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//
//	//�ȴ�С���������
//	//1. �̶����ѭ�� a,b,c
//	//2. Ҫ��֤a������ֵ>b������ֵ>c������ֵ,����
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

//дһ�������ӡ1-100֮������3�ı���������
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

// ���������������������������Լ�� 
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	// ����
//	scanf("%d %d", &a, &b);
//
//	//�������Լ��
//	if (a < b)
//	{
//		for (int i = a; i > 0; i--)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				printf("���Լ��Ϊ:%d", i);
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
//				printf("���Լ��Ϊ:%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

// շת����� �����Լ��
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

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	for (int i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//��ӡ100~200֮�������
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