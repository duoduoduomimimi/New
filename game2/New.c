#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*******  1. paly  ********\n");
	printf("*******  0. exit  ********\n");
	printf("**************************\n");

}
// ʵ��ɨ����Ϸ
// 1. ������  �� - '1'�� ������ - '0'
// 2. ɨ��:  ���׾�ը����,��Ϸ����;�����׵Ļ�,�͸������,��λ�ø����˸�λ���׵�����;
//           ֱ�����з��׵�λ�ã������ҵ�����һ�ʤ����Ϸ����;
void game()
{
	char mine[ROWS][COLS] = { 0 }; // ���úõ��׵���Ϣ '1' - ��  '0' - ����
	char show[ROWS][COLS] = { 0 }; // չʾ���Ų�����׵���Ϣ '*' - δ�Ų� '�����ַ�' - ���Ų�

	// ��ʼ������
	InitBoard(mine,'0', ROWS, COLS);
	InitBoard(show, '*', ROWS, COLS);

	// ��ӡ����
	PrintBoard(show, ROW, COL);

	// ������
	SetMine(mine, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	// �Ų���
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
			printf("����Ƿ�������������\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}