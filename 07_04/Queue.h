#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

// ʹ�õ�����ʵ�ֶ��� 
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head; // ��ͷ
	QNode* tail; // ��β
}Queue;

void QueueInit(Queue* pq);  // ��ʼ��
void QueueDestory(Queue* pq); // ���ٶ���
void QueuePush(Queue* pq, QDataType x);  // �����
void QueuePop(Queue* pq);  // ������
QDataType QueueFront(Queue* pq);  // ȡ��ͷ��Ԫ��
QDataType QueueBack(Queue* pq);  // ȡ��β��Ԫ��
bool QueueEmpty(Queue* pq);  // �ж϶����Ƿ�Ϊ��
int QueueSize(Queue* pq);  // ��������е���ЧԪ��