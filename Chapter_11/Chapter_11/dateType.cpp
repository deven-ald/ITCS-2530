#include "dateType.h"

int dateType:: getDay() const
{
	return dDay;
}
int dateType::getMonth() const
{
	return dMonth;
}
int dateType::getYear() const
{
	return dYear;
}
void dateType::printDate() const
{
	std::cout << dMonth << "/" << dDay << "/" << dYear;
}
void dateType::isLeapYear()
{
	if (dYear % 4 == 0)
	{
		leap = true;
	}
	else
	{
		leap = false;
	}
}
void dateType::setDate(int month, int day, int year)
{
	isLeapYear();
	bool validity = 
		((month == 1 || month == 3 || month == 5 || month == 8 || month == 7 || month == 10 || month == 12) && (day <= 31))
		|| 
		((month == 4 || month == 6 || month == 9 || month == 11) && (day <=30));
	bool validity2 = ((month == 2) && (day <= 28));
	bool validity3 = ((month == 2) && (day <= 29));
	if (leap)
	{
		if (validity && validity3) {
			dMonth = month;
			dDay = day;
			dYear = year;
		}
		else
		{
			std::cout << "Invalid date" << std::endl;
			Sleep(5000);
		}
	}
	else if (!leap)
	{
		if (validity && validity2)
		{
			dMonth = month;
			dDay = day;
			dYear = year;
		}
		else
		{
			std::cout << "Invalid date" << std::endl;
			Sleep(5000);
		}
	}
}
dateType::dateType(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}