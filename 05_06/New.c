#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;  // 1 2 3 4 死循环  因为i++无法被执行，条件无法被改变
//					   // continue后面的代码不会被执行
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar(); // ''a' - 97 ASCII
//	printf("%d\n", ch);
//	return 0;
//}

// EOF - end of file 文件结束标志
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);  // ctrl + z 停止 会让getchar()返回一个EOF
//	}
//	return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);  // 缓冲区
//
//	// 方法1
//	//getchar(); // 处理\n
//
//	// 方法2
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	ch = getchar(); 
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}

//int main()
//{
//	int ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9') // 只打印数字字符
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i < 6; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;  // 1 2 3 4 6 7 8 9
//
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	// for循环的判断部分省略了，就意味着判断恒为真
//	for (; ;)
//	{
//		printf("hahahalalala\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("k\n"); // 循环不执行
//	}
//	return 0;
//}

//int main()
//{
//	//1~10
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//
//		if (5 == i)
//			continue;
//	} while (i<11);
//
//	return 0;
//}

// 练习题

// 1. 计算n的阶乘
// 5!= 1*2*3*4*5
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	//输入
//	scanf("%d", &n);
//
//	//计算
//	for (int i = 1; i < n+1; i++)
//	{
//		ret *= i;
//	}
//
//	//输出
//	printf("n! = %d", ret);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		int n = 0;
//		int ret = 1;
//		//输入
//		printf("输入一个整数n:");
//		scanf("%d", &n);
//
//		//计算
//		for (int i = 1; i < n + 1; i++)
//		{
//			ret *= i;
//		}
//
//		//输出
//		printf("n! = %d", ret);
//
//		//判断是否继续
//		int input = 0;
//		printf("\n是否继续(0/1):");
//		scanf("%d", &input);
//		if (1 == input)
//			continue;
//		else if (0 == input)
//			break;
//		else
//		{
//			do
//			{
//				printf("请重新输入:");
//				scanf("%d", &input);
//			} while (1 != input && 0 != input);
//			if (1 == input)
//				continue;
//			else if (0 == input)
//				break;
//		}
//	}
//	return 0;
//}

 //2. 计算 1！+2！+3！+...+10！
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	//输入
//	scanf("%d", &n);
//	for (int i = 1; i < n+1; i++)
//	{
//		int ret = 1;
//		for (int j = 1; j < i + 1; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

// 3. 在一个有序数组中查找某个数字n （二分查找、折半查找）

int main()
{
	int arr[] = { 1, 4, 7, 11, 34, 62, 71, 88, 92, 119, 126 };
	int k = 11;
	// 查找k
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int mid = (left + right) / 2;
	while (left < right)
	{
		if (k < arr[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else
		{
			printf("k的下标为：%d", mid);
			break;
		}
	}
	if (left > right)
		printf("没有找到k\n");

	return 0;
}