#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. ����������ȼ�������������Ԫ�ص��������
//2. ���ڳ������ε���������������л�������������յ������������ֻ����һ�ε����ֵ����
//3. Ȼ�������ҵ�������е�һ��Ϊ1��λ�����λ����������ԭ����ֳ����������飬
//4. һ���������е����������λ��Ϊ1����һ���������е����������λ��Ϊ0��
//5. ������Ƿֱ�����������������������㣬�õ��Ľ����������ֻ����һ�ε����֡�
//void FindTwoSingleNumbers(int arr[], int n, int* num1, int* num2)
//{
//    int xor_result = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        xor_result ^= arr[i];
//    }
//
//    int first_bit_1 = xor_result & (~(xor_result - 1));
//
//    *num1 = 0;
//    *num2 = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        if (arr[i] & first_bit_1)
//        {
//            *num1 ^= arr[i];
//        }
//        else 
//        {
//            *num2 ^= arr[i];
//        }
//    }
//}
//
//int main() 
//{
//    int arr[] = { 1, 2, 3, 3, 4, 4 };
//    int num1 = 0;
//    int num2 = 0;
//
//    FindTwoSingleNumbers(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
//    printf("The two single numbers are: %d and %d\n", num1, num2);
//
//    return 0;
//}

// Ѱ�ҵ���
// ^ ��򣬶�Ӧλ��������Ϊ1����ͬ��Ϊ0
// 5 ��6
// 101
// 110
// 011
// �������֮�󣬶�Ӧλ�����ֵĲ�ͬ���з���
//void FindTwoSingleNumbers(int arr[], int sz)
//{
//	int i = 0;
//	int ret = 0;
//	int single1 = 0;
//	int single2 = 0;
//	// 1. ��arr�����е���������������
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	// 2. �ҳ�����ֻ����һ�����ֵĲ�ͬλ
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1)
//		{
//			single1 ^= arr[i];
//		}
//	}
//	single2 = ret ^ single1;
//	printf("The two single numbers are : % d and %d\n", single1, single2);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	FindTwoSingleNumbers(arr, sz);
//}

// �ļ��Ĳ���
//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// �����ļ� - д
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// ���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	//printf("%c ", ch);
//	fputc(ch,stdout);
//	return 0;
//}

//int main()
//{
//	// ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	// д�ļ� - дһ��
//	/*char arr[] = "Welcome to New York!";
//	fputs(arr, pf);*/
//
//	// ���ļ� - ��һ��
//	char arr[256] = { 0 };
//	while (fgets(arr, 256, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "����", 20, 96.5 };
//	// ���ļ�
//	FILE* pf = fopen("test2.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// �����Ƶķ�ʽд
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//
//	// �ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}

struct S
{
	char name[20];
	int age;
	double d;
};

int main()
{
	struct S s = { 0 };
	// ���ļ�
	FILE* pf = fopen("test2.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	// �����Ƶķ�ʽ��
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s.name, s.age, s.d);

	// �ر��ļ�
	fclose(pf);
	pf = NULL;
}