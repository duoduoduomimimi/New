#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"
void Test1()
{
	Stack s;
	Stack* ps = &s;
	StackInit(ps);
	StackPush(ps, 1);
	StackPush(ps, 2);
	StackPush(ps, 3);
	StackPush(ps, 4);
	StackPush(ps, 5);
	int size = 0;
	size = StackSize(ps);
	printf("%d:\n", size);
	while (!StackEmpty(ps))
	{
		int ret = StackTop(ps);
		printf("%d ", ret);
		StackPop(ps);
	}
	printf("\n");
	StackDestory(ps);
}

int main()
{
	Test1();
	return 0;
}