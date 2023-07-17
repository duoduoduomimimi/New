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

void Swap(HPDataType* p1, HPDataType* p2);  // 交换数据
void AdjustUp(HPDataType* a, int child); // 向上调整算法
void AdjustDown(HPDataType* a, int size, int parent);  // 向下调整算法
void HeapPrint(Heap* ph);  // 打印堆
void HeapInit(Heap* ph);  // 初始化
void HeapDestroy(Heap* ph);  // 销毁 
void HeapPush(Heap* ph, HPDataType x);  // 插入数据
void HeapPop(Heap* ph);  // 删除堆顶的数据
HPDataType HeapTop(Heap* ph);  // 获取堆顶的数据
bool HeapEmpty(Heap* ph);  // 判断堆是否为空
int HeapSize(Heap* ph); // 返回堆数据个数