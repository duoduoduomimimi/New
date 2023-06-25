#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define __DEBUG__ 0

// ��̬˳���
#if __DEBUG__
#define N 100  // ��������Ĵ�С
typedef int SLDdataType;  // ������˳������������

struct SeqList
{
	SLDdataType a[N]; // ��������
	int size;  // �Ѵ洢�����ݸ���
};
#endif

// ��̬˳���
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;  // ָ��̬���ٵ�����
	int size;   // ��Ч�����ݸ���
	int capacity;  // ��̬���������
}SL;

// ���ܲ���
void SeqListInit(SL* ps); // ��ʼ��
void SeqListPrint(SL* ps); // ��ӡ
void SeqListDestory(SL* ps); // ����
void SeqListCheckCapacity(SL* ps); // �������
void SeqListPushBack(SL* ps, SLDataType x); // β��
void SeqListPopBack(SL* ps); // βɾ
void SeqListPushFront(SL* ps, SLDataType x); // ͷ��
void SeqListPopFront(SL* ps); // ͷɾ
void SeqListInsert(SL* ps, int pos, SLDataType x); // ����λ�ò���
void SeqListErase(SL* ps, int pos); // ����λ��ɾ��
void SeqListModify(SL* ps, int pos, SLDataType x); // �޸�
int SeqListFind(SL* ps, SLDataType x); // ����