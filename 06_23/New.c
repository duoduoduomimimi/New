#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#include<ctype.h>

// ģ��ʵ��atoi
//int MyAtoi(const char* str)
//{
//	int ret = 0;
//	bool is_negative = false;
//
//	// ��ָ��
//	assert(str);
//
//	// �հ��ַ�
//	while (isspace(*str))
//	{
//		str++;
//	}
//
//	// ������
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
//		// �������ֵ��2147483647������������ֵ�����ֵ��2147483648
//		if (ret < 0)
//		{
//			ret = 2147483647;
//			break;
//		}
//	}
//
//	// Ӧ��������
//	if (is_negative)
//	{
//		ret = -ret;
//	}
//
//	return ret;
//}
//
//// 1. ��ָ��
//// 2. ���ַ���
//// 3. �ַ����к��з������ַ�
//// 4. �пհ��ַ�
//// 5. +-
//// 6. ���������ķ�Χ
//
//int main()
//{
//	char arr[20] = "-1234��";
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
//	// ����ǰ�ÿո��
//	while (*str == ' ')
//	{
//		str++;
//	}
//
//
//	// �ж�����
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
//	// �������鲢ת��������
//	// -789
//	while (*str >= '0' && *str <= '9')
//	{
//		ret = ret * 10 + (*str - '0');
//		str++;
//		// �������ֵ��2147483647������������ֵ�����ֵ��2147483648
//		if (ret < 0)
//		{
//			ret = 2147483647;
//			break;
//		}
//	}
//
//
//	// Ӧ��������
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
//	char str[] = "-789��";
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
//	// 11111110 �ڴ��е����� 254
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

// ������㣬ԭ���ӡ
//int main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//	return 0;
//}

// �滻�ո�
//void ReplaceSpace(char* str, int length) 
//{
//	//���ո�
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

// ������ż��λ
//#define SWAP(num) (num = (((num&0x55555555)<<1)+((num&0xaaaaaaaa)>>1)))
//int main()
//{
//	int num = 10;
//	SWAP(num);
//	printf("%d\n", num);
//	return 0;
//}

// offsetof���ʵ��
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