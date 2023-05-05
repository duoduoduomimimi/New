#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 // 判断一个数是否为奇数
int main()
{
	while (1)
	{
		int num = 0; 
		int input = 0;

		// 输入
		printf("请输入一个数字：");
		scanf("%d", &num);

		// 第一次判断奇偶
		if (num % 2 == 1)
			printf("奇数\n");
		else
			printf("偶数\n");

		// 是否继续
		printf("\r是否继续(0/1):");
		scanf("%d", &input);
		if (1 == input)
			continue;  // 继续判断
		else if (0 == input)
			break;  // 结束判断
		else  // 非法输入处理
		{
			// 循环输入，判断是否继续，直到输入合法
			do
			{
				printf("\r请重新输入(0/1):");
				scanf("%d", &input);
			} while (0 != input && 1 != input);

			// 对合法输入再进行判断
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
//	/*printf("请输入年龄：");
//	scanf("%d", &age);*/
//
//	/*if (age >= 18)
//		printf("成年\n");*/
//
//	/*if (age >= 18)
//		printf("成年\n");
//	else
//		printf("未成年\n");*/
//	while (1)
//	{
//		int age = 0;
//		int input = 0;
//		printf("请输入年龄：");
//		scanf("%d", &age);
//
//		if (age < 18)
//			printf("青少年\n");
//		else if (age >= 18 && age < 30)
//			printf("青年\n");
//		else if (age >= 30 && age < 50)
//			printf("中年\n");
//		else if (age >= 50 && age < 80)
//			printf("中老年\n");
//		else if (age >= 80 && age < 100)
//			printf("老年\n");
//		else
//			printf("老寿星\n");
//
//		printf("是否继续（0/1）:");
//		scanf("%d", &input);
//		if (input == 1)
//			continue;
//		else if (input == 0)
//			break;
//		else
//		{
//			printf("\n请重新输入：");
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

//// 打印1~100之间的奇数
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
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}