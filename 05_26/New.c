#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = a > b ? a : b;
//	////����m����С��������Ȼ��ȥ�Գ�
//	//while (1)
//	//{
//	//	if (m % a == 0 && m % b == 0)
//	//	{
//	//		break;
//	//	}
//	//	m++;
//	//}
//
//	/*int i = 1;
//	while (a * i % b != 0)
//	{
//		i++;
//	}*/
//	int sum = a * b;
//	int tmp = 0;
//	while (tmp = a % b)
//	{
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n", sum/b);
//	return 0;
//}

// �����ַ���
// I like Beijing.
// Beijing. like I
// 1. �������ַ�����������
// 2. ���ַ����е�ÿ�����ʽ�������
//void ReverseString(char* begin ,char* end)
//{
//	while (begin < end)
//	{
//		char tmp = *begin;
//		*begin = *end;
//		*end = tmp;
//		begin++;
//		end--;
//	}
//}

// New York!
// !korY weN

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//scanf("%[^\n]", arr);  // �����ո�������룬ֱ������'\n'
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	
//	//1. ���������ַ���
//	ReverseString(left, right);
//
//	//2. �����ַ����е�ÿ������
//	char* cur = arr;
//	char* start = arr; // ˫ָ������ַ���
//	while (*cur != '\0')
//	{
//		while (*cur != ' ' && *cur != '\0') // �����������-���һ�����ʵĽ���
//		{
//			cur++;
//		}
//		ReverseString(start, cur - 1);
//		start = cur + 1;
//		if (*cur != '\0')
//			cur++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


