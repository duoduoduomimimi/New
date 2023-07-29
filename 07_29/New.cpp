#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	std::cout << "hello world!" << std::endl;
//	int i = 0;
//	double d = 0;
//	std::cin >> i >> d;
//	std::cout << i << " " << d << std::endl;
//	return 0;
//}

// 全缺省
//void TestFunc(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a:> " << a << endl;
//	cout << "b:> " << b << endl;
//	cout << "c:> " << c << endl;
//	cout << endl;
//}
//
//// 半缺省
//void TestFunc2(int a, int b = 20, int c = 30)
//{
//	cout << "a:> " << a << endl;
//	cout << "b:> " << b << endl;
//	cout << "c:> " << c << endl;
//	cout << endl;
//}
//
//int main()
//{
//	TestFunc2(1);
//	TestFunc2(1, 2);
//	TestFunc2(1, 2, 3);
//	return 0;
//}

// 函数重载
//void Print(double x, double y)
//{
//	cout << x << endl;
//	cout << y << endl;
//	cout << endl;
//}
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void Swap(double* a, double* b)
//{
//	double tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	double c = 1.1;
//	double d = 2.2;
//	Print(a, b);
//	Print(c, d);
//	Swap(&a, &b);
//	Swap(&c, &d);
//	Print(a, b);
//	Print(c, d);
//	return 0;
//}