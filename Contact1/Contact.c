#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

// ��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

// ��ӡͨѶ¼
void PrintContact(const Contact* pc)
{
	assert(pc);
	printf("%-12s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		
		printf("%-12s %-5d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);

	}
}

// �����ϵ��
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	// ¼����Ϣ
	printf("����������:> ");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:> ");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:> ");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:> ");
	scanf("%s", pc->data[pc->sz].tele); 
	printf("�������ַ:> ");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("��ӳɹ�\n");
}

// �������ֲ���ָ����ϵ�� : �ɹ������±ꣻʧ�ܷ���-1
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

// ɾ��ָ����ϵ��
void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	// ɾ��
	// 1. �ҵ�
	char name[NAME_MAX] = { 0 };
	printf("������Ҫɾ������ϵ�˵�����:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	// 2. ɾ��
	if (-1 == pos)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
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
		printf("ɾ���ɹ�\n");
		
	}
}

// ����ָ����ϵ�˵���Ϣ
void FindContact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	
	if (-1 == pos)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("%-12s %-5s %-5s %-12s %-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
		printf("%-12s %-5d %-5s %-12s %-30s\n", pc->data[pos].name, pc->data[pos].age,
			pc->data[pos].sex, pc->data[pos].tele, pc->data[pos].addr);
	}
}

// �޸�ָ����ϵ�˵���Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸���ϵ����Ϣ������:> ");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸���Ϣ����ϵ�˲�����\n");
		return;
	}
	
	char cur[5] = { 0 };
	printf("������Ҫ�޸���ϵ����Ϣ�����(���������䡢�Ա𡢵绰����ַ):> ");
	scanf("%s", cur);
	if (0 == strcmp(cur, "����"))
	{
		printf("�������µ�����:> ");
		scanf("%s", pc->data[pos].name);
	}
	else if (0 == strcmp(cur, "����"))
	{
		printf("�������µ�����:> ");
		scanf("%d", &pc->data[pos].age);
	}
	else if (0 == strcmp(cur, "�Ա�"))
	{
		printf("�������µ��Ա�:> ");
		scanf("%s", pc->data[pos].sex);
	}
	else if (0 == strcmp(cur, "�绰"))
	{
		printf("�������µĵ绰:> ");
		scanf("%s", pc->data[pos].tele);
	}
	else if (0 == strcmp(cur, "��ַ"))
	{
		printf("�������µĵ�ַ:> ");
		scanf("%s", pc->data[pos].addr);
	}
	else
	{
		printf("�������\n");
		return;
	}
	printf("�޸ĳɹ�\n");
}

// �������ֽ�������
int CompareByName(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

// ����ͨѶ¼�е���ϵ��
void SortContact(const Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(pc->data[0]), CompareByName);
	printf("����ɹ�\n");
}

// ���ͨѶ¼
void ClearContact(Contact* pc)
{
	InitContact(pc);
	printf("��ճɹ�\n");
}

