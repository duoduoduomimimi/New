#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

// 类型的声明
#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[MAX];// 创建通讯录 - 存放1000个联系人的信息
	int sz; // 记录通讯录中联系人的人数
}Contact;

// 函数的声明

// 初始化通讯录
void InitContact(Contact* pc);

// 打印通讯录
void PrintContact(const Contact* pc);

// 添加联系人
void AddContact(Contact* pc);

// 删除指定联系人
void DelContact(Contact* pc);

// 查找指定联系人的信息
void FindContact(const Contact* pc);

// 修改指定联系人的信息
void ModifyContact(Contact* pc);

// 排序通讯录中的联系人
void SortContact(const Contact* pc);

// 清空通讯录
void ClearContact(Contact* pc);
