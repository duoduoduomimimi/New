#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void Print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i)); // *p 相当于数组名，而数组名又是首元素的地址，所以*p就是&arr[0]
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(&arr, sz);
//	return 0;
//}

//void Print1(int arr[3][5],int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print2(int (*p)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d " ,* (*(p + i) + j));
//			// p+i是指向第i行的
//			// *(p+i) 相当于拿到了第i行，即第i行首元素的地址
//			//  <=> printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	// 写一个函数，打印arr数组
//	Print1(arr, 3, 5);
//	return 0;
//}

//int i; // 全局变量如果没有初始化，默认会被初始化0
//
//int main()
//{
//    i--; // -1
//    //sizeof 是一个操作符，这个操作符的返回结果类型为size_t, size_t是无符号整型
//    //所以会进行算术转化
//    //1111111111111111111111111111111
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int NumberOf1(int m)
//{
//	int count = 0;
//	unsigned int n = m;
//	while (n)
//	{
//		if (n % 2)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n &= (n - 1); // 可以把二进制序列中的所有1都去掉，有几个1，循环就执行几次，效率提高
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}

// 写一个代码判断整数n是不是2的幂次方
//int PowOf2(int n)
//{
//	if ((n & (n - 1)) == 0)
//		return 1;
//	
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = PowOf2(n);
//	if (ret)
//		printf("%d是2的幂次方\n", n);
//	else
//		printf("%d不是2的幂次方\n", n);
//
//	return 0;
//}

//字符串左旋
// ABCD 左旋一个字符 BCDA
// ABCD 左旋两个字符 CDAB
//void LeftHandedStringOne(char* str, int len)
//{
//	char tmp = str[0]; // 保存首元素
//	int i = 0;
//	while (i < len - 1)
//	{
//		// 移尾
//		str[i] = str[i + 1];
//		i++;
//	}
//
//	str[i] = tmp;
//}
//
//void LeftHandedString(char* str, int k, int len)
//{
//	int n = k % len;  // 有效次数
//	while (n)
//	{
//		LeftHandedStringOne(str, len);
//		n--;
//	}
//}
//
//int main()
//{
//	char str[20];
//	gets(str);
//	printf("%s\n", str);
//
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(str);
//	LeftHandedString(str, k, len);
//	printf("%s\n", str);
//	return 0;
//}

// 在杨氏三角中，查找某个数字是否存在
int FindNumber(int arr[][5], int row, int col, int n)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (n < arr[x][y])
		{
			y--;
		}
		else if (n > arr[x][y])
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{16,18,33,67,79} }; // 给定一个杨氏三角
	int ret = FindNumber(arr, 3, 5, n);
	if (1 == ret)
		printf("%d在该数字矩阵中存在\n", n);
	else
		printf("%d在该数字矩阵中不存在\n", n);

	return 0;
}