#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#define __DEBUG__ 0

// ��̬ջ�Ķ���
#if __DEBUG__
typedef int STDataType;
#define N 10
struct Stack
{
	STDataType a[N];
	int top; // ջ��
};
#endif

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;  // ջ��
	int capacity;  // ����
}Stack;

void StackInit(Stack* ps);  // ��ʼ��ջ
void StackPush(Stack* ps, STDataType x);  // ��ջ
void StackPop(Stack* ps);   // ��ջ
STDataType StackTop(Stack* ps);  // ȡջ����Ԫ��
int StackSize(Stack* ps);  // ��ȡջ����ЧԪ�صĸ���
bool StackEmpty(Stack* ps);  // ���ջ�Ƿ�Ϊ��
void StackDestory(Stack* ps); // ����ջ