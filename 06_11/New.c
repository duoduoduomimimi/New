#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S3
//{
//	double d1;
//	char c2;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s;
//	printf("%d\n", sizeof(s));
//	struct S2 x;
//	printf("%d\n", sizeof x);
//	struct S3 m;
//	printf("%d\n", sizeof m);
//	struct S4 n;
//	printf("%d\n", sizeof n);
//
//	return 0;
//}

//typedef union Un
//{
//	char c1;
//	int i;
//}Un;

//int main()
//{
//	Un n;
//	printf("%d\n", sizeof n);
//	n.i = 0x11223344;
//	n.c1 = 0x55;
//	printf("%x\n", n.i);
//	return 0;
//}

// 利用联合体中成员变量公用同一块内存空间的特性，来判断机器的大小端字节序的设定
//int CheckSys()
//{
//	typedef union Un
//	{
//		char c1;
//		int i;
//	}Un;
//	Un u;
//	u.i = 1;
//	return u.c1;
//}
//
//int main()
//{
//	int ret = CheckSys();
//	if (1 == ret)
//	{
//		printf("小端字节序\n");
//	}
//	else
//	{
//		printf("大端字节序\n");
//	}
//	return 0;
//}

