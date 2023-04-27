#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Date
{
public:
	/*Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}*/

	/*Date()
	{
		_year = 2023;
		_month = 4;
		_day = 26;
	}*/

	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

//int main()
//{
//	Date d1(2023, 5, 1);
//	Date d2; // 构造函数自动初始化
//
//	d1.Print();
//	d2.Print();
//	return 0;
//}
