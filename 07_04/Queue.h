#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int QDataType;

// 使用单链表实现队列 
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head; // 队头
	QNode* tail; // 队尾
}Queue;

void QueueInit(Queue* pq);  // 初始化
void QueueDestory(Queue* pq); // 销毁队列
void QueuePush(Queue* pq, QDataType x);  // 入队列
void QueuePop(Queue* pq);  // 出队列
QDataType QueueFront(Queue* pq);  // 取队头的元素
QDataType QueueBack(Queue* pq);  // 取队尾的元素
bool QueueEmpty(Queue* pq);  // 判断队列是否为空
int QueueSize(Queue* pq);  // 计算队列中的有效元素