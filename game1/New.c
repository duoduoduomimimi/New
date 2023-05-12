#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*******   1. paly   ********\n");
	printf("*******   0. exit   ********\n");
	printf("****************************\n");
}

void game()
{
	char ret = '0';
	// ������������
	char board[ROW][COL] = { 0 };
	// ��ʼ������Ϊȫ�ո�
	InitBoard(board, ROW, COL);
	// ��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

// ʲô�������Ϸ������
// 1. ���Ӯ - *
// 2. ����Ӯ - #
// 3. ƽ�� - q
// 4. ���� - c
// ÿһ������֮�󣬶�Ҫ�ж���Ӯ
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); // �洢��������ʱ���Ե�ʱ���
	do
	{
		// ִ��һ����Ϸ����
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

