#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}

// 1! + 2! + 3! + ... + n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 越界，死循环
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hahahalalala\n");
//	}
//	return 0;
//}

//模拟strcpy函数
//void my_strcpy(char* dest, char* src)
//{
//	while (*src)
//	{
//		*dest++ = *src++;
//		/*src++;
//		dest++;*/
//	}
//	*dest = *src;
//}

// 函数链式访问
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	while (*dest++ = *src++)  // 先使用即赋值，后++
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "Welcome to New York!";
	char arr2[30] = "";
	char* p = NULL;
	//strcpy(arr2, arr1);
	my_strcpy(arr2, arr1);
	printf("%s\n", arr2);
	printf("%s\n", my_strcpy(arr2, arr1));
	return 0;
}

//void ArrCopy(int* dest, int* src)
//{
//	while (*dest++ = *src++)
//	{
//	
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,0,8,9,10 };
//	int arr2[10] = { 0 };
//	ArrCopy(arr2, arr1);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}

//int main()
//{
//	int a = 7;
//	int b = 0;
//	if (a = b)
//	{
//		printf("hahaha\n");
//	}
//	else
//	{
//		printf("lalala\n");
//	}
//	return 0;
//}