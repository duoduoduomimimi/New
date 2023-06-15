#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

enum Option
{
	EXIT,
	ADD,
	DEL,
	FIND,
	MODIFY,
	SORT,
	PRINT,
	Clear
};

void menu()
{
	printf("***********************************\n");
	printf("******  1. Add     2. Del    ******\n");
	printf("******  3. Find    4. Modify ******\n");
	printf("******  5. Sort    6. Print  ******\n");
	printf("******	7. Clear   0. Exit   ******\n");
	printf("***********************************\n");
}

void Test()
{
	// ��������
	int input = 0;

	// ����ͨѶ¼ - ���1000����ϵ�˵���Ϣ
	//PeoInfo data[1000];
	// ��¼ͨѶ¼����ϵ�˵�����
	//int sz = 0;
	Contact con; // ͨѶ¼

	// ��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case FIND:
			FindContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case Clear:
			ClearContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			return 0;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}