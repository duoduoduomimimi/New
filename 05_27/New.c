#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<assert.h>

// 逆序字符串
//void ReverseString(char* begin, char* end)
//{
//    while (begin < end)
//    {
//        char tmp = *begin;
//        *begin = *end;
//        *end = tmp;
//        begin++;
//        end--;
//    }
//}
//
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    char* left = arr;
//    char* right = arr + len - 1;
//    ReverseString(left, right);
//    printf("%s\n", arr);
//    return 0;
//}

// 计算求和：求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int s5 = 0;
//	int s4 = 0;
//	int s3 = 0;
//	int s2 = 0;
//	int s1 = 0;
//
//	// 1. 生成前5项的数字
//	int i = 5;
//	while (i)
//	{
//		if (5 == i)
//			s5 = a * 11111;
//		else if (4 == i)
//			s4 = a * 1111;
//		else if (3 == i)
//			s3 = a * 111;
//		else if (2 == i)
//			s2 = a * 11;
//		else
//			s1 = a;
//
//		i--;
//	}
//	// 2. 计算它们的和
//	int sum = 0;
//	sum = s1 + s2 + s3 + s4 + s5;
//	printf("%d\n", sum);
//	return 0;
//}

//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
// 123 / 10 = 12
// 12 / 10 = 1
// 123 % 10 = 3
// 12 % 10 = 2
// 1 % 10 = 1 
//int JuageNum(int n)
//{
//	//static int count = 0;
//	if (n / 10)
//	{
//		//count++;
//		return 1 + JuageNum(n / 10);
//	}
//	return 1;
//}
//int IsDaffodils(int n,int d)
//{
//	int sum = 0;
//	int num = n;
//	while (n)
//	{
//		sum += pow((n % 10), d);
//		n /= 10;
//		//d--;
//	}
//	if (sum == num)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	// 1. 产生0~100000之间的所有数字
//
//	/*int n = 0;
//	scanf("%d", &n);
//	int ret = JuageNum(n);
//	printf("%d\n", ret);*/
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// 2. 判断一个数字是几位数
//		int num = JuageNum(i);
//		// 3. 判断一个数字是否是水仙花数
//		int ret = IsDaffodils(i, num);
//		if (ret)
//		{
//			printf("%d ", i);
//			count++;
//		}
//
//		if (count % 8 == 0)
//			printf("\n");
//	}
//	return 0;
//}

//int JuageNum(int n)
//{
//	//static int count = 0;
//	if (n / 10)
//	{
//		//count++;
//		return 1 + JuageNum(n / 10);
//	}
//	return 1;
//}
//
//int IsDaffodils(int n, int d)
//{
//	int sum = 0;
//	int num = n;
//	while (n)
//	{
//		sum += pow((n % 10), d);
//		n /= 10;
//		//d--;
//	}
//	if (sum == num)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 1000; i++)
//	{
//		// 得到i是几位数
//		int num = JuageNum(i);
//
//		//判断i是否是水仙花数
//		int ret = IsDaffodils(i, num);
//		if (ret)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (count % 8 == 0)
//			printf("\n");
//	}
//	return 0;
//}

// 打印菱形
// 分而治之 ： 打印上半部分，打印下半部分
//#define ROW 13
//#define COL 13
//int main()
//{
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < ROW / 2; i++)
//	{
//		int j = 0;
//		for (j = COL/2; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	// 打印中间行
//	for (i = 0; i < ROW; i++)
//		printf("*");
//
//	printf("\n");
//
//	//打印下半部分
//	for (i = 0; i < ROW/2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = COL-1; j > (2 * i + 1); j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 调整奇数偶数顺序
//void reorder_array(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left < right)
//	{
//		if (arr[left] % 2 != 0)//已为奇数
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)//已为偶数
//		{
//			right--;
//		}
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0 && left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//
//}
//void print(int arr[], int n)
//{
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reorder_array(arr, len);
//
//	print(arr, len);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

// 模拟实现strlen
//int MyStrlen(const char* str)
//{
//	assert(str);
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = NULL;
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//}

//模拟实现strcpy
//char* MyStrcpy(char* det, const char* src)
//{
//	assert(det && src);
//	while (*det++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "Welcome to New York!";
//	char arr2[30] = { 0 };
//	char* ret = MyStrcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d\n", a + b, c);
//	return 0;
//}
// 200
// 00000000000000000000000011001000 - 原码
// 01111111111111111111111100110111 - 反码
// 01111111111111111111111100111000 - 补码

// 100
// 00000000000000000000000001100100 - 原码
// 01111111111111111111111110011011 - 反码
// 01111111111111111111111110011100 - 原码

// 整型提升 - 无符号数
// 00000000000000000000000000111000
// 00000000000000000000000010011100
// 00000000000000000000000011010100 - 补码
// 
// 01111111111111111111111100101011 
// 01111111111111111111111100101100 - 原码
// 00101100

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

// 打印杨辉三角
//1
//1    1
//1    2    1
//1    3    3    1
//1    4    6    4    1
//1    5    10   10   5    1
//1    6    15   20   15   6    1
//1    7    21   35   35   21   7    1
//1    8    28   56   70   56   28   8    1
//1    9    36   84   126  126  84   36   9    1
//1    10   45   120  210  252  210  120  45   10   1
//1    11   55   165  330  462  462  330  165  55   11   1
//1    12   66   220  495  792  924  792  495  220  66   12   1
//#define N 10 // 定义杨辉三角的大小
//int main()
//{
//	int nums[N][N];
//    int i = 0;
//	// 计算杨辉三角
//    for (i = 0; i < N; i++)
//    {
//        nums[i][0] = 1; // 行首元素
//        nums[i][i] = 1; // 行结尾元素
//        int j = 0;
//        for (j = 1; j < i; j++)
//            nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j]; // 计算行中间元素
//    }
//
//    // 打印杨辉三角
//    for (i = 0; i < N; i++)
//    {
//        int j = 0;
//        /*for (j = 0; j < N - i - 1; j++)
//            printf("   ");*/
//        for (j = 0; j <= i; j++)
//            printf("%-5d ", nums[i][j]);
//
//        printf("\n");
//    }
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	
//	// 10000000000000000000000010000000 - 原码
//	// 11111111111111111111111101111111 - 反码
//	// 11111111111111111111111110000000 - 补码
//
//	// 截断
//	// 10000000 - a char
//	// 整型提升 按照符号位补码
//	// 11111111111111111111111110000000 - 补码
//	// 打印时，%u，系统即认为该二进制序列为无符号数的二进制序列 
//	// 11111111111111111111111110000000 - 原码 ， 打印到屏幕上的是原码
//
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	// 00000000000000000000000010000000 - 原码
//	// 00000000000000000000000010000000 - 反码
//	// 00000000000000000000000010000000 - 补码
//	
//	// 截断
//	// 10000000 - a char
//	// 整型提升 补充符号位
//	// 11111111111111111111111100000000 - 补码
//	
//
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

// -20
// 10000000000000000000000000010100 - 原码
// 11111111111111111111111111101011 - 反码
// 11111111111111111111111111101100 - 补码
// 10
// 00000000000000000000000000001010 - 原码、反码、补码
// 11111111111111111111111111101100
// 11111111111111111111111111110110 - 补码 i+j
// 10000000000000000000000000001001 
// 10000000000000000000000000001010 - 原码 打印
// 11111111111111111111111111110101 - 反码
// 11111111111111111111111111110110 - 补码

int main()
{
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	int len = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
		if ((i + 1) % 8 == 0)
			printf("\n");
	}
	return 0;
}