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
	// 存放下棋的数据
	char board[ROW][COL] = { 0 };
	// 初始化棋盘为全空格
	InitBoard(board, ROW, COL);
	// 打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下棋
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
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

// 什么情况下游戏结束了
// 1. 玩家赢 - *
// 2. 电脑赢 - #
// 3. 平局 - q
// 4. 继续 - c
// 每一次下棋之后，都要判断输赢
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); // 存储程序运行时电脑的时间戳
	do
	{
		// 执行一次游戏流程
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

