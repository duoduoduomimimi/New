#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

// ���͵�����
#define MAX 1000

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

// ͨѶ¼��ʼ״̬��������С
#define DEFAULT_SZ 3

typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;


// ��̬��
typedef struct Contact
{
	PeoInfo* data; // ����ͨѶ¼ ����ָ��ָ��һ�鶯̬���ٵ��ڴ�ռ�
	int sz; // ��¼ͨѶ¼����ϵ�˵�����
	int capacity; // ��¼ͨѶ¼������
}Contact;

// ����������

// ��ʼ��ͨѶ¼
void InitContact(Contact* pc);

// ��ӡͨѶ¼
void PrintContact(const Contact* pc);

// �����ϵ��
void AddContact(Contact* pc);

// ɾ��ָ����ϵ��
void DelContact(Contact* pc);

// ����ָ����ϵ�˵���Ϣ
void FindContact(const Contact* pc);

// �޸�ָ����ϵ�˵���Ϣ
void ModifyContact(Contact* pc);

// ����ͨѶ¼�е���ϵ��
void SortContact(const Contact* pc);

// ���ͨѶ¼
void ClearContact(Contact* pc);

// ����ͨѶ¼
void DestroyContact(Contact* pc);

// ����ͨѶ¼��ѶϢ���ļ�
void SaveContact(Contact* pc);
