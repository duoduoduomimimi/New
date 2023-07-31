#define _CRT_SECURE_NO_WARNINGS 1
#include"Sort.h"

void Test1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	InsertSort(arr, sz);
	PrintArray(arr, sz);
}

void Test2()
{
	int arr[] = { 9,1,2,5,7,4,8,6,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	ShellSort(arr, sz);
	PrintArray(arr, sz);
}

void Test3()
{
	int arr[] = { 9,1,2,5,7,4,8,6,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	HeapSort(arr, sz);
	PrintArray(arr, sz);
}

void Test4()
{
	int arr[] = { 9,1,2,5,7,4,8,6,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	SelectSort(arr, sz);
	PrintArray(arr, sz);
}

void Test5()
{
	int arr[] = { 9,1,2,5,7,4,8,6,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	BubbleSort(arr, sz);
	PrintArray(arr, sz);
}

void Test6()
{
	int arr[] = { 9,1,2,8,7,4,5,6,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	QuickSort(arr, 0, sz - 1);
	//QuickSortNonR(arr, 0, sz - 1);
	PrintArray(arr, sz);
}

void Test7()
{
	int arr[] = { 9,1,3,0,11,4,5,6,2,8,10,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	//MergeSort(arr, sz);
	MergeSortNonR(arr, sz);
	PrintArray(arr, sz);
}

void Test8()
{
	int arr[] = {1,2,3,2,4,6,5,4,8,7,6,10,0,-1,-2};
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, sz);
	CountSort(arr, sz);
	PrintArray(arr, sz);
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	//Test7();
	Test8();
	return 0;
}