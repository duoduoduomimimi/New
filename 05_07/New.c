#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

// ���֡��۰����
// ע��㣺
//    1. ��ȷ��left��right��ʼ���±�
//    2. ѭ��ִ�е�����
//    3. δ�ҵ�ʱ�Ĵ���
//    4. ��ƽ��ֵ��һ�ַ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 3;
//	//����k
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	/*int mid = (left + right) / 2;*/
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = ((right - left) / 2) + left; // �����������֮����󣬶����Խ��
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
//			printf("k���±�Ϊ:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û�ҵ�k\n");
//
//	return 0;
//}

 //�۹�ǧƪ�������չ�һ��
 //��д���룬��ʾ����ַ��������ƶ������м���
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
		Sleep(80); // ��λ�Ǻ���
		system("cls"); // systemִ��ϵͳ��� cls������Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}

//��д���룬ģ���û���¼�龰������ֻ�ܵ�¼����
// �����ַ����ıȽ�
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//������ȷ��������"abcdfe"
//	for (i; i < 3; i++)
//	{
//		printf("��������:> ");
//		scanf("%s", password);
//		if (strcmp(password, "abcde") == 0)
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������,��������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�������������\n");
//	}
//	return 0;
//}

//��������Ϸ
//1. �����������һ�����֣�1~100��
//2. ��Ҳ�����
//	 ��Ҳ�С�ˣ��͸�֪��С��
//   ��Ҳ´��ˣ��͸�֪�´���
//   ֱ���¶�Ϊֹ
//3. ��Ϸ���Լ�����
//void menu()
//{
//	printf("*********************\n");
//	printf("****** 1. play ******\n");
//	printf("****** 0. exit ******\n");
//	printf("*********************\n");
//}
//
//// ��������Ϸ��ʵ��
//// ʱ���
//// C�����ṩ��һ������time�����Է���һ��ʱ���
//
//void game()
//{
//	int guess = 0;
//	//1. ����һ�������
//	int num = rand() % 100 + 1; // 1~100
//
//	//2. ������
//	while (1)
//	{
//		printf("������:> ");
//		scanf("%d", &guess);
//
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  // ֻ��Ҫ����һ��
//	do
//	{
//		menu();
//		printf("��ѡ��:> ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
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

// һ���ػ�����
// ֻҪ�����������������Ծ���һ����֮�ڹػ���������룺��������ȡ���ػ���
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60"); // system��һ���⺯����������ִ��ϵͳ�����
//
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ�!\n������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a"); // ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

