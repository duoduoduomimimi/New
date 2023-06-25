#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

// 初始化
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// 销毁
void SeqListDestory(SL* ps)
{
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->capacity = ps->size = 0;
	}
}

// 打印
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

// 扩容
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

// 尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListInsert(ps, ps->size, x);
	//assert(ps);
	//// 检查容量空间
	//SeqListCheckCapacity(ps);

	//ps->a[ps->size] = x;
	//ps->size++;
}

// 头插
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListInsert(ps, 0, x);
	//assert(ps);
	//SeqListCheckCapacity(ps);

	//// 挪动数据
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	end--;
	//}
	//ps->a[0] = x;
	//ps->size++;
}

// 尾删
void SeqListPopBack(SL* ps)
{
	SeqListErase(ps, ps->size - 1);
	//assert(ps);

	//// 暴力检查
	//assert(ps->size);
	////ps->size--;
	//// 避免越界访问越界访问
	//if (ps->size)
	//{
	//	ps->size--;
	//}
	//else
	//{
	//	printf("SeqList is already empty"); // 温柔检查
	//	exit(-1);
	//}
	
}

// 头删
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
	//	printf("SeqList is already empty"); // 温柔检查
	//	exit(-1);
	//}
}

// 任意位置插入
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	// 防御式检查
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

// 任意位置删除
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	int begin = pos;
	while (begin < ps->size-1) // 边界控制
	{
		ps->a[begin] = ps->a[begin + 1];
		begin++;
	}
	ps->size--;
}

// 查找
int SeqListFind(SL* ps, SLDataType x)
{
	assert(ps);

	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i; // 返回下标
		}
	}
	return -1;
}

// 修改
void SeqListModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}