#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void Test1()
{
	Date d1(2023, 7, 17);
	d1.Print();
	Date d2(d1);
	d2.Print();
	Date d3(2023, 8, 17);
	d1 = d2 = d3;
	d3.Print();
	d1.Print();
	d2.Print();
}

void Test2()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1 += 4).Print();

	(d1 += 40).Print();

	(d1 += 400).Print();

	(d1 += 4000).Print();

}

void Test3()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1 + 4).Print();

	(d1 + 40).Print();

	(d1 + 400).Print();

	(d1 + 4000).Print();

}

void Test4()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1 -= 4).Print();

	(d1 -= 40).Print();

	(d1 -= 400).Print();

	(d1 -= 4000).Print();

}

void Test5()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1 - 4).Print();

	(d1 - 40).Print();

	(d1 - 400).Print();

	(d1 - 4000).Print();
}


void Test6()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1++).Print();
	d1.Print();

	(++d1).Print();
	d1.Print();
}

void Test7()
{
	Date d1(2023, 8, 19);
	d1.Print();

	(d1--).Print();
	d1.Print();

	(--d1).Print();
	d1.Print();
}

void Test8()
{
	Date d1(2023, 8, 19);
	Date d2(2023, 5, 11);
	Date d3(2022, 11, 3);
	Date d4(2023, 5, 12);

	d1.Print();
	d2.Print();
	d3.Print();
	d4.Print();

	cout << (d1 > d2) << endl;
	cout << (d1 < d3) << endl;
	cout << (d1 >= d4) << endl;
	cout << (d1 != d2) << endl;
	cout << (d1 <= d2) << endl;
	cout << (d3 > d4) << endl;
	cout << (d2 < d3) << endl;
	cout << (d4 > d2) << endl;

}

void Test9()
{
	Date d1(2023, 8, 19);
	Date d2(2021, 11, 20);
	cout << (d1 - d2) << endl;

	Date d3(2023, 8, 19);
	Date d4(2023, 8, 10);
	cout << (d3 - d4) << endl;

	Date d5(2023, 8, 19);
	Date d6(2023, 11, 12);
	cout << (d5 - d6) << endl;
}

int main()
{
	//Test1();
	//Test2();
	//Test3();
	//Test4();
	//Test5();
	//Test6();
	//Test7();
	//Test8();
	Test9();
	return 0;
}