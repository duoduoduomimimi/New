#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 // �ж�һ�����Ƿ�Ϊ����
int main()
{
	while (1)
	{
		int num = 0; 
		int input = 0;

		// ����
		printf("������һ�����֣�");
		scanf("%d", &num);

		// ��һ���ж���ż
		if (num % 2 == 1)
			printf("����\n");
		else
			printf("ż��\n");

		// �Ƿ����
		printf("\r�Ƿ����(0/1):");
		scanf("%d", &input);
		if (1 == input)
			continue;  // �����ж�
		else if (0 == input)
			break;  // �����ж�
		else  // �Ƿ����봦��
		{
			// ѭ�����룬�ж��Ƿ������ֱ������Ϸ�
			do
			{
				printf("\r����������(0/1):");
				scanf("%d", &input);
			} while (0 != input && 1 != input);

			// �ԺϷ������ٽ����ж�
			if (1 == input)
				continue;
			else if (0 == input)
				break;
		}
	}
	return 0;
}

//int main()
//{
//	
//	/*printf("���������䣺");
//	scanf("%d", &age);*/
//
//	/*if (age >= 18)
//		printf("����\n");*/
//
//	/*if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");*/
//	while (1)
//	{
//		int age = 0;
//		int input = 0;
//		printf("���������䣺");
//		scanf("%d", &age);
//
//		if (age < 18)
//			printf("������\n");
//		else if (age >= 18 && age < 30)
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("����\n");
//		else if (age >= 50 && age < 80)
//			printf("������\n");
//		else if (age >= 80 && age < 100)
//			printf("����\n");
//		else
//			printf("������\n");
//
//		printf("�Ƿ������0/1��:");
//		scanf("%d", &input);
//		if (input == 1)
//			continue;
//		else if (input == 0)
//			break;
//		else
//		{
//			printf("\n���������룺");
//			scanf("%d", &input);
//		}
//			
//
//	}
//	
//
//	return 0;
//}

//int main()
//{
//	int num = 5;
//	if (5 == num)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//// ��ӡ1~100֮�������
//int main()
//{
//	int i = 1;
//	while (i < 101)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//
//		if (i % 10 == 0)
//			printf("\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	float day2 = 0.0f;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}