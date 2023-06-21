#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("%d", __LINE__);
//	return 0;
//}

#define SQUARE(x) ((x)*(x))

int main()
{
	int a = 9;
	int ret = SQUARE(a+1);
	printf("%d", ret);
	return 0;
}