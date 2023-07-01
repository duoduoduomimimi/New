#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;  // 后继指针
	struct ListNode* prev;  // 前驱指针
	LTDataType data;
}LTNode;


LTNode* ListInit();  // 初始化
void ListPrint(LTNode* phead);  // 打印
void ListPushBack(LTNode* phead, LTDataType x); // 尾插
void ListPushFront(LTNode* phead, LTDataType x); // 头插
void ListPopBack(LTNode* phead);  // 尾删
void ListPopFront(LTNode* phead); // 头删
bool ListEmpty(LTNode* phead); // 判断链表是否为空
LTNode* ListFind(LTNode* phead, LTDataType x); // 查找
void ListInsert(LTNode* pos, LTDataType x); // 在pos位置之前插入
void ListErase(LTNode* pos); // 删除pos位置的节点