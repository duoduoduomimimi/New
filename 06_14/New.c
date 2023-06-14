#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>

//struct S3
//{
//	int num;
//	int arr[];
//};
//
//int main()
//{
//	struct S3* ps = (struct S3*)malloc(sizeof(struct S3) + 40);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->num = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//
//	// 扩容
//	struct S3* tmp = (struct S3*)realloc(ps, sizeof(struct S3) + 80);
//	if (tmp == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		ps = tmp;
//	}
//
//	for (i = 10; i < 20; i++)
//	{
//		ps->arr[i] = i;
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", sizeof(struct S3));
//	free(ps);
//	ps = NULL;
//	return 0;
//}

// 模拟实现atoi函数： 将字符串中的整数，提取出来，并以整数输出
//int MyAtoi(const char* str)
//{
//	int ret = 0;
//	bool is_negative = false;
//
//	// 跳过前置空格符
//	while (*str == ' ')
//	{
//		str++;
//	}
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
//	// 应用正负号
//	if (is_negative) 
//	{
//		ret = -ret;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char str[] = "-789￥";
//	int i = 0;
//	i = MyAtoi(str);
//	printf("atoi test:\nstring: %s\tinteger: %d\n", str, i);
//	return 0;
//}

//模拟实现strncat
//char* MyStrncat(char* dest,const char* src, size_t count)
//{
//	assert(dest && src);
//	// 保存目标字符串的起始位置
//	char* ret = dest;
//
//	// 找到'\0'的位置
//	while (*dest)
//	{
//		dest++;
//	}
//
//	while (count--)
//	{
//		
//		*dest = *src;
//		dest++;
//		src++;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "Welcome to";
//	char arr2[30] = " New York!";
//	MyStrncat(arr1, arr2, 10);
//	printf("%s\n",arr1);
//	return 0;
//}

// 模拟实现strncpy
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//
//	int i = 0;
//
//	// 复制源字符串的前 n 个字符到目标字符串
//	for (i = 0; i < n && src[i] != '\0'; i++) 
//	{
//		dest[i] = src[i];
//	}
//
//	// 如果源字符串不足 n 个字符，用 '\0' 填充目标字符串
//	for (; i < n; i++) 
//	{
//		dest[i] = '\0';
//	}
//
//	return dest;
//}
//
//int main() {
//	char src[] = "hello, world!";
//	char dest[20];
//
//	my_strncpy(dest, src, 10);
//	dest[10] = '\0'; // 为了安全起见，手动添加 null 终止符
//	printf("源字符串: %s\n", src);
//	printf("目标字符串: %s\n", dest);
//
//	return 0;
//}

//int main()
//{
//	float f = 55.5f;
//	printf("%d\n", sizeof f);
//}


// 找单身狗
// 1 2 3 3 4 4

