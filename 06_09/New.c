#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

// 模拟strlen
// 1. 计算器的方法
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
// 2. 递归的方法
// 3. 指针-指针的方法
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = MyStrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// 模拟strcpy - 字符串拷贝
// char* 返回类型的设计是为了设计链式访问
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

// 模拟strcat
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

// 模拟strcmp
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

