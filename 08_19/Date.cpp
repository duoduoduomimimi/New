#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}

// ����+=����
Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;

		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}

// ����+����
// d1 + 100
Date Date::operator+(int day)
{
	Date ret = *this;
	ret += day;
	return ret;
}

// ����-=����
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		_month--;  // ���dayΪ��������Ӧ�ü���ǰһ���µ�����������Ӧ��month��--
		
		// �ؼ���ȷ����ǰ�·�ǰһ���µ����������ܿ��꣩
		if (_month != 0)
		{
			_day += GetMonthDay(_year, _month);
			
		}
		else
		{
			// month == 0ʱ���Ƚ�year--��month��Ϊ12���Լ��㵱ǰ��ǰһ���µ�����
			_year--;
			_month = 12;
			_day += GetMonthDay(_year, _month);
		}
	}

	return *this;
}

// ����-����
Date Date::operator-(int day)
{
	Date ret = *this;
	ret -= day;
	return ret;
}

// ǰ��++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// ����++
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}


// ǰ��--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

// ����--
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

// >���������
bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
// ==���������
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

// >=���������
bool Date::operator>=(const Date& d)
{
	return *this == d || *this > d;
}

// <���������
bool Date::operator<(const Date& d)
{
	return !(*this > d);
}

// <=���������
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}

// !=���������
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

// ����-���� ��������
int Date::operator-(const Date& d)
{
	// �ۻ�����
	int days = 0;
	// ȷ���������ڵ�ǰ��˳��
	if (*this > d)
	{
		if (_year == d._year && _month == d._month)
		{
			return days = _day - d._day;
		}
		else if (_year == d._year)
		{
			Date tmp = d;
			while (tmp._month < _month)
			{
				days += GetMonthDay(tmp._year, tmp._month) - tmp._day;
				tmp._month++;
				tmp._day = 0;
			}

			return days += _day;
		}
		else
		{
			Date tmp = d;
			while (tmp._year < _year)
			{
				days += GetMonthDay(tmp._year, tmp._month)-tmp._day;
				tmp._day = 0;
				tmp._month++;
				if (tmp._month == 13)
				{
					tmp._year++;
					tmp._month = 1;
				}
			}

			while (tmp._month < _month)
			{
				days += GetMonthDay(tmp._year, tmp._month);
				tmp._month++;
			}

			return days += _day;
		}
	}
	else
	{
		if (d._year == _year && d._month == _month)
		{
			return days = d._day - _day;
		}
		else if (d._year == _year)
		{
			Date tmp = *this;
			while (tmp._month < d._month)
			{
				days += GetMonthDay(tmp._year, tmp._month) - tmp._day;
				tmp._month++;
				tmp._day = 0;
			}

			return days += d._day;
		}
		else
		{
			Date tmp = *this;
			while (tmp._year < d._year)
			{
				days += GetMonthDay(tmp._year, tmp._month) - tmp._day;
				tmp._day = 0;
				tmp._month++;
				if (tmp._month == 13)
				{
					tmp._year++;
					tmp._month = 1;
				}
			}

			while (tmp._month < d._month)
			{
				days += GetMonthDay(tmp._year, tmp._month);
				tmp._month++;
			}

			return days += d._day;
		}
	}
}