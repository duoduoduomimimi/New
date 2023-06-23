#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<ctype.h>

// 模拟实现atoi
//int MyAtoi(const char* str)
//{
//	int ret = 0;
//	bool is_negative = false;
//
//	// 空指针
//	assert(str);
//
//	// 空白字符
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	// 正负号
//	/*if (*str == '-')
//	{
//		is_negative = true;
//	}*/
//	if (*str == '-' || *str == '+')
//	{
//		if (*str == '-')
//		{
//			is_negative = true;
//		}
//		str++;
//	}
//
//	while (*str >= '0' && *str <= '9')
//	{
//		ret = ret * 10 + (*str - '0');
//		str++;
//		// 整数最大值是2147483647，而负数绝对值的最大值是2147483648
//		if (ret < 0)
//		{
//			ret = 2147483647;
//			break;
//		}
//	}
//
//	// 应用正负号
//	if (is_negative)
//	{
//		ret = -ret;
//	}
//
//	return ret;
//}
//
//// 1. 空指针
//// 2. 空字符串
//// 3. 字符串中含有非数字字符
//// 4. 有空白字符
//// 5. +-
//// 6. 超出整数的范围
//
//int main()
//{
//	char arr[20] = "-1234￥";
//	int ret = MyAtoi(arr);
//	printf("atoi test:\nstring: %s\tinteger: %d\n", arr, ret);
//	return 0;
//}

//int MyAtoi(const char* str)
//{
//	assert(str);
//
//	int ret = 0;
//	bool is_negative = false;
//
//
//	// 跳过前置空格符
//	while (*str == ' ')
//	{
//		str++;
//	}
//
//
//	// 判断正负
//	if (*str == '-' || *str == '+')
//	{
//		if (*str == '-')
//		{
//			is_negative = true;
//		}
//		str++;
//	}
//
//
//	// 遍历数组并转换成整数
//	// -789
//	while (*str >= '0' && *str <= '9')
//	{
//		ret = ret * 10 + (*str - '0');
//		str++;
//		// 整数最大值是2147483647，而负数绝对值的最大值是2147483648
//		if (ret < 0)
//		{
//			ret = 2147483647;
//			break;
//		}
//	}
//
//
//	// 应用正负号
//	if (is_negative)
//	{
//		ret = -ret;
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	char str[] = "-789￥";
//	int i = 0;
//	i = MyAtoi(str);
//	printf("atoi test:\nstring: %s\tinteger: %d\n", str, i);
//	return 0;
//}

//int main()
//{
//	// -2
//	// 10000000000000000000000000000010
//	// 11111111111111111111111111111101
//	// 11111111111111111111111111111110
//	// 11111110 内存中的数据 254
//	unsigned char i = 7; // 0 ~ 255
//	int j = 0;
//	// 3 + 84 + 1 + 85 = 173
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d", j);
//	return 0;
//}

// 补码计算，原码打印
//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//	return 0;
//}

// 替换空格
//void ReplaceSpace(char* str, int length) 
//{
//	//数空格
//	int spacecnt = 0;
//	char* p = str;
//	while (*p)
//	{
//		if (*p == ' ')
//		{
//			spacecnt++;
//		}
//		p++;
//	}
//
//	int newlen = length + 2 * spacecnt;
//	int end1 = length - 1;
//	int end2 = newlen - 1;
//	while (end2 != end1)
//	{
//		if (str[end1] != ' ')
//		{
//			str[end2--] = str[end1--];
//		}
//		else
//		{
//			str[end2--] = '0';
//			str[end2--] = '2';
//			str[end2--] = '%';
//			end1--;
//		}
//	}
//}
//
//int main()
//{
//	char str[20] = "We are happy!";
//	int len = strlen(str);
//	printf("%s\n", str);
//	ReplaceSpace(str, len);
//	printf("%s\n", str);
//	return 0;
//}

// 交换奇偶数位
//#define SWAP(num) (num = (((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1)))
//int main()
//{
//	int num = 10;
//	SWAP(num);
//	printf("%d\n", num);
//	return 0;
//}

// offsetof宏的实现
#define Offsetof(st_type,mem_name) (size_t)&(((st_type*)0)->mem_name) 
struct S
{
	int a;
	char c;
	double d;
};

int main()
{
	printf("%d\n", Offsetof(struct S, a));
	printf("%d\n", Offsetof(struct S, c));
	printf("%d\n", Offsetof(struct S, d));

	return 0;
}