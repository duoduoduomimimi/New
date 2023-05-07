#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

// 二分、折半查找
// 注意点：
//    1. 正确的left、right初始化下标
//    2. 循环执行的条件
//    3. 未找到时的处理
//    4. 求平均值的一种方法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 3;
//	//查找k
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	/*int mid = (left + right) / 2;*/
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = ((right - left) / 2) + left; // 避免数据相加之后过大，而造成越界
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//			/*mid = (left + right) / 2;*/
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//			/*mid = (left + right) / 2;*/
//		}
//		else
//		{
//			printf("k的下标为:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("没找到k\n");
//
//	return 0;
//}

 //眼过千篇，不如收过一遍
 //编写代码，演示多个字符从两端移动，向中间汇聚
int main()
{
	// sizeof(arr1)/sizeof(arr[0]) // 4
	// char arr[] = "abc"
	// ['a','b','c','\0']

	/*char arr[] = "abc";
	int len = strlen(arr);
	printf("%d", len);*/

	char arr1[] = "welcome to NewYork!";
	char arr2[] = "###################";

	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(80); // 单位是毫秒
		system("cls"); // system执行系统命令， cls清理屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}

//编写代码，模拟用户登录情景，并且只能登录三次
// 两个字符串的比较
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设正确的密码是"abcdfe"
//	for (i; i < 3; i++)
//	{
//		printf("输入密码:> ");
//		scanf("%s", password);
//		if (strcmp(password, "abcde") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,重新输入\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次密码均错误\n");
//	}
//	return 0;
//}

//猜数字游戏
//1. 电脑随机生成一个数字（1~100）
//2. 玩家猜数字
//	 玩家猜小了，就告知猜小了
//   玩家猜大了，就告知猜大了
//   直到猜对为止
//3. 游戏可以继续玩
//void menu()
//{
//	printf("*********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("*********************\n");
//}
//
//// 猜数字游戏的实现
//// 时间戳
//// C语言提供了一个函数time：可以返回一个时间戳
//
//void game()
//{
//	int guess = 0;
//	//1. 生成一个随机数
//	int num = rand() % 100 + 1; // 1~100
//
//	//2. 猜数字
//	while (1)
//	{
//		printf("猜数字:> ");
//		scanf("%d", &guess);
//
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  // 只需要调用一次
//	do
//	{
//		menu();
//		printf("请选择:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//again:
//	printf("hahahalalala\n");
//	printf("hahahalalala\n");
//	printf("hahahalalala\n");
//
//	goto again;
//	return 0;
//}

// 一个关机程序
// 只要程序运行起来，电脑就在一分钟之内关机，如果输入：我是猪，就取消关机。
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60"); // system是一个库函数，是用来执行系统命令的
//
//again:
//	printf("请注意，你的电脑将在1分钟内关机!\n如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a"); // 取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

