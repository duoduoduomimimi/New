#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

// 初始化
void HeapInit(Heap* ph)
{
	assert(ph);
	ph->a = NULL;
	ph->size = ph->capacity = 0;
}

// 销毁 
void HeapDestroy(Heap* ph)
{
	assert(ph);
	free(ph->a);
	ph->size = ph->capacity = 0;
}

// 打印堆
void HeapPrint(Heap* ph)
{
	int i = 0;
	for (i = 0; i < ph->size; i++)
	{
		printf("%d ", ph->a[i]);
	}
	printf("\n");
}


void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

// 向上调整算法
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

// 插入数据 - 小堆
void HeapPush(Heap* ph, HPDataType x)
{
	assert(ph);
	// 1. 检查空间
	if (ph->size == ph->capacity)
	{
		int newcapacity = ph->capacity == 0 ? 4 : 2 * ph->capacity;
		HPDataType* tmp = (HPDataType*)realloc(ph->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("HeapPush::realloc");
			exit(-1);
		}
		ph->a = tmp;
		ph->capacity = newcapacity;
	}
	// 2. 插入数据
	ph->a[ph->size] = x;
	ph->size++;
	// 3. 调整顺序
	AdjustUp(ph->a, ph->size - 1);
}

// 向下调整算法
void AdjustDown(HPDataType* a, int size, int parent)
{
	// 1. 选出左右孩子中较小的一个
	int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;  // 注意：存在越界问题
	int minchild = 0;
	if (rightchild < size)  //  若右孩子节点存在
		minchild = a[leftchild] < a[rightchild] ? leftchild : rightchild;
	else
		minchild = leftchild;   // 若没有右孩子节点，minchild直接赋值为左孩子节点

	// 2. 小的孩子节点的值与父亲节点的值，进行比较；
	//    若比父亲小则交换，继续向下调整；若比父亲大，则结束

	while (minchild < size)  // 孩子节点已经不存在，无法比较则结束循环
	{
		if (a[minchild] < a[parent])
		{
			Swap(&a[minchild], &a[parent]);
			parent = minchild;
			leftchild = parent * 2 + 1;
			rightchild = parent * 2 + 2;  // 若没有右孩子节点，会产生越界问题吗？
			if (rightchild < size)
				minchild = a[leftchild] < a[rightchild] ? leftchild : rightchild;
			else
				minchild = leftchild;   // 若没有右孩子节点，minchild直接赋值为左孩子节点
		}
		else

		{
			break;
		}
	}
}

// 删除堆顶的数据
void HeapPop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0); // 至少有一个数据

	// 交换首尾数据
	Swap(&ph->a[0], &ph->a[ph->size - 1]);

	// 删除尾数据
	ph->size--;

	// 调整顺序
	AdjustDown(ph->a, ph->size, 0);
}

// 获取堆顶的数据
HPDataType HeapTop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0);

	return ph->a[0];
}

// 判断堆是否为空
bool HeapEmpty(Heap* ph)
{
	assert(ph);

	return ph->size == 0;
}

// 返回对数据个数
int HeapSize(Heap* ph)
{
	assert(ph);

	return ph->size;
}