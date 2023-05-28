#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	float f = 0.5;
//	return 0;
//}

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

//int main()
//{
//	char a = 128;
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("%d\n", a);
//	printf("%u\n", a);
//	
//	printf("\n");
//	printf("%f\n", *pf);
//
//	*pf = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pf);
//
//	return 0;
//}

//猜凶手
//int main()
//{
//	int killer = 0;
//	// 字符类型是以ASCII码值存储在内存中的
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是:> %c", killer);
//		}
//	}
//	return 0;
//}

