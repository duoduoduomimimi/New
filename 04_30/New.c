#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

//int main()
//{
//	char arr[] = "??(";
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	return 0;
//}

//int main()
//{
//	//printf("c:\\test\\test.c")
//	printf("ac\vbde");
//	printf("abcde");
//	return 0;
////}

//int main()
//{
//	printf("%c\n", '\130');
//	printf("%d\n", 'a'); //97
//	printf("%d\n", 'z'); //122
//	printf("%d\n", 'A'); //65
//	printf("%d\n", 'Z'); //90
//	printf("%c\n", '\x69'); // i
//	printf("%d\n", strlen("c:\test\628\test.c")); //14
//	/*
//		c���Ե�ע�ͷ�񣬲�֧��Ƕ��ע��
//		// c++��ע�ͷ��
//	*/
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("���ϴ�ѧ\n");
//	printf("���ú�ѧϰ��?\n");
//
//	// �û�ѡ��
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��ҵ֮���ú�offer\n");
//	}
//	else
//	{
//		printf("ʧҵ�ؼ�Ӵ~\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int line = 0; // ������
//	printf("ѧϰ���\n");
//	printf("ÿ�첻�Ͼ������ô���~\n");
//
//	while (line < 20000)
//	{
//		printf("%d:�ô���~\n", line+1);
//		line++;
//	}
//	
//	if (line < 20000)
//		printf("�ú�ѧϰ\n");
//	else
//		printf("�ú�offer\n");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return (x + y);
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int arr1[100] = { 0 }; // ����ȫ��ʼ��
//	printf("%d\n", arr[6]);
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		++i;
//	}
//
//	// c99��׼�У������˱䳤����
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 7 / 3);  // ��������
//	printf("%d\n", 7 % 3);  // ������
//	return 0;
//}