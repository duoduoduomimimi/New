#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

// 初始化
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

// 入队列
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("QueuePush::malloc\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

// 出队列
void QueuePop(Queue* pq)
{
	assert(pq);
	// 只剩一个节点
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL; // 避免tail成为野指针 （指针的指向是不确定的）
	}
	else
	{
		// 多个节点
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}

// 取队头的元素
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

// 取队尾的元素
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	
	return pq->tail->data;
}

// 判断队列是否为空
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	//if (pq->head == NULL)
	//	return true;

	//return false;
	return pq->head == NULL;
}

// 计算队列中的有效元素
int QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	int size = 0;
	while (cur)
	{
		++size;
		cur = cur->next;
	}
	return size;
}

// 销毁队列 - 即将队列都删空
void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}