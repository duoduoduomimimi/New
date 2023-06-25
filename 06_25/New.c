#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void Test1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPrint(&s1);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 1);
	SeqListPrint(&s1);
}

void Test2()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 1);
	SeqListPrint(ps);

}

void Test3()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(ps, 5);
	SeqListPushFront(ps, 4);
	SeqListPushFront(ps, 3);
	SeqListPushFront(ps, 2);
	SeqListPushFront(ps, 1);
	SeqListPrint(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPopBack(ps);
	SeqListPushFront(ps, 2);
	SeqListPushFront(ps, 3);
	SeqListPushFront(ps, 2);

	SeqListPrint(ps);
	SeqListDestory(ps);
}

void Test4()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPopFront(ps);
	SeqListPrint(ps);
}

void Test5()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	SeqListInsert(ps, 0, 8);
	SeqListPrint(ps);
}

void Test6()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	SeqListErase(ps, 2);
	SeqListPrint(ps);
	SeqListErase(ps, 0);
	SeqListPrint(ps);
	SeqListErase(ps, ps->size-1);
	SeqListPrint(ps);
	SeqListPopFront(ps);
	SeqListPushFront(ps, 6);
	SeqListPrint(ps);
	SeqListPopBack(ps);
	SeqListPrint(ps);

}

void Test7()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	int x = 0;
	printf("请输入你要删除的值:> ");
	scanf("%d", &x);
	int pos = SeqListFind(ps, x);
	if (pos != -1)
	{
		SeqListErase(ps, pos);
	}
	else
	{
		printf("没有找到\n");
	}
	SeqListPrint(ps);

}

void Test8()
{
	SL s1;
	SL* ps = &s1;
	SeqListInit(ps);
	SeqListPushFront(&s1, 5);
	SeqListPushFront(&s1, 4);
	SeqListPushFront(&s1, 3);
	SeqListPushFront(&s1, 2);
	SeqListPushFront(&s1, 1);
	SeqListPrint(ps);
	int y = 0;
	int z = 0;
	printf("请输入你要修改的值和修改之后的值:> ");
	scanf("%d %d", &y, &z);
	int pos = SeqListFind(ps, y);
	if (pos != -1)
	{
		SeqListModify(ps, pos, z);
	}
	else
	{
		printf("没有找到\n");
	}
	SeqListPrint(ps);
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	//Test7();
	Test8();
	return 0;
}
