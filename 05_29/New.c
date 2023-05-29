#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// 猜名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 0; a < 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((1 == (b == 2) + (a == 3)) &&
//                            (1 == (b == 2) + (e == 4)) &&
//                            (1 == (c == 1) + (d == 2)) &&
//                            (1 == (c == 5) + (d == 3)) &&
//                            (1 == (e == 4) + (a == 1)))//通过表达式的返回值只是为1/0来确
//                                                        //定他说的话一半对一半错,并且通过逻辑与来找到每个人都对的
//                        {
//                            if ((a * b * c * d * e) == 120)
//                                goto ture_rank;
//                        }
//                    }
//                }
//            }
//        }
//
//    }
//ture_rank:
//    printf("a的排名:> %d\nb的排名:> %d\nc的排名:> %d\nd的排名:> %d\ne的排名:> %d", a, b, c, d, e);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef"; // 把字符串首字符a的地址放在字符指针p中,且常量字符串不允许被修改
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//
//	int* arr[] = { p1,p2,p3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p -> %d\n", arr[i], *arr[i]);
//
//	}
//	return 0;
//}

// 用指针数组模拟出一个二维数组，并使用
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			// printf("%d ", *(arr[i]+j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int(*p2)[10]; // 数组指针
//	int arr[10] = { 0 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr + 1);
//	
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	return 0;
//}

//int main()
//{
//	char* arr[5];  // 字符指针数组
//	char* (*p)[5] = &arr; // 数组指针
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    while (n >= 1)
//    {
//        ret <<= 1;  // 左移位有乘2的效果
//        n--;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

// 公务员考试，去掉一个最高分和一个最低分，输出平均成绩
//void bubble_sort(int arr[], int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]); // 1
//	//趟数
//	int i = 0;
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1; // 假设已经数组有序
//		//每一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (1 == flag)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[7] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//	{
//		bubble_sort(arr, sz);
//		float sum = arr[1] + arr[2] + arr[3] + arr[4] + arr[5];
//		printf("%.2f\n", sum / 5);
//	}
//	return 0;
//}

// 获得月份天数
// 1、3、5、7、8、10、12 - 31
// 、4、6、9、11 - 30
// 闰年 2 - 29、非闰年 2 - 28
//int main()
//{
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		{
//			printf("%d\n",31);
//		}
//		if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			printf("%d\n",30);
//		}
//		if (month == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			{
//				printf("%d\n",29);
//			}
//			else
//			{
//				printf("%d\n",28);
//			}
//		}
//	}
//	return 0;
//}

// 变种水仙花数
// 求出 5位数中的所有 Lily Number
//int IsLilyNumber(int n)
//{
//	// 将一个五位数n进行任意的拆分 ，有4中拆分方式
//	// 假设n = 12345
//	// 1*2345 + 12*345 + 123*45 + 1234*5
//	//n % 10 //5
//	//n / 10 //1234
//	//n % 100 // 45
//	//n / 100 // 123
//	int i = 0;
//	int sum = 0;
//	for (i = 10; i <= 10000; i *= 10)
//	{
//		sum += (n % i) * (n / i);
//	}
//	if (sum == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int ret = IsLilyNumber(i);
//		if (1 == ret)
//			printf("%d ", i);
//	}
//	return 0;
//}

// 用键盘任意输入一个字符，判断其是否为字母
int IsAlphabet(char ch)
{
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
		return 1;
	}
	return 0;
}
int main()
{
	char ch = '\0';
	ch = getchar();
	int ret = IsAlphabet(ch);
	if (1 == ret)
		printf("YES\n");
	else
		printf("NO\n");
	//printf("%c\n", ch);
	//char a = 'a';
	//char b = 'z';
	//char c = 'A';
	//char d = 'Z';
	//printf("%d\n", a);//97
	//printf("%d\n", b);//122
	//printf("%d\n", c);//65
	//printf("%d\n", d);//90

	return 0;
}