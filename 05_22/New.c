#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	//���ֽ�Ϊ��λ�����������40���ֽ�
//	//char* p = (char*)arr; // ǿ������ת��
//	//int i = 0;
//	//for (i = 0; i < 40 ; i++)
//	//{
//	//	*p = 'x';
//	//	p++;
//	//}
//
//	//��4���ֽ�Ϊ��λ�����������40���ֽڽ��з���
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 0x11223344;
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str; // ��ʼλ��
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int arr1[16] = { 0 }; // ��������λ
//	int arr2[16] = { 0 }; // ����ż��λ
//
//	int i = 0;
//	for (i = 0; i < 32; i++) // ��������������������������
//	{
//		int ret = a & 1;
//		if ((i + 1) % 2 != 0) // ����λ
//		{
//			if (1 == ret)
//				arr1[i/2] = 1;
//			else
//				arr1[i/2] = 0;
//		}
//		else
//		{
//			if (1 == ret)
//				arr2[i/2] = 1;
//			else
//				arr2[i/2] = 0;
//		}
//		a >>= 1; // �������������������ƣ��������λ
//	}
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
//}

//����������ʱ������������������������
//int main()
//{
//	int a = 10;
//	int b = 8;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main() 
//{
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((a >> i) & 1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//int main()
//{
//	int arr[5];
//	int* vp = NULL;
//	for (vp = &arr[5]; vp > &arr[0];)
//	{
//		*--vp = 0;
//	}
//	
//	for (vp = &arr[4]; vp >= &arr[0]; vp--)
//	{
//		printf("%d ", *vp);
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i)); // ͨ��ָ����ʵ�ַ
	}

	return 0;
}