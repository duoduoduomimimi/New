#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	//int* p = (int*)malloc(40);
//
//	// ����10�����͵Ŀռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr; // ���ݳɹ�
//	}
//	for (i = 10; i < 20; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10, 4);
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}

// ��NULLָ����н����÷���
int main()
{
	int* p = (int*)malloc(1000);
	int i = 0;
	if (p == NULL)
	{
		perror("malloc");
		return 1;
	}

	for (i = 0; i < 250; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	return 0;
}

// Խ�����
//int main()
//{
//	int* p = (int*)malloc(100);
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

// �ͷŷǶ�̬���ٵ��ڴ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S1
//{
//	int i;
//	char ch;
//	int arr[];//���������Ա
//};
//
//int main()
//{
//	int i = 0;
//	struct S1* p = (struct S1*)malloc(sizeof(struct S1) + 10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	p->i = 100;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//		printf("%d ", p->arr[i]);
//	}
//	printf("\n");
//	free(p);
//	return 0;
//}

//struct S1
//{
//	int i;
//	int* pa;
//};
//
//int main()
//{
//	struct S1* p = (struct S1*)malloc(sizeof(struct S1));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	p->i = 10;
//	p->pa = (int*)malloc(p->i * sizeof(int));
//	if (p->pa == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->pa[i] = i;
//		printf("%d ", p->pa[i]);
//	}
//	printf("\n");
//	//�ͷſռ�
//	free(p->pa);
//	p->pa = NULL;
//	free(p);
//	p = NULL;
//}

// ����1
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

// ����2
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

// ����3
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//}

// ����4
//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//
//int main()
//{
//	Test();
//	return 0;
//}