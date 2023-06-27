#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void Test1()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
}

void Test2()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);

	SListPushBack(&n1, 5);
	SListPrint(&n1);
	SListPushBack(&n1, 4);
	SListPushBack(&n1, 3);
	SListPushBack(&n1, 2);
	SListPushBack(&n1, 1);
	SListPrint(n1);

}

void Test3()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SListPushFront(&n1, 0);
	SListPushFront(&n1, -1);
	SListPushFront(&n1, -2);
	SListPushFront(&n1, -3);
	SListPushFront(&n1, -4);

	SListPrint(n1);

}

void Test4()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode** pphead = &n1;
	SListPopFront(pphead);
	SListPopFront(pphead);
	SListPopFront(pphead);
	SListPopFront(pphead);
	SListPopFront(pphead);

	SListPrint(n1);

}

void Test5()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode** pphead = &n1;
	SListPopBack(pphead);
	SListPrint(n1);
	SListPopBack(pphead);
	SListPrint(n1);
	SListPopBack(pphead);
	SListPrint(n1);
	SListPopBack(pphead);

	SListPrint(n1);
}

void Test6()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode* phead = n1;
	int x = 0;
	int y = 0;
	printf("请输入要修改的值和修改之后的值:> ");
	scanf("%d %d", &x, &y);
	SListModify(phead, x, y);
	SListPrint(n1);
}
void Test7()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode* phead = n1;
	SLNode** pphead = &n1;
	int x = 0;
	int y = 0;
	printf("输入指定的插入位置与要插入的数字（在该位置之前插入):> ");
	scanf("%d %d", &x, &y);
	SLNode* pos = SListFind(phead, x);
	SListInsert(pphead, pos, y);
	SListPrint(n1);

}

void Test8()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode* phead = n1;
	SLNode** pphead = &n1;
	int x = 0;
	int y = 0;
	printf("输入指定的插入位置与要插入的数字（在该位置之后插入):> ");
	scanf("%d %d", &x, &y);
	SLNode* pos = SListFind(phead, x);
	SListInsertAfter(pos, y);
	SListPrint(n1);

}

void Test9()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode* phead = n1;
	SLNode** pphead = &n1;
	int x = 0;
	printf("输入要删除的数字:> ");
	scanf("%d", &x);
	SLNode* pos = SListFind(phead, x);
	SListErase(pphead, pos);
	SListPrint(n1);
}

void Test10()
{
	SLNode* n1 = (SLNode*)malloc(sizeof(SLNode));
	assert(n1);

	SLNode* n2 = (SLNode*)malloc(sizeof(SLNode));
	assert(n2);

	SLNode* n3 = (SLNode*)malloc(sizeof(SLNode));
	assert(n3);

	SLNode* n4 = (SLNode*)malloc(sizeof(SLNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	SListPrint(n1);
	SLNode* phead = n1;
	SLNode** pphead = &n1;
	int x = 0;
	printf("输入所删除数字的前一个数字:> ");
	scanf("%d", &x);
	SLNode* pos = SListFind(phead, x);
	SListEraseAfter(pos);
	SListPrint(n1);
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
	//Test8();
	//Test9();
	Test10();
	return 0;
}
