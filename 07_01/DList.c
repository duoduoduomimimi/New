#define _CRT_SECURE_NO_WARNINGS 1
#include "DList.h"

LTNode* CreateListNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("CreateListNode:: malloc");
		exit(-1);
	}

	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

// ��ʼ������
LTNode* ListInit() 
{
	LTNode* phead = CreateListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

// ��ӡ
void ListPrint(LTNode* phead)
{	
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

// β��
void ListPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	/*LTNode* newnode = CreateListNode(x);
	LTNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;
	phead->prev = newnode;
	newnode->next = phead;*/

	ListInsert(phead, x);
}

// ͷ��
void ListPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	/*LTNode* newnode = CreateListNode(x);
	phead->next->prev = newnode;
	newnode->next = phead->next;
	newnode->prev = phead;
	phead->next = newnode;*/

	ListInsert(phead->next, x);
}

// �ж������Ƿ�Ϊ��
bool ListEmpty(LTNode* phead)
{
	assert(phead);

	return phead->next == phead;
}

// βɾ
void ListPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->prev != phead);
	//LTNode* newtail = phead->prev->prev;
	//LTNode* tail = phead->prev;

	//free(tail);

	//phead->prev = newtail;
	//newtail->next = phead;
	ListErase(phead->prev);

}

// ͷɾ
void ListPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->prev != phead);

	/*LTNode* next = phead->next->next;
	phead->next = next;
	next->prev = phead;*/
	ListErase(phead->next);
}

// ����
LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		
		cur = cur->next;
	}
	return NULL;
}

// ��posλ��֮ǰ����
void ListInsert(LTNode* pos, LTDataType x)
{
	LTNode* newnode = CreateListNode(x);
	LTNode* prev = pos->prev;
	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = pos;
	pos->prev = newnode;
}


// ɾ��posλ�õĽڵ�
void ListErase(LTNode* pos)
{
	LTNode* prev = pos->prev;
	LTNode* next = pos->next;

	prev->next = next;
	next->prev = prev;

	free(pos);
}