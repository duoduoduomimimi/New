#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

// 初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

// 打印通讯录
void PrintContact(const Contact* pc)
{
	assert(pc);
	printf("%-12s %-5s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "住址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		
		printf("%-12s %-5d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);

	}
}

// 添加联系人
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	// 录入信息
	printf("请输入姓名:> ");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:> ");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入性别:> ");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:> ");
	scanf("%s", pc->data[pc->sz].tele); 
	printf("请输入地址:> ");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("添加成功\n");
}

// 根据名字查找指定联系人 : 成功返回下标；失败返回-1
int FindByName(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(name, pc->data[i].name))
		{
			return i;
		}
	}
	return -1;
}

// 删除指定联系人
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	// 删除
	// 1. 找到
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除的联系人的姓名:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	// 2. 删除
	if (-1 == pos)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	else
	{
		// memmove
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("删除成功\n");
		
	}
}

// 查找指定联系人的信息
void FindContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的联系人的姓名:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	
	if (-1 == pos)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	else
	{
		printf("%-12s %-5s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "住址");
		printf("%-12s %-5d %-5s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age,
			pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	}
}

// 修改指定联系人的信息
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改联系人信息的姓名:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("要修改信息的联系人不存在\n");
		return;
	}
	
	char cur[5] = { 0 };
	printf("请输入要修改联系人信息的类别(姓名、年龄、性别、电话、地址):> ");
	scanf("%s", cur);
	if (0 == strcmp(cur, "姓名"))
	{
		printf("请输入新的姓名:> ");
		scanf("%s", pc->data[pos].name);
	}
	else if (0 == strcmp(cur, "年龄"))
	{
		printf("请输入新的年龄:> ");
		scanf("%d", &pc->data[pos].age);
	}
	else if (0 == strcmp(cur, "性别"))
	{
		printf("请输入新的性别:> ");
		scanf("%s", pc->data[pos].sex);
	}
	else if (0 == strcmp(cur, "电话"))
	{
		printf("请输入新的电话:> ");
		scanf("%s", pc->data[pos].tele);
	}
	else if (0 == strcmp(cur, "地址"))
	{
		printf("请输入新的地址:> ");
		scanf("%s", pc->data[pos].addr);
	}
	else
	{
		printf("输入错误\n");
		return;
	}
	printf("修改成功\n");
}

// 根据名字进行排序
int CompareByName(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

// 排序通讯录中的联系人
void SortContact(const Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), CompareByName);
	printf("排序成功\n");
}

// 清空通讯录
void ClearContact(Contact* pc)
{
	InitContact(pc);
	printf("清空成功\n");
}

