#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void Print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i)); // *p �൱������������������������Ԫ�صĵ�ַ������*p����&arr[0]
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(&arr, sz);
//	return 0;
//}

//void Print1(int arr[3][5],int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Print2(int (*p)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d " ,* (*(p + i) + j));
//			// p+i��ָ���i�е�
//			// *(p+i) �൱���õ��˵�i�У�����i����Ԫ�صĵ�ַ
//			//  <=> printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	// дһ����������ӡarr����
//	Print1(arr, 3, 5);
//	return 0;
//}

//int i; // ȫ�ֱ������û�г�ʼ����Ĭ�ϻᱻ��ʼ��0
//
//int main()
//{
//    i--; // -1
//    //sizeof ��һ��������������������ķ��ؽ������Ϊsize_t, size_t���޷�������
//    //���Ի��������ת��
//    //1111111111111111111111111111111
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//int NumberOf1(int m)
//{
//	int count = 0;
//	unsigned int n = m;
//	while (n)
//	{
//		if (n % 2)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n &= (n - 1); // ���԰Ѷ����������е�����1��ȥ�����м���1��ѭ����ִ�м��Σ�Ч�����
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}

// дһ�������ж�����n�ǲ���2���ݴη�
//int PowOf2(int n)
//{
//	if ((n & (n - 1)) == 0)
//		return 1;
//	
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = PowOf2(n);
//	if (ret)
//		printf("%d��2���ݴη�\n", n);
//	else
//		printf("%d����2���ݴη�\n", n);
//
//	return 0;
//}

//�ַ�������
// ABCD ����һ���ַ� BCDA
// ABCD ���������ַ� CDAB
//void LeftHandedStringOne(char* str, int len)
//{
//	char tmp = str[0]; // ������Ԫ��
//	int i = 0;
//	while (i < len - 1)
//	{
//		// ��β
//		str[i] = str[i + 1];
//		i++;
//	}
//
//	str[i] = tmp;
//}
//
//void LeftHandedString(char* str, int k, int len)
//{
//	int n = k % len;  // ��Ч����
//	while (n)
//	{
//		LeftHandedStringOne(str, len);
//		n--;
//	}
//}
//
//int main()
//{
//	char str[20];
//	gets(str);
//	printf("%s\n", str);
//
//	int k = 0;
//	scanf("%d", &k);
//	int len = strlen(str);
//	LeftHandedString(str, k, len);
//	printf("%s\n", str);
//	return 0;
//}

// �����������У�����ĳ�������Ƿ����
int FindNumber(int arr[][5], int row, int col, int n)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (n < arr[x][y])
		{
			y--;
		}
		else if (n > arr[x][y])
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{16,18,33,67,79} }; // ����һ����������
	int ret = FindNumber(arr, 3, 5, n);
	if (1 == ret)
		printf("%d�ڸ����־����д���\n", n);
	else
		printf("%d�ڸ����־����в�����\n", n);

	return 0;
}