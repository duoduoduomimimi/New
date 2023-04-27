#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define M 100


// strlen : 可以求字符串的长度
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}

// 枚举 - 一一列举
// 性别 ： 男、女、保密
// 三原色： red、green、blue
// 星期： 1，2，3，4，5，6，7

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	// 枚举常量
//	enum Color c = RED;
//	printf("%d %d %d", RED, GREEN, BLUE);
//
//	return 0;
//}

//int main()
//{
//	int n = M;
//	printf("%d ", n);
//	int arr[M] = { 0 };
//	return 0;
//}

//int main()
//{
//	// 字面常量
//	20;
//	'a'; // 字符常量
//	"abcdef"; // 字符串常量
//
//	int num = 10;
//	printf("%d ", num);
//
//	// 修改
//	num = 20;
//	printf("%d ", num);
//
//
//	return 0;
//}