#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

void PrintArray(int* a, int sz); // ��ӡ����
void InsertSort(int* a, int n); // ��������
void ShellSort(int* a, int n); // ϣ������
void SelectSort(int* a, int n); // ѡ������
void BubbleSort(int* a, int n); // ð������
void HeapSort(int* a, int n); // ������
void QuickSort(int* a, int begin, int end); // ��������(�ݹ�ʵ��)
void QuickSortNonR(int* a, int left, int right); // �������򣨷ǵݹ�ʵ�֣�
void MergeSort(int* a, int n); // �鲢���򣨵ݹ�ʵ�֣�
void MergeSortNonR(int* a, int n); // �鲢����ǵݹ�ʵ��
void CountSort(int* a, int n); // ��������