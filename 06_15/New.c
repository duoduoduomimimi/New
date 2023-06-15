#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. 这个程序首先计算数组中所有元素的异或结果。
//2. 由于出现两次的数字在异或运算中会抵消，所以最终的异或结果是两个只出现一次的数字的异或。
//3. 然后，我们找到异或结果中第一个为1的位，这个位可以用来将原数组分成两个子数组，
//4. 一个子数组中的数字在这个位上为1，另一个子数组中的数字在这个位上为0。
//5. 最后，我们分别对这两个子数组进行异或运算，得到的结果就是两个只出现一次的数字。
//void FindTwoSingleNumbers(int arr[], int n, int* num1, int* num2)
//{
//    int xor_result = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        xor_result ^= arr[i];
//    }
//
//    int first_bit_1 = xor_result & (~(xor_result - 1));
//
//    *num1 = 0;
//    *num2 = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        if (arr[i] & first_bit_1)
//        {
//            *num1 ^= arr[i];
//        }
//        else 
//        {
//            *num2 ^= arr[i];
//        }
//    }
//}
//
//int main() 
//{
//    int arr[] = { 1, 2, 3, 3, 4, 4 };
//    int num1 = 0;
//    int num2 = 0;
//
//    FindTwoSingleNumbers(arr, sizeof(arr) / sizeof(arr[0]), &num1, &num2);
//    printf("The two single numbers are: %d and %d\n", num1, num2);
//
//    return 0;
//}

// 寻找单身狗
// ^ 异或，对应位置相异则为1，相同则为0
// 5 、6
// 101
// 110
// 011
// 根据异或之后，对应位置数字的不同进行分组
//void FindTwoSingleNumbers(int arr[], int sz)
//{
//	int i = 0;
//	int ret = 0;
//	int single1 = 0;
//	int single2 = 0;
//	// 1. 将arr数组中的所有数组进行异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//
//	// 2. 找出两个只出现一次数字的不同位
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((ret >> i) & 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1)
//		{
//			single1 ^= arr[i];
//		}
//	}
//	single2 = ret ^ single1;
//	printf("The two single numbers are : % d and %d\n", single1, single2);
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	FindTwoSingleNumbers(arr, sz);
//}

// 文件的操作
//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 操作文件 - 写
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	// 读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	int ch = fgetc(stdin);
//	//printf("%c ", ch);
//	fputc(ch,stdout);
//	return 0;
//}

//int main()
//{
//	// 打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	
//	// 写文件 - 写一行
//	/*char arr[] = "Welcome to New York!";
//	fputs(arr, pf);*/
//
//	// 读文件 - 读一行
//	char arr[256] = { 0 };
//	while (fgets(arr, 256, pf) != NULL)
//	{
//		printf("%s", arr);
//	}
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "张三", 20, 96.5 };
//	// 打开文件
//	FILE* pf = fopen("test2.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	// 二进制的方式写
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//
//	// 关闭文件
//	fclose(pf);
//	pf = NULL;
//}

struct S
{
	char name[20];
	int age;
	double d;
};

int main()
{
	struct S s = { 0 };
	// 打开文件
	FILE* pf = fopen("test2.txt", "rb");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	// 二进制的方式读
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %lf", s.name, s.age, s.d);

	// 关闭文件
	fclose(pf);
	pf = NULL;
}