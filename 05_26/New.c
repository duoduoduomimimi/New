#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//int m = a > b ? a : b;
//	////假设m是最小公倍数，然后去试除
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

// 倒置字符串
// I like Beijing.
// Beijing. like I
// 1. 对整体字符串进行逆序
// 2. 对字符串中的每个单词进行逆序
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
//	//scanf("%[^\n]", arr);  // 遇到空格继续读入，直到遇到'\n'
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	
//	//1. 逆序整个字符串
//	ReverseString(left, right);
//
//	//2. 逆序字符串中的每个单词
//	char* cur = arr;
//	char* start = arr; // 双指针操作字符串
//	while (*cur != '\0')
//	{
//		while (*cur != ' ' && *cur != '\0') // 考虑特殊情况-最后一个单词的结束
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


