#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define M 100


// strlen : �������ַ����ĳ���
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}

// ö�� - һһ�о�
// �Ա� �� �С�Ů������
// ��ԭɫ�� red��green��blue
// ���ڣ� 1��2��3��4��5��6��7

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	// ö�ٳ���
//	enum Color c = RED;
//	printf("%d %d %d", RED, GREEN, BLUE);
//
//	return 0;
//}

//int main()
//{
//	int n = M;
//	printf("%d ", n);
//	int arr[M] = { 0 };
//	return 0;
//}

//int main()
//{
//	// ���泣��
//	20;
//	'a'; // �ַ�����
//	"abcdef"; // �ַ�������
//
//	int num = 10;
//	printf("%d ", num);
//
//	// �޸�
//	num = 20;
//	printf("%d ", num);
//
//
//	return 0;
//}