#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*******  1. paly  ********\n");
	printf("*******  0. exit  ********\n");
	printf("**************************\n");

}
// 实现扫雷游戏
// 1. 布置雷  雷 - '1'， 不是雷 - '0'
// 2. 扫雷:  是雷就炸死了,游戏结束;不是雷的话,就告诉玩家,该位置附近八个位置雷的数量;
//           直到所有非雷的位置，都被找到，玩家获胜，游戏结束;
void game()
{
	char mine[ROWS][COLS] = { 0 }; // 布置好的雷的信息 '1' - 雷  '0' - 非雷
	char show[ROWS][COLS] = { 0 }; // 展示已排查出的雷的信息 '*' - 未排查 '数字字符' - 已排查

	// 初始化棋盘
	InitBoard(mine,'0', ROWS, COLS);
	InitBoard(show, '*', ROWS, COLS);

	// 打印棋盘
	PrintBoard(show, ROW, COL);

	// 布置雷
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	// 排查雷
	FindMine(mine, show, ROW, COL);
	//PrintBoard(mine, ROW, COL);
	//PrintBoard(show, ROW, COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
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
			printf("输入非法，请重新输入\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}