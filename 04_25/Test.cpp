#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Date
{
public:
	void Iint(int year, int month, int day)
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
//	Date d1;
//	d1.Iint(2023, 4, 25);
//	d1.Print();
//
//	return 0;
//}