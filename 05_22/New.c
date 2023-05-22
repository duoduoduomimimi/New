#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	//以字节为单位访问数组的这40个字节
//	//char* p = (char*)arr; // 强制类型转换
//	//int i = 0;
//	//for (i = 0; i < 40 ; i++)
//	//{
//	//	*p = 'x';
//	//	p++;
//	//}
//
//	//以4个字节为单位，对数组的这40个字节进行访问
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0x11223344;
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str; // 起始位置
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arr1[16] = { 0 }; // 保存奇数位
//	int arr2[16] = { 0 }; // 保存偶数位
//
//	int i = 0;
//	for (i = 0; i < 32; i++) // 遍历该整数的整个二进制序列
//	{
//		int ret = a & 1;
//		if ((i + 1) % 2 != 0) // 奇数位
//		{
//			if (1 == ret)
//				arr1[i/2] = 1;
//			else
//				arr1[i/2] = 0;
//		}
//		else
//		{
//			if (1 == ret)
//				arr2[i/2] = 1;
//			else
//				arr2[i/2] = 0;
//		}
//		a >>= 1; // 将整个二进制序列右移，更新最低位
//	}
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 10;
//	int b = 8;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main() 
//{
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((a >> i) & 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//	int arr[5];
//	int* vp = NULL;
//	for (vp = &arr[5]; vp > &arr[0];)
//	{
//		*--vp = 0;
//	}
//	
//	for (vp = &arr[4]; vp >= &arr[0]; vp--)
//	{
//		printf("%d ", *vp);
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i)); // 通过指针访问地址
	}

	return 0;
}