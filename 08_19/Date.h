#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	// 获得某年某月的天数
	// 对于要频繁调用的成员函数，声明与定义都写在类中，可构成inline不进行展开
	int GetMonthDay(int year, int month)
	{
		static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = days[month];
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			day++;
		}
		return day;
	}

	// 对于要频繁调用的成员函数，声明与定义都写在类中，可构成inline不进行展开
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// 赋值运算符重载
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	void Print();
	Date& operator+=(int day); 			// 日期+=天数
	Date operator+(int day);			// 日期+天数
	Date operator-(int day);  			// 日期-天数
	Date& operator-=(int day);			// 日期-=天数
	Date& operator++();					// 前置++
	Date operator++(int);				// 后置++
	Date operator--(int);				// 后置--
	Date& operator--();					// 前置--
	bool operator>(const Date& d);		// >运算符重载
	bool operator==(const Date& d);		// ==运算符重载
	bool operator >= (const Date& d);  	// >=运算符重载
	bool operator < (const Date& d);    // <运算符重载
	bool operator <= (const Date& d);   // <=运算符重载
	bool operator != (const Date& d);   // !=运算符重载
	int operator-(const Date& d);		// 日期-日期 返回天数

private:
	int _year;
	int _month;
	int _day;
};