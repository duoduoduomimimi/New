#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Test()
//{
//	printf("hahahalalai\n");
//}
//
//int main()
//{
//	void (*pf)() = Test;
//	(*pf)();
//	pf();
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	// ����ָ��
//	int (*pf)(int, int) = Add;
//
//	// ����ָ������
//	int (*pfArr[4])(int, int);
//
//	// (ָ��)����ָ������(��)ָ��
//	int (*(*pf)[4])(int, int);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pfArr[4])(int, int) = { Add,Sub,Mul,Div };
//	int (*(*pf)[4])(int, int) = &pfArr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = (*pf)[i](3, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//void menu()
//{
//	printf("*******************************\n");
//	printf("******* 1. Add   2. Sub *******\n");
//	printf("******* 3. Mul   4. Div *******\n");
//	printf("******* 0. exit         *******\n");
//	printf("*******************************\n");
//}
//
//void Calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("��������������:> ");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("���Ϊ:> %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//		do
//		{
//			double tmp = 0;
//			menu();
//			printf("��ѡ��:> ");
//			scanf("%d", &input);
//	
//			switch (input)
//			{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 0:
//				printf("�˳�������\n");
//				break;
//			default:
//				printf("ѡ�����\n");
//				break;
//			}
//		} while (input);
//	return 0;
//}

