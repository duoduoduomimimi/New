#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

// ��ʼ��
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// ����
void SeqListDestory(SL* ps)
{
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->capacity = ps->size = 0;
	}
}

// ��ӡ
void SeqListPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

// ����
void SeqListCheckCapacity(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp != NULL)
		{
			ps->a = tmp;
		}
		else
		{
			perror("CheckCapacity::realloc\n");
			exit(-1);
		}
		ps->capacity = newCapacity;
	}
}

// β��
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
	//assert(ps);
	//// ��������ռ�
	//SeqListCheckCapacity(ps);

	//ps->a[ps->size] = x;
	//ps->size++;
}

// ͷ��
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
	//assert(ps);
	//SeqListCheckCapacity(ps);

	//// Ų������
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	end--;
	//}
	//ps->a[0] = x;
	//ps->size++;
}

// βɾ
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
	//assert(ps);

	//// �������
	//assert(ps->size);
	////ps->size--;
	//// ����Խ�����Խ�����
	//if (ps->size)
	//{
	//	ps->size--;
	//}
	//else
	//{
	//	printf("SeqList is already empty"); // ������
	//	exit(-1);
	//}
	
}

// ͷɾ
void SeqListPopFront(SL* ps)
{
	SeqListErase(ps, 0);
	//assert(ps);

	//assert(ps->size);
	//int i = 0;
	//if (ps->size)
	//{
	//	for (i = 0; i < ps->size - 1; i++)
	//	{
	//		ps->a[i] = ps->a[i + 1];
	//	}
	//	ps->size--;
	//}
	//else
	//{
	//	printf("SeqList is already empty"); // ������
	//	exit(-1);
	//}
}

// ����λ�ò���
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	// ����ʽ���
	assert(ps); 
	assert(pos >= 0 && pos <= ps->size);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

// ����λ��ɾ��
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	int begin = pos;
	while (begin < ps->size-1) // �߽����
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}

// ����
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i; // �����±�
		}
	}
	return -1;
}

// �޸�
void SeqListModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}