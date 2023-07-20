#define _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

// ��ʼ��
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

// �����
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

// ������
void QueuePop(Queue* pq)
{
	assert(pq);
	// ֻʣһ���ڵ�
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL; // ����tail��ΪҰָ�� ��ָ���ָ���ǲ�ȷ���ģ�
	}
	else
	{
		// ����ڵ�
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}

// ȡ��ͷ��Ԫ��
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}

// ȡ��β��Ԫ��
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	
	return pq->tail->data;
}

// �ж϶����Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	//if (pq->head == NULL)
	//	return true;

	//return false;
	return pq->head == NULL;
}

// ��������е���ЧԪ��
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

// ���ٶ��� - �������ж�ɾ��
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