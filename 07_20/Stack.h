#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

#define __DEBUG__ 0

// 静态栈的定义
#if __DEBUG__
typedef int STDataType;
#define N 10
struct Stack
{
	STDataType a[N];
	int top; // 栈顶
};
#endif

// 支持动态增长的栈
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;  // 栈顶
	int capacity;  // 容量
}Stack;

void StackInit(Stack* ps);  // 初始化栈
void StackPush(Stack* ps, STDataType x);  // 入栈
void StackPop(Stack* ps);   // 出栈
STDataType StackTop(Stack* ps);  // 取栈顶的元素
int StackSize(Stack* ps);  // 获取栈中有效元素的个数
bool StackEmpty(Stack* ps);  // 检测栈是否为空
void StackDestory(Stack* ps); // 销毁栈