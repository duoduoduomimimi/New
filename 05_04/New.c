#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
// 
//void test1()
//{
//	static int a = 1;  // �ֲ���̬���� �����������ڽ���������������
//	a++;
//	printf("%d ", a);
//}
// 
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	printf("\n");
//
//	i = 0;
//	while (i < 10)
//	{
//		test1();
//		i++;
//	}
//	return 0;
//}

//extern val; // �ڵ�ǰ�ļ��ڣ������ⲿ����
//
//int main()
//{
//	printf("%d ", val);
//	return 0;
//}

// �ڵ�ǰ�ļ��ڣ������ⲿ����
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//#define Max 100
//
//int main()
//{
//	int arr[Max] = { 0 };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//		if ((i+1) % 10 == 0)
//		{
//			printf("\n");
//		}
//	}
//	//printf("%d ", Max);
//	return 0;
//}

//#define STR "hello world!"
//
//int main()
//{
//	printf("%s\n", STR);
//	return 0;
//}

// ��
//#define MAX(x,y) (x>y?x:y)

// ������ʵ��
//int GetMax(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = MAX(a, b);
//	int res = GetMax(a, b);
//	printf("%d ", ret);
//	printf("\n%d ", res);
//	return 0;
//}

//int main()
//{
//	int a = 10; // 4byte
//	printf("%p\n", &a);
//	return 0;
//}

// �ڴ浥Ԫ���б�ţ������ž��ǵ�ַ�����ǰ������ַҲ����ָ��
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;  // pa��������ŵ�ַ�ģ��������ǰ�pa��ָ�����
//	printf("%p\n", pa);
//	printf("%d\n", *pa);
//	int* ppa = &pa;
//	printf("%p\n", ppa);
//	printf("00%X\n", *ppa);
//	int* pppa = &ppa;
//	printf("%p\n", pppa);
//	printf("00%X\n", *pppa);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	int a = 10;
//
//	int* pa = &a;
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	return 0;
//}

//�ṹ�� - ���� ͼֽ ����������֮��
struct Stu
{
	char name[20]; // ����
	int age; // ����
	char sex[10]; // �Ա�
	char id[20]; // ѧ��
};
void Print(struct Stu* ps)
{
	printf("\n%s %d %s %s", ps->name, ps->age, ps->sex, ps->id);
}

int main()
{
	struct Stu s1 = { "����", 18, "��", "20401240187" }; // ѧ��1
	struct Stu s2 = { "�绨", 45, "Ů", "20401240178" }; // ѧ��2
	struct Stu* ps = &s2;
	printf("%s %d %s %s", s1.name, s1.age, s1.sex, s1.id);
	printf("\n%s %d %s %s", ps->name, ps->age, ps->sex, ps->id);
	scanf("%s %d %s %s", s1.name, &(s1.age), s1.sex, s1.id);
	Print(&s1);
	Print(ps);

	return 0;
}