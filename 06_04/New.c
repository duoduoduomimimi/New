#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//                day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}

//序列中删除指定数字
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//
//	// 统计制定数字在序列中出现的次数，以判断有没有重复
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == del)
//		{
//			count++;
//		}
//	}
//	int num = n - count;
//	while (count)
//	{
//		// 若重复出现，先找到其中一个制定数字在序列中的下标
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] == del)
//			{
//				break;
//			}
//		}
//
//		// 删除该数字
//		int j = 0;
//		int k = i;
//		for (j = k + 1; j < n; j++)
//		{
//			arr[k] = arr[j];
//			k++;
//		}
//
//		count--;
//	}
//	
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// X型图案
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//        int i = 0;
//        int j = 0;
//
//        for (i = 1; i <= n; i++) {
//            for (j = 1; j <= n; j++) {
//                if (i == j || i == n - j + 1) {
//                    printf("*");
//                }
//                else {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//	}
//	return 0;
//}