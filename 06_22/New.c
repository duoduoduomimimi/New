#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define PRINT(N, format) printf("the value of "#N" is "#format"\n",N);
//
//int main()
//{
//	//printf("hello ""world!\n");
//	int a = 20;
//	double pai = 3.14;
//	PRINT(a, %d);
//	PRINT(pai, %.2lf);
//
//	return 0;
//}

#define CAT(name, num) name##num

int main()
{
	int class105 = 105;
	printf("%d\n", CAT(class, 105));

	return 0;
}