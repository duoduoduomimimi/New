#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

// ģ��strlen
// 1. �������ķ���
//size_t MyStrlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
// 2. �ݹ�ķ���
// 3. ָ��-ָ��ķ���
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = MyStrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// ģ��strcpy - �ַ�������
// char* �������͵������Ϊ�������ʽ����
//char* MyStrcpy(char* dest, const char* src)
//{	
//	assert(dest != NULL && src != NULL);
//	char* cur = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return cur;
//}
//
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[] = "Welcome to New York!";
//	MyStrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

// ģ��strcat
//char* MyStrcat(char* dest,const char* src)
//{
//	assert(dest && src);
//	char* cur = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return cur;
//}
//
//int main()
//{
//	char arr1[25] = "Welcome to ";
//	char arr2[] = "New York!";
//	//strcat(arr1, arr2);
//	MyStrcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

// ģ��strcmp
//int MyStrcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return *str1 - *str2;
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcde";
//
//	int ret = MyStrcmp(arr1, arr2);
//
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("=\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

