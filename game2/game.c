#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// ��ʼ������
void InitBoard(char board[ROWS][COLS], char ch, int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}
}

// ��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n---------ɨ��--------\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ��--------\n");

}

// ������
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1; // 1~9
		int y = rand() % col + 1; // 1~9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

// �õ�(x,y)������Χ�׵�����
int GetMine(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int sum = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j <= y + 1; j++)
		{
			sum += mine[i][j];
		}
	}
	return (sum - (9 * '0'));
}
// �Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:> ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ը����");
				PrintBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';
				PrintBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		PrintBoard(mine, ROW, COL);
	}
}
