#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;  // ���ָ��
	struct ListNode* prev;  // ǰ��ָ��
	LTDataType data;
}LTNode;


LTNode* ListInit();  // ��ʼ��
void ListPrint(LTNode* phead);  // ��ӡ
void ListPushBack(LTNode* phead, LTDataType x); // β��
void ListPushFront(LTNode* phead, LTDataType x); // ͷ��
void ListPopBack(LTNode* phead);  // βɾ
void ListPopFront(LTNode* phead); // ͷɾ
bool ListEmpty(LTNode* phead); // �ж������Ƿ�Ϊ��
LTNode* ListFind(LTNode* phead, LTDataType x); // ����
void ListInsert(LTNode* pos, LTDataType x); // ��posλ��֮ǰ����
void ListErase(LTNode* pos); // ɾ��posλ�õĽڵ�