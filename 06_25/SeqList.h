#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define __DEBUG__ 0

// 静态顺序表
#if __DEBUG__
#define N 100  // 定长数组的大小
typedef int SLDdataType;  // 重命名顺序表的数据类型

struct SeqList
{
	SLDdataType a[N]; // 定长数组
	int size;  // 已存储的数据个数
};
#endif

// 动态顺序表
typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;  // 指向动态开辟的数组
	int size;   // 有效的数据个数
	int capacity;  // 动态数组的容量
}SL;

// 功能操作
void SeqListInit(SL* ps); // 初始化
void SeqListPrint(SL* ps); // 打印
void SeqListDestory(SL* ps); // 销毁
void SeqListCheckCapacity(SL* ps); // 检查容量
void SeqListPushBack(SL* ps, SLDataType x); // 尾插
void SeqListPopBack(SL* ps); // 尾删
void SeqListPushFront(SL* ps, SLDataType x); // 头插
void SeqListPopFront(SL* ps); // 头删
void SeqListInsert(SL* ps, int pos, SLDataType x); // 任意位置插入
void SeqListErase(SL* ps, int pos); // 任意位置删除
void SeqListModify(SL* ps, int pos, SLDataType x); // 修改
int SeqListFind(SL* ps, SLDataType x); // 查找