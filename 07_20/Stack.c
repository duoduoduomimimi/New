#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

// 初始化栈
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = ps->top = 0; // 栈顶的位置无数据
}

// 检测栈是否为空
bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

// 入栈
void StackPush(Stack* ps,STDataType x)
{
	assert(ps);
	// 检查是否需要扩容
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

// 出栈
void StackPop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

// 取栈顶的元素
STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

// 获取栈中有效元素的个数
int StackSize(Stack* ps)
{
	assert(ps);

	return ps->top;
}

// 销毁栈
void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->top = ps->capacity = 0;
}