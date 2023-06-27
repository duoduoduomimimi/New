#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;

typedef struct SListNode
{
	SLDataType data; // �洢������
	struct SListNode* next; // ָ����һ���ڵ�
}SLNode;


void SListPrint(SLNode* phead);    // ��ӡ  
SLNode* CreateSListNode(SLDataType* x); // �����½ڵ�
void SListPushBack(SLNode** pphead, SLDataType x);   // β��
void SListPushFront(SLNode** pphead, SLDataType x);  // ͷ��
void SListPopBack(SLNode** pphead);  // βɾ
void SListPopFront(SLNode** pphead);  // ͷɾ
SLNode* SListFind(SLNode* phead, SLDataType x);  // ����
void SListModify(SLNode* pos, SLDataType x, SLDataType y);   // �޸�
void SListInsert(SLNode** pphead, SLNode* pos, SLDataType x); // ��ָ��λ��֮ǰ����
void SListInsertAfter(SLNode* pos, SLDataType x); // ��ָ��λ��֮�����
void SListErase(SLNode** pphead, SLNode* pos);  // ɾ��ָ��λ�õĽڵ�
void SListEraseAfter(SLNode* pos); // ��ָ��λ��֮��ɾ��

