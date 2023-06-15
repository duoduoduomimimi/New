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
	// 接受输入
	int input = 0;

	// 创建通讯录 - 存放1000个联系人的信息
	//PeoInfo data[1000];
	// 记录通讯录中联系人的人数
	//int sz = 0;
	Contact con; // 通讯录

	// 初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:> ");
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
			printf("退出通讯录\n");
			return 0;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}