#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

// ��ʼ��ջ
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0; // ջ����λ��������
}

// ���ջ�Ƿ�Ϊ��
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

// ��ջ
void StackPush(Stack* ps,STDataType x)
{
	assert(ps);
	// ����Ƿ���Ҫ����
	if (ps->top == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* new = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (new == NULL)
		{
			perror("StackPush::realloc\n");
			exit(-1);
		}
		ps->a = new;
		ps->capacity = newCapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

// ��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

// ȡջ����Ԫ��
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

// ��ȡջ����ЧԪ�صĸ���
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;
}

// ����ջ
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->top = ps->capacity = 0;
}