#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data; // 存储的数据
	struct SListNode* next; // 指向下一个节点
}SLNode;


void SListPrint(SLNode* phead);    // 打印  
SLNode* CreateSListNode(SLDataType* x); // 创建新节点
void SListPushBack(SLNode** pphead, SLDataType x);   // 尾插
void SListPushFront(SLNode** pphead, SLDataType x);  // 头插
void SListPopBack(SLNode** pphead);  // 尾删
void SListPopFront(SLNode** pphead);  // 头删
SLNode* SListFind(SLNode* phead, SLDataType x);  // 查找
void SListModify(SLNode* pos, SLDataType x, SLDataType y);   // 修改
void SListInsert(SLNode** pphead, SLNode* pos, SLDataType x); // 在指定位置之前插入
void SListInsertAfter(SLNode* pos, SLDataType x); // 在指定位置之后插入
void SListErase(SLNode** pphead, SLNode* pos);  // 删除指定位置的节点
void SListEraseAfter(SLNode* pos); // 在指定位置之后删除

