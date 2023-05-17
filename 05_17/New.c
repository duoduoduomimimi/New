#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	//00000000000000000000000000000101
//	// 向右移动一位
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	//int c = a & b;  // 3
//	//int c = a | b;  // -5
//	int c = a ^ b;  // -8
//
//	printf("%d", c);
//	return 0;
//}

// 找出只出现一次的数字 ： 1 2 3 4 5 1 2 3 4
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("只出现一次的数字为:> %d", ret);
//	return 0;
//}

// 进行两个变量的交换，不能创建临时变量
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a=%d b=%d\n", a, b);
//
//	// 方法一  数据溢出，超出范围，潜在问题
//	a = a + b;
//	b = a - b; // a
//	a = a - b; // b
//
//	// 方法二   具体带入  假设 b = 0
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	// 方法三
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//求一个整数，存储在内存中二进制1的个数
//5
//0000000000000000000000000000000000101
//在最低位，按位与1，再进行右移位改变最低位
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// C语言中C99之前没有表示真假的类型
// C99中引入了布尔类型 - false true
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag1 = true;
//	int num = 10;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));*/
//
//	/*int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));*/
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 2)); // 2
//	printf("%d\n", s);  // 0
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);  // -1
//	return 0;
//}

