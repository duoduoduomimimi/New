#define _CRT_SECURE_NO_WARNINGS 1
#include "DList.h"
void Test1()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListPushBack(plist, 5);
	ListPrint(plist);
}

void Test2()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListPushFront(plist, 0);
	ListPushFront(plist, -1);
	ListPushFront(plist, -2);
	ListPushFront(plist, -3);
	ListPushFront(plist, -4);
	ListPrint(plist);
}

void Test3()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);	
	ListPushFront(plist, 0);
	ListPushFront(plist, -1);
	ListPushFront(plist, -2);
	ListPushFront(plist, -3);
	ListPushFront(plist, -4);
	ListPrint(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPopBack(plist);
	ListPrint(plist);

}

void Test4()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListPushBack(plist, 3);
	ListPushBack(plist, 2);
	ListPushBack(plist, 1);
	ListPrint(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

}

void Test5()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	int x = 0;
	int y = 0;
	printf("请输入要插入的位置与要插入的数字（在该节点之前插入):> ");
	scanf("%d %d", &x, &y);
	LTNode* pos = ListFind(plist, x);
	if (pos != NULL)
	{
		ListInsert(pos, y);
	}
	else
	{
		printf("输入不合法\n");
	}
	ListPrint(plist);

}

void Test6()
{
	LTNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	int x = 0;
	printf("请输入要插入的位置:> ");
	scanf("%d", &x);
	LTNode* pos = ListFind(plist, x);
	if (pos != NULL)
	{
		ListErase(pos);
	}
	else
	{
		printf("输入不合法\n");
	}
	ListPrint(plist);
}

void Test7()
{
	LTNode* plist = ListInit();
	ListPushFront(plist, 5);
	ListPushFront(plist, 4);
	ListPushFront(plist, 3);
	ListPushFront(plist, 2);
	ListPushFront(plist, 1);
	ListPrint(plist);
	ListPushBack(plist, 4);
	ListPushBack(plist, 3);
	ListPushBack(plist, 2);
	ListPushBack(plist, 1);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);

}

int main()
{	
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	Test7();
	return 0;
}
