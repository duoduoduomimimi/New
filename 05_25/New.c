#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

// strlen��ģ��ʵ��
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

// ���һ��С�������жϴ�ʱ�Ļ����Ǵ������С����
//int CheckSys()
//{
//	int a = 1;
//	return *(char*)&a; // ȡ����һ���ֽ�
//}
//
//int main()
//{
//	/*int a = 1;*/
//	//00000000000000000000000000000001  - ������
//	//0x 00 00 00 01 - ʮ������ 
//	int ret = CheckSys();
//	if (ret)
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//}

//-1
//10000000000000000000000000000001 - -1��ԭ��
//11111111111111111111111111111110 - -1�ķ���
//11111111111111111111111111111111 - -1�Ĳ���
//11111111 
//10000000
//10000001

//00000001
//11111110
//11111111

// ��С������
// ����a������b����С������  =  a*b \ ���ǵ����Լ��
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

// �����ַ���
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