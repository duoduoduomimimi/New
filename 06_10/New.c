#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
// ģ��strstr
//char* MyStrstr(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//
//	const char* cur = str1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)cur;
//
//		cur++;
//	}
//	return NULL;
//}
//
//// KMP�㷨
//int main()
//{
//	char arr1[] = "abcedqabcedfa";
//	char arr2[] = "edf";
//	char* ret = MyStrstr(arr1, arr2);
//	if (NULL == ret)
//	{
//		printf("�Ҳ����Ӵ�\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

// strtok��ʹ��
//int main()
//{
//	char arr[] = "FanxFangi@126.com";
//	char buf[] = { 0 };
//	strcpy(buf, arr);
//
//	const char* sep = "@.";
//	char* str = NULL;
//	for (str = strtok(buf, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//
//	/*char* ret = strtok(arr, sep);
//	char* cur = strtok(NULL, sep);
//	printf("%s\n", arr);
//	printf("%s\n", cur);
//	printf("%s\n", strtok(NULL,sep));*/
//
//	return 0;
//}

// strerror��ʹ��
// ȫ�ֱ����� errno - 1 2 3 4
// ���磺 ��404�����������ʾ�Ĵ�����Ϣ
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	int* p = (int*)malloc(INT_MAX);
//	if (NULL == p)
//	{
//		perror("Malloc");
//		//printf("%s\n", strerror(errno));
//		return 0;
//	}
//}

// �ַ����ຯ��
//int main()
//{
//	int ret = isdigit('A');
//	printf("%d\n", ret);
//	ret = isdigit('1');
//	printf("%d\n", ret);
//	ret = islower('a');
//	printf("%d\n", ret);
//	ret = islower('A');
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	putchar(tolower(ch));
//
//	return 0;
//}

// ģ��memcpy
//void* MyMemcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	char* cur =(char*)src;
//	char* tmp = (char*)dest;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*tmp = *cur;
//		tmp++;
//		cur++;
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[5] = { 0 };
//	int* cur = (int*)MyMemcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", cur[i]);
//	}
//	return 0;
//}

// ģ��memmove �ص��ڴ�Ŀ���
//void* MyMemmove(void* dest, const void* src, size_t num)
//{
//	char* cur = (char*)src;
//	char* tmp = (char*)dest;
//	if (dest < src)
//	{
//		// ��ǰ�����п���
//		while (num--)
//		{
//			*tmp = *cur;
//			tmp++;
//			cur++;
//		}
//	}
//	else
//	{
//		// �Ӻ���ǰ���п���
//		cur = cur + num - 1;
//		tmp = tmp + num - 1;
//		while (num--)
//		{
//			*tmp = *cur;
//			tmp--;
//			cur--;
//		}
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	MyMemmove(arr1, arr1 + 2, 20);
//	//memmove(arr1, arr1 + 2, 20);
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

// �ṹ��������
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

int main()
{
	struct Node n1;
	Node n2;
	return 0;
}