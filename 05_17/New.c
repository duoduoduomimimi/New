#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	//00000000000000000000000000000101
//	// �����ƶ�һλ
//	printf("%d %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	//int c = a & b;  // 3
//	//int c = a | b;  // -5
//	int c = a ^ b;  // -8
//
//	printf("%d", c);
//	return 0;
//}

// �ҳ�ֻ����һ�ε����� �� 1 2 3 4 5 1 2 3 4
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("ֻ����һ�ε�����Ϊ:> %d", ret);
//	return 0;
//}

// �������������Ľ��������ܴ�����ʱ����
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("a=%d b=%d\n", a, b);
//
//	// ����һ  ���������������Χ��Ǳ������
//	a = a + b;
//	b = a - b; // a
//	a = a - b; // b
//
//	// ������   �������  ���� b = 0
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	// ������
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//��һ���������洢���ڴ��ж�����1�ĸ���
//5
//0000000000000000000000000000000000101
//�����λ����λ��1���ٽ�������λ�ı����λ
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

// C������C99֮ǰû�б�ʾ��ٵ�����
// C99�������˲������� - false true
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag1 = true;
//	int num = 10;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));*/
//
//	/*int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));*/
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 2)); // 2
//	printf("%d\n", s);  // 0
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);  // -1
//	return 0;
//}

