#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//将一个四位数，按照顺序将它的每一位数打印在屏幕上
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//
//	//输入
//	scanf("%d", &num);
//
//	//打印
//	print(num);
//	// 1234
//	// 123 4
//	// 12 3 4
//	// 1 2 3 4
//	return 0;
//}

//编写函数，求字符串的长度，但不允许创建临时变量
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//int my_strlen(int arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++; // 指针的运算 +4
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//	}
//	else
//	{
//		return 0;
//	}
//	return (1 + my_strlen(str));
//}

// my_strlen("abcde")
// 1 + my_strlen("bcde")
// 1 + 1 + my_strlen("cde")
// 1 + 1 + 1 + my_strlen("de")
// 1 + 1 + 1 + 1 + my_strlen("e")
// 1 + 1 + 1 + 1 + 1 + my_strlen('\0')
// 1 + 1 + 1 + 1 + 1 + 0
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdefgh";
//
//	int len = my_strlen(arr);
//
//	printf("%d", len);
//
//	return 0;
//}

//void test(int* str)
//{
//	str++;
//	printf("%p\n", str);
//	str++;
//	printf("%p\n", str);
//	str++;
//	printf("%p\n", str);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	test(arr);
//
//	return 0;
//}

// 求n的阶乘
// 6! = 6*5*4*3*2*1
// 6! = 6*5! = 6*5*4! = 6*5*4*3! = 6*5*4*3*2! =6*5*4*3*2*1!
//int factorial(int n)
//{
//	if (n > 1)
//		return n * factorial(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个正整数n:> ");
//	scanf("%d", &num);
//	int ret = factorial(num);
//	printf("n的阶乘为:> %d", ret);
//	return 0;
//}

//求第n个斐波契切数
//int fib(int n)
//{
//	if (n < 3)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

// 迭代
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	/*if (n < 3)
//	{
//		return 1;
//	}*/
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char a = 'a'; //97
//	char b = 'A'; //65
//	char c = 'z'; //
//	char d = 'Z'; //
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", a - b);
//	printf("%d\n", c - d);
//
//	return 0;
//}

// 字符串逆序
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//	if (my_strlen(left)>2)
//	{
//		left++;
//		reverse_string(left);
//	}
//	*right = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	printf("逆序之后~~\n");
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//递归实现n的k次方
//int pow(int n, int k)
//{
//	if (k >= 1)
//		return n * pow(n, k - 1);
//	if (k == 0)
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入一个整数n:> ");
//	scanf("%d", &n);
//	printf("请输入n的次方数:> ");
//	scanf("%d", &k);
//
//	int ret = pow(n, k);
//	printf("n的k次方为:> %d", ret);
//	return 0;
//}

 //计算一个数的每位之和（递归实现）
int sum(int n)
{
	if (n > 9)
	{
		return (n % 10) + sum(n / 10);
	}
	else
		return n;
}
int main()
{
	int num = 0;
	printf("请输入一个数num:> ");
	scanf("%d", &num);

	int ret = sum(num);
	printf("num的每位之和为:> %d", ret);
	return 0;
}