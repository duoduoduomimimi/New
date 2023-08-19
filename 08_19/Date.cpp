#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}

// 日期+=天数
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

// 日期+天数
// d1 + 100
Date Date::operator+(int day)
{
	Date ret = *this;
	ret += day;
	return ret;
}

// 日期-=天数
Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day <= 0)
	{
		_month--;  // 如果day为负数，则应该加上前一个月的天数，所以应将month先--
		
		// 关键是确定当前月份前一个月的天数（可能跨年）
		if (_month != 0)
		{
			_day += GetMonthDay(_year, _month);
			
		}
		else
		{
			// month == 0时，先将year--，month置为12，以计算当前月前一个月的天数
			_year--;
			_month = 12;
			_day += GetMonthDay(_year, _month);
		}
	}

	return *this;
}

// 日期-天数
Date Date::operator-(int day)
{
	Date ret = *this;
	ret -= day;
	return ret;
}

// 前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

// 后置++
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}


// 前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

// 后置--
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

// >运算符重载
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
// ==运算符重载
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

// >=运算符重载
bool Date::operator>=(const Date& d)
{
	return *this == d || *this > d;
}

// <运算符重载
bool Date::operator<(const Date& d)
{
	return !(*this > d);
}

// <=运算符重载
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}

// !=运算符重载
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

// 日期-日期 返回天数
int Date::operator-(const Date& d)
{
	// 累积天数
	int days = 0;
	// 确定两个日期的前后顺序
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