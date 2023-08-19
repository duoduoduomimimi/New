#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	// ���ĳ��ĳ�µ�����
	// ����ҪƵ�����õĳ�Ա�����������붨�嶼д�����У��ɹ���inline������չ��
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

	// ����ҪƵ�����õĳ�Ա�����������붨�嶼д�����У��ɹ���inline������չ��
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	// ��ֵ���������
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
	Date& operator+=(int day); 			// ����+=����
	Date operator+(int day);			// ����+����
	Date operator-(int day);  			// ����-����
	Date& operator-=(int day);			// ����-=����
	Date& operator++();					// ǰ��++
	Date operator++(int);				// ����++
	Date operator--(int);				// ����--
	Date& operator--();					// ǰ��--
	bool operator>(const Date& d);		// >���������
	bool operator==(const Date& d);		// ==���������
	bool operator >= (const Date& d);  	// >=���������
	bool operator < (const Date& d);    // <���������
	bool operator <= (const Date& d);   // <=���������
	bool operator != (const Date& d);   // !=���������
	int operator-(const Date& d);		// ����-���� ��������

private:
	int _year;
	int _month;
	int _day;
};