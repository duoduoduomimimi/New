#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

// strlen的模拟实现
//int MyStrlen(const char* str)
//{
//	assert(str != NULL);
//	int len = 0;
//	//char* start = str;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
// 
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = NULL;
//	printf("%d\n", MyStrlen(arr));
//	return 0;
//}

//int main()
//{
//	unsigned int ch = -10;
//	printf("%d\n", ch);
//	return 0;
//}

// 设计一个小程序，来判断此时的机器是大端序还是小端序
//int CheckSys()
//{
//	int a = 1;
//	return *(char*)&a; // 取出第一个字节
//}
//
//int main()
//{
//	/*int a = 1;*/
//	//00000000000000000000000000000001  - 二进制
//	//0x 00 00 00 01 - 十六进制 
//	int ret = CheckSys();
//	if (ret)
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//}

//-1
//10000000000000000000000000000001 - -1的原码
//11111111111111111111111111111110 - -1的反码
//11111111111111111111111111111111 - -1的补码
//11111111 
//10000000
//10000001

//00000001
//11111110
//11111111

// 最小公倍数
// 整数a和整数b的最小公倍数  =  a*b \ 它们的最大公约数
//int gcd(int x, int y)
//{
//	int tmp = 0;
//	while(tmp = x % y)
//	{
//		x = y;
//		y = tmp;
//	}
//	return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", (a * b) / gcd(a, b));
//}

// 倒置字符串
// Welcome to New York!
// York! New to Welcome
//char* ReverseString(const char* arr)
//{
//
//}
//int main()
//{
//	char arr[] = "Welcome to New York!";
//	printf("%s\n", arr);
//	ReverseString(arr);
//	printf("%s\n", arr);
//	return 0;
//}