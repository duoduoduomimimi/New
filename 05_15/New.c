#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

// 字符串逆序 
// 1. 递归实现
//void ReverseString(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//	left++;
//	if (strlen(left) >= 2)  // 递归结束的条件
//		ReverseString(left);
//
//	*right = tmp;
//}

// 2. 非递归实现 - 使用地址的方式，还可以使用数组元素下标的方式
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

// 计算一个数的每位之和 - 递归实现
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
//	printf("请输入一个整数n:> ");
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("每位之和为: %d\n", ret);
//	return 0;
//}

// 递归实现n的k次方
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

// 完成对数组的操作
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
//	// 初始化
//	//Init(arr, sz);
//	// 打印
//	//Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

// 交换两个数组
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

// 打印数组
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
	printf("交换之后\n");
	SwapArr(arr1, arr2,sz);
	Print(arr1, sz);
	Print(arr2, sz);

	return 0;
}