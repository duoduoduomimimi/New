#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	float f = 0.5;
//	return 0;
//}

//int CheckSys()
//{
//	int a = 1;
//	return *(char*)&a; // ȡ����һ���ֽ�
//}
//
//int main()
//{
//	/*int a = 1;*/
//	//00000000000000000000000000000001  - ������
//	//0x 00 00 00 01 - ʮ������ 
//	int ret = CheckSys();
//	if (ret)
//	{
//		printf("С���ֽ���\n");
//	}
//	else
//	{
//		printf("����ֽ���\n");
//	}
//}

//int main()
//{
//	char a = 128;
//	int n = 9;
//	float* pf = (float*)&n;
//	printf("%d\n", a);
//	printf("%u\n", a);
//	
//	printf("\n");
//	printf("%f\n", *pf);
//
//	*pf = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pf);
//
//	return 0;
//}

//������
//int main()
//{
//	int killer = 0;
//	// �ַ���������ASCII��ֵ�洢���ڴ��е�
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("������:> %c", killer);
//		}
//	}
//	return 0;
//}

