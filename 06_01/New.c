#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//// 空心三角形图案
//int main()
//{
//	int rows = 0;
//	while (scanf("%d", &rows) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1; i <= rows; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//				if (i == rows || j == i || j == 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main() {
//    int rows, i, j, space;
//
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//
//    for (i = 1; i <= rows; i++) {
//        // 打印空格
//        for (space = 1; space <= rows - i; space++) {
//            printf(" ");
//        }
//
//        // 打印三角形的边
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (i == rows || j == 1 || j == 2 * i - 1) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//
//        printf("\n");
//    }
//
//    return 0;
//}

//void OrderArrMerge(int* ret, int* arr1, int* arr2, int n, int m)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n && j < m) 
//	{
//		if (arr1[i] <= arr2[j]) 
//		{
//			ret[k] = arr1[i];
//			i++;
//		}
//		else 
//		{
//			ret[k] = arr2[j];
//			j++;
//		}
//		k++;
//	}
//
//	// 将剩余的元素复制到合并后的序列中
//	while (i < n) 
//	{
//		ret[k] = arr1[i];
//		i++;
//		k++;
//	}
//	while (j < m) 
//	{
//		ret[k] = arr2[j];
//		j++;
//		k++;
//	}
//}

//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[1000] = { 0 };
//	scanf("%d %d", &n, &m);
//	// 输入
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	OrderArrMerge(arr3, arr1, arr2, n, m);
//	// 打印
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	//printf("\n");
//
//	//for (i = 0; i < m; i++)
//	//{
//	//	printf("%d ", arr2[i]);
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	printf("%d ", arr1[i]);
//	//}
//	printf("\n");
//
//	return 0;
//}

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	//fgets(arr, 100, stdin);
//	printf("%s\n", arr);
//	return 0;
//}