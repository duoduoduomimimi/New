#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// ������
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 0; a < 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((1 == (b == 2) + (a == 3)) &&
//                            (1 == (b == 2) + (e == 4)) &&
//                            (1 == (c == 1) + (d == 2)) &&
//                            (1 == (c == 5) + (d == 3)) &&
//                            (1 == (e == 4) + (a == 1)))//ͨ�����ʽ�ķ���ֵֻ��Ϊ1/0��ȷ
//                                                        //����˵�Ļ�һ���һ���,����ͨ���߼������ҵ�ÿ���˶��Ե�
//                        {
//                            if ((a * b * c * d * e) == 120)
//                                goto ture_rank;
//                        }
//                    }
//                }
//            }
//        }
//
//    }
//ture_rank:
//    printf("a������:> %d\nb������:> %d\nc������:> %d\nd������:> %d\ne������:> %d", a, b, c, d, e);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; // ���ַ������ַ�a�ĵ�ַ�����ַ�ָ��p��,�ҳ����ַ����������޸�
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	int* arr[] = { p1,p2,p3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p -> %d\n", arr[i], *arr[i]);
//
//	}
//	return 0;
//}

// ��ָ������ģ���һ����ά���飬��ʹ��
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			// printf("%d ", *(arr[i]+j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int(*p2)[10]; // ����ָ��
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr + 1);
//	
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	return 0;
//}

//int main()
//{
//	char* arr[5];  // �ַ�ָ������
//	char* (*p)[5] = &arr; // ����ָ��
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    while (n >= 1)
//    {
//        ret <<= 1;  // ����λ�г�2��Ч��
//        n--;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

// ����Ա���ԣ�ȥ��һ����߷ֺ�һ����ͷ֣����ƽ���ɼ�
//void bubble_sort(int arr[], int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]); // 1
//	//����
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // �����Ѿ���������
//		//ÿһ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[7] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//	{
//		bubble_sort(arr, sz);
//		float sum = arr[1] + arr[2] + arr[3] + arr[4] + arr[5];
//		printf("%.2f\n", sum / 5);
//	}
//	return 0;
//}

// ����·�����
// 1��3��5��7��8��10��12 - 31
// ��4��6��9��11 - 30
// ���� 2 - 29�������� 2 - 28
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("%d\n",31);
//		}
//		if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("%d\n",30);
//		}
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			{
//				printf("%d\n",29);
//			}
//			else
//			{
//				printf("%d\n",28);
//			}
//		}
//	}
//	return 0;
//}

// ����ˮ�ɻ���
// ��� 5λ���е����� Lily Number
//int IsLilyNumber(int n)
//{
//	// ��һ����λ��n��������Ĳ�� ����4�в�ַ�ʽ
//	// ����n = 12345
//	// 1*2345 + 12*345 + 123*45 + 1234*5
//	//n % 10 //5
//	//n / 10 //1234
//	//n % 100 // 45
//	//n / 100 // 123
//	int i = 0;
//	int sum = 0;
//	for (i = 10; i <= 10000; i *= 10)
//	{
//		sum += (n % i) * (n / i);
//	}
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int ret = IsLilyNumber(i);
//		if (1 == ret)
//			printf("%d ", i);
//	}
//	return 0;
//}

// �ü�����������һ���ַ����ж����Ƿ�Ϊ��ĸ
int IsAlphabet(char ch)
{
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
		return 1;
	}
	return 0;
}
int main()
{
	char ch = '\0';
	ch = getchar();
	int ret = IsAlphabet(ch);
	if (1 == ret)
		printf("YES\n");
	else
		printf("NO\n");
	//printf("%c\n", ch);
	//char a = 'a';
	//char b = 'z';
	//char c = 'A';
	//char d = 'Z';
	//printf("%d\n", a);//97
	//printf("%d\n", b);//122
	//printf("%d\n", c);//65
	//printf("%d\n", d);//90

	return 0;
}