#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//
//	// 申请10个整型的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr; // 扩容成功
//	}
//
//	return 0;
//}

// 对NULL指针进行解引用访问
//int main()
//{
//	int* p = (int*)malloc(1000);
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	for (i = 0; i < 250; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

// 越界访问
//int main()
//{
//	int* p = (int*)malloc(100);
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

// 释放非动态开辟的内存
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

struct S1
{
	int i;
	char ch;
	int arr[];//柔性数组成员
};

int main()
{
	return 0;
}