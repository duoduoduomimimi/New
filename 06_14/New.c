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
//	// ����
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

// ģ��ʵ��atoi������ ���ַ����е���������ȡ�����������������
//int MyAtoi(const char* str)
//{
//	int ret = 0;
//	bool is_negative = false;
//
//	// ����ǰ�ÿո��
//	while (*str == ' ')
//	{
//		str++;
//	}
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
//	// Ӧ��������
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
//	char str[] = "-789��";
//	int i = 0;
//	i = MyAtoi(str);
//	printf("atoi test:\nstring: %s\tinteger: %d\n", str, i);
//	return 0;
//}

//ģ��ʵ��strncat
//char* MyStrncat(char* dest,const char* src, size_t count)
//{
//	assert(dest && src);
//	// ����Ŀ���ַ�������ʼλ��
//	char* ret = dest;
//
//	// �ҵ�'\0'��λ��
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

// ģ��ʵ��strncpy
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//
//	int i = 0;
//
//	// ����Դ�ַ�����ǰ n ���ַ���Ŀ���ַ���
//	for (i = 0; i < n && src[i] != '\0'; i++) 
//	{
//		dest[i] = src[i];
//	}
//
//	// ���Դ�ַ������� n ���ַ����� '\0' ���Ŀ���ַ���
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
//	dest[10] = '\0'; // Ϊ�˰�ȫ������ֶ���� null ��ֹ��
//	printf("Դ�ַ���: %s\n", src);
//	printf("Ŀ���ַ���: %s\n", dest);
//
//	return 0;
//}

//int main()
//{
//	float f = 55.5f;
//	printf("%d\n", sizeof f);
//}


// �ҵ���
// 1 2 3 3 4 4

