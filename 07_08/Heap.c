#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

// ��ʼ��
void HeapInit(Heap* ph)
{
	assert(ph);
	ph->a = NULL;
	ph->size = ph->capacity = 0;
}

// ���� 
void HeapDestroy(Heap* ph)
{
	assert(ph);
	free(ph->a);
	ph->size = ph->capacity = 0;
}

// ��ӡ��
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

// ���ϵ����㷨
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

// �������� - С��
void HeapPush(Heap* ph, HPDataType x)
{
	assert(ph);
	// 1. ���ռ�
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
	// 2. ��������
	ph->a[ph->size] = x;
	ph->size++;
	// 3. ����˳��
	AdjustUp(ph->a, ph->size - 1);
}

// ���µ����㷨
void AdjustDown(HPDataType* a, int size, int parent)
{
	// 1. ѡ�����Һ����н�С��һ��
	int leftchild = parent * 2 + 1;
	int rightchild = parent * 2 + 2;  // ע�⣺����Խ������
	int minchild = 0;
	if (rightchild < size)  //  ���Һ��ӽڵ����
		minchild = a[leftchild] < a[rightchild] ? leftchild : rightchild;
	else
		minchild = leftchild;   // ��û���Һ��ӽڵ㣬minchildֱ�Ӹ�ֵΪ���ӽڵ�

	// 2. С�ĺ��ӽڵ��ֵ�븸�׽ڵ��ֵ�����бȽϣ�
	//    ���ȸ���С�򽻻����������µ��������ȸ��״������

	while (minchild < size)  // ���ӽڵ��Ѿ������ڣ��޷��Ƚ������ѭ��
	{
		if (a[minchild] < a[parent])
		{
			Swap(&a[minchild], &a[parent]);
			parent = minchild;
			leftchild = parent * 2 + 1;
			rightchild = parent * 2 + 2;  // ��û���Һ��ӽڵ㣬�����Խ��������
			if (rightchild < size)
				minchild = a[leftchild] < a[rightchild] ? leftchild : rightchild;
			else
				minchild = leftchild;   // ��û���Һ��ӽڵ㣬minchildֱ�Ӹ�ֵΪ���ӽڵ�
		}
		else

		{
			break;
		}
	}
}

// ɾ���Ѷ�������
void HeapPop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0); // ������һ������

	// ������β����
	Swap(&ph->a[0], &ph->a[ph->size - 1]);

	// ɾ��β����
	ph->size--;

	// ����˳��
	AdjustDown(ph->a, ph->size, 0);
}

// ��ȡ�Ѷ�������
HPDataType HeapTop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0);

	return ph->a[0];
}

// �ж϶��Ƿ�Ϊ��
bool HeapEmpty(Heap* ph)
{
	assert(ph);

	return ph->size == 0;
}

// ���ض����ݸ���
int HeapSize(Heap* ph)
{
	assert(ph);

	return ph->size;
}