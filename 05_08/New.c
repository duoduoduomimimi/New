#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
// ��һ�� 1~100 �����������г��ֶ��ٸ�����9
// 1. ��λ�ϳ������� 9 : 19 29 39 49
// 2. ʮλ�ϳ������� 9 : 91 92 93 94
//int main()
//{
//	int count = 0;// ����
//	
//	// ����1~100������
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
//			//	count++; // ��� 100
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

// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
// ����Ϊ����ż��Ϊ��
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

//��10 �����������ֵ
int main()
{
	int arr[10] = { 0 };

	// ����
	printf("����10������:> ");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	// �ȴ�С
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
	printf("���е����ֵΪ:> %d", max);
}

// ����Ļ�����9 * 9�˷��ھ���
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
//			printf("%d��%d=%-2d ", j, i, (j * i));
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
//	// ����
//	scanf("%d %d", &a, &b);
//
//	// �ҳ���Сֵ
//	int n = (a > b ? a : b);
//
//	// ����n�������Լ��
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

// շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//
//	// ����
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
//		int flag = 1;//�ȼ���i������
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
//	// ��arr1�е��ַ���������arr2��
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}