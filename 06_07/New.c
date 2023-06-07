#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

// qsort的使用
// 
//int CompareInt(const void* e1, const void* e2)
//{
//	/*if (*(int*)e1 > *(int*)e2)
//	{
//		return 1;
//	}
//	else if (*(int*)e1 == *(int*)e2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}*/
//
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void Test1()
//{
//	int arr[] = { 6,4,9,7,2,3,8,1,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, 10, sizeof(arr[0]), CompareInt);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int CompareStuByAge(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int CompareStuByName(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//
//void PrintStu(struct Stu* p)
//{	
//	printf("%s %d %.2f\n", p->name, p->age, p->score);
//}
//
//void Test2()
//{
//	struct Stu arr[3] = { {"zhangsan",20,55.5},
//							{"lisi",29,88},
//							{"wangwu",26,90.1} };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), CompareStuByAge);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		PrintStu(arr + i);
//	}
//}
//
//int main()
//{
//	// 使用qsort排序整型数据
//	//Test1();
//	Test2();
//	return 0;
//}

// bsort的使用
void Swap(char* buf1, char* buf2, int width)
{
	// 交换字节
	// 07 00 00 00
	// 08 00 00 00
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

int CompareInt(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

void bsort(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
{
	/*
	* base: pointer to the start of compared array
	* num: the number of compared array
	* width: the element size in bytes
	* cmp: compare function
	*/
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			//默认为升序
			//if(arr[j] > arr[j+1])
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) // 找到相邻两个元素
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void Test1()
{
	int arr[] = { 6,4,9,7,2,3,8,1,5,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bsort(arr, sz, sizeof(arr[0]), CompareInt);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
	double score;
};

int CompareStuByName(const void* e1,const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void PrintStu(struct Stu* p)
{
	printf("%s %d %.2f\n", p->name, p->age, p->score);
}

void Test2()
{
	struct Stu arr[3] = { {"zhangsan",20, 55.5 },
						 {"lisi", 29, 88},
						 {"wangwu", 26, 90.1} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	bsort(arr, sz, sizeof(arr[0]), CompareStuByName);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		PrintStu(arr+i);
	}
}

int main()
{
	//Test1();
	Test2();
	return 0;
}

// 字符串旋转结果
// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 左旋/右旋
//移首补尾法：
//void LeftRotateOne(char* a, int len)
//{
//    int tmp = a[0];
//    int i = 0;
//    while (i < len - 1)
//    {
//        a[i] = a[i + 1];
//        i++;
//    }
//    a[i] = tmp;
//}
//
//// void (*rotateone)(char*, int)
//void LeftRotate(char* a, int len, int count)
//{
//    assert(a && count > 0);
//    count %= len;
//    while (count--)
//    {
//        LeftRotateOne(a, len);
//    }
//}
//
//// void (*rotate)(char*, int, int, void(*)(char*, int))
//int IsRotate(char* change, char* origin, int len, void (*rotateone)(char*, int))
//{
//    int i = 0;
//    for (i = 1; i < len; i++)
//    {
//        rotateone(origin, len);
//        if (strcmp(change, origin) == 0)
//            return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    char arr1[20] = { 0 };
//    char arr2[20] = { 0 };
//    gets(arr1);
//    gets(arr2);
//    int sz = strlen(arr1);
//    int ret = IsRotate(arr2, arr1, sz, LeftRotateOne);
//    printf("%d\n", ret);
//	return 0;
//}