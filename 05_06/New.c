#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;  // 1 2 3 4 ��ѭ��  ��Ϊi++�޷���ִ�У������޷����ı�
//					   // continue����Ĵ��벻�ᱻִ��
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

// EOF - end of file �ļ�������־
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);  // ctrl + z ֹͣ ����getchar()����һ��EOF
//	}
//	return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);  // ������
//
//	// ����1
//	//getchar(); // ����\n
//
//	// ����2
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
//	ch = getchar(); 
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9') // ֻ��ӡ�����ַ�
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
//	// forѭ�����жϲ���ʡ���ˣ�����ζ���жϺ�Ϊ��
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
//		printf("k\n"); // ѭ����ִ��
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

// ��ϰ��

// 1. ����n�Ľ׳�
// 5!= 1*2*3*4*5
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	//����
//	scanf("%d", &n);
//
//	//����
//	for (int i = 1; i < n+1; i++)
//	{
//		ret *= i;
//	}
//
//	//���
//	printf("n! = %d", ret);
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		int n = 0;
//		int ret = 1;
//		//����
//		printf("����һ������n:");
//		scanf("%d", &n);
//
//		//����
//		for (int i = 1; i < n + 1; i++)
//		{
//			ret *= i;
//		}
//
//		//���
//		printf("n! = %d", ret);
//
//		//�ж��Ƿ����
//		int input = 0;
//		printf("\n�Ƿ����(0/1):");
//		scanf("%d", &input);
//		if (1 == input)
//			continue;
//		else if (0 == input)
//			break;
//		else
//		{
//			do
//			{
//				printf("����������:");
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

 //2. ���� 1��+2��+3��+...+10��
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	//����
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

// 3. ��һ�����������в���ĳ������n �����ֲ��ҡ��۰���ң�

int main()
{
	int arr[] = { 1, 4, 7, 11, 34, 62, 71, 88, 92, 119, 126 };
	int k = 11;
	// ����k
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
			printf("k���±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right)
		printf("û���ҵ�k\n");

	return 0;
}