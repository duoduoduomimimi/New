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

// �����������г�Ա��������ͬһ���ڴ�ռ�����ԣ����жϻ����Ĵ�С���ֽ�����趨
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
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//	return 0;
//}

