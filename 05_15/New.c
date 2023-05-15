#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

// �ַ������� 
// 1. �ݹ�ʵ��
//void ReverseString(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//	left++;
//	if (strlen(left) >= 2)  // �ݹ����������
//		ReverseString(left);
//
//	*right = tmp;
//}

// 2. �ǵݹ�ʵ�� - ʹ�õ�ַ�ķ�ʽ��������ʹ������Ԫ���±�ķ�ʽ
//void ReverseString(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	ReverseString(arr);
//	printf("%s\n", arr);
//	return 0;
//}

// ����һ������ÿλ֮�� - �ݹ�ʵ��
//int DigitSum(int n)
//{
//	if (n > 9)
//		return (n % 10) + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ������n:> ");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("ÿλ֮��Ϊ: %d\n", ret);
//	return 0;
//}

// �ݹ�ʵ��n��k�η�
//double PowerK(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	if (k > 0)
//		return n * PowerK(n, k - 1);
//	if (k < 0)
//		return 1.0 / PowerK(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = PowerK(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

// ��ɶ�����Ĳ���
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//
//	// ��ʼ��
//	//Init(arr, sz);
//	// ��ӡ
//	//Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

// ������������
void SwapArr(int arr1[], int arr2[], int sz)
{
	int i = 0;
	while (sz)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		i++;
		sz--;
	}
}

// ��ӡ����
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Print(arr1, sz);
	Print(arr2, sz);
	printf("����֮��\n");
	SwapArr(arr1, arr2,sz);
	Print(arr1, sz);
	Print(arr2, sz);

	return 0;
}