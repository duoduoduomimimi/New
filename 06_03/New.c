#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;
//        --right;
//    }
//}
//
//int main()
//{
//    char str[101] = { 0 };
//    while (gets(str)) // 多组输入gets
//    {
//        Reverse(str);
//        printf("%s\n", str);
//        memset(str, 0, sizeof(str) / sizeof(str[0]));
//    }
//    return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}

//void reorder_array(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//
//	while (left < right)
//	{
//		if (arr[left] % 2 != 0)//已为奇数
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)//已为偶数
//		{
//			right--;
//		}
//		if (arr[left] % 2 == 0 && arr[right] % 2 != 0 && left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//
//
//}
//
//void print(int arr[], int n)
//{
//	int i = 0;
//	for (i; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 2,2,2,2,2,2,2,2,2,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	reorder_array(arr, len);
//
//	print(arr, len);
//	return 0;
//}