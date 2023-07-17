#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<time.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}Heap;

void Swap(HPDataType* p1, HPDataType* p2);  // ��������
void AdjustUp(HPDataType* a, int child); // ���ϵ����㷨
void AdjustDown(HPDataType* a, int size, int parent);  // ���µ����㷨
void HeapPrint(Heap* ph);  // ��ӡ��
void HeapInit(Heap* ph);  // ��ʼ��
void HeapDestroy(Heap* ph);  // ���� 
void HeapPush(Heap* ph, HPDataType x);  // ��������
void HeapPop(Heap* ph);  // ɾ���Ѷ�������
HPDataType HeapTop(Heap* ph);  // ��ȡ�Ѷ�������
bool HeapEmpty(Heap* ph);  // �ж϶��Ƿ�Ϊ��
int HeapSize(Heap* ph); // ���ض����ݸ���