#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

// 打印
void SListPrint(SLNode* phead)
{
	SLNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

// 创建新节点
SLNode* CreateSListNode(SLDataType* x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	assert(newnode);

	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

// 尾插  想改变外部的指针（实参），就需要传入指针的地址；想在函数中改变外部变量（实参）的内容，就需要传入该外部变量的地址
// 因为函数的形参只是实参的一份临时拷贝，与实参没有直接联系，只是模拟实参的效果，形参的改变对实参没有直接的影响
void SListPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	// 允许空链表传入
	SLNode* cur = *pphead;
	SLNode* newnode = CreateSListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		while (cur->next) // 找尾节点
		{
			cur = cur->next;
		}
		
		cur->next = newnode;
	}
	// 只有当节点不被需要了，才进行free操作
	// 函数结束，函数中定义的局部变量被销毁，但malloc的内存空间依旧存在有效
}

// 头插  使用二级指针，与外部的phead建立直接的联系，头插完成之后，phead要指向新的头节点
void SListPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);
	// 允许空链表传入
	/*assert(*pphead);*/
	SLNode* cur = *pphead;
	SLNode* newnode = CreateSListNode(x);

	newnode->next = cur;
	*pphead = newnode;
}

// 尾删
void SListPopBack(SLNode** pphead)
{
	assert(pphead);
	// 链表本就为空，就不能再进行删除了
	assert(*pphead);

	// 只有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;  // 改变了phead指针的值，所以要传二级指针
	}
	else  // 多个节点
	{
		// 找尾节点的前一个节点
		SLNode* prev = *pphead;
		while (prev->next->next)  // 当只有一个节点时，会有越界访问的问题
		{
			prev = prev->next;
		}
		SLNode* tail = prev->next;
		free(tail); // 释放掉tail指针指向的结构体空间; 但只有一个节点时，则会发生释放NULL指针的的错误
		prev->next = NULL; // 将尾节点的前一个节点的next指针，置空
	}
	
}

// 头删
void SListPopFront(SLNode** pphead)
{
	assert(pphead);
	// 链表本就为空，就不能再进行删除了
	assert(*pphead);
	SLNode* next = (*pphead)->next;
	free(*pphead);  // 将结构体节点所占用的空间，进行释放，即销毁
	*pphead = next; 
}

// 查找
SLNode* SListFind(SLNode* phead, SLDataType x)
{
	
	// 空链表无法进行查找
	assert(phead);
	SLNode* cur = phead;
	while (cur->next)  //  逻辑有问题，如果查找的是尾节点，则将尾节点的情况直接跳过而没有进行检查
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	if (cur->data == x) // 检查一下跳过的尾节点
		return cur;
	else
		return NULL;
}

// 修改
void SListModify(SLNode* phead, SLDataType x, SLDataType y)
{
	SLNode* cur = SListFind(phead, x);
	if (cur)
	{
		cur->data = y;
	}
	else
	{
		printf("%d不存在\n", x);
	}
}

// 在pos节点之前插入
void SListInsert(SLNode** pphead, SLNode* pos, SLDataType x)
{
	// 以防恶意插入
	assert(pos);
	assert(pphead);
	// 空链表也可以传入
	SLNode* newnode = CreateSListNode(x);
	if (*pphead == NULL)
	{
		newnode->next = *pphead;
		*pphead = newnode;
	}
	else
	{
		// 找到pos节点的前一个节点
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		newnode->next = pos;
		prev->next = newnode;
	}
}

// 在pos之后进行插入
void SListInsertAfter(SLNode* pos, SLDataType x)
{
	// 以防恶意插入
	assert(pos);
	// 空链表无法进行查找，已在SListFind内进行断言，保证了pos的有效性
	SLNode* newnode = CreateSListNode(x);
	
	newnode->next = pos->next;
	pos->next = newnode;
}

// 删除指定位置的节点
void SListErase(SLNode** pphead, SLNode* pos)
{
	// 以防恶意删除
	assert(pos);
	assert(pphead);
	// 空链表无法进行删除，已在SListFind内进行断言，保证了*phead和pos的有效性
	// 找到pos的前一个节点
	if ((*pphead)->next == NULL)  // 只有一个节点时
	{
		free(*pphead);
		*pphead = NULL;
	}
	else if (*pphead == pos)  // 有多个节点时，要删除头节点
	{
		*pphead = pos->next;
		free(pos);
	}
	else   // 有多个节点时，删除其它节点
	{
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

// 在指定位置之后删除
void SListEraseAfter(SLNode* pos)
{
	// 以防恶意删除
	assert(pos);
	// 空链表无法进行删除，已在SListFind内进行断言，pos的有效性
	if (pos->next == NULL)  // pos已为尾节点
	{
		return;
	}
	else
	{
		SLNode* after = pos->next->next;
		free(pos->next);
		pos->next = after;
	}
}