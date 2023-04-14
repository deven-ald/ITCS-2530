#pragma once
#include "deven.h"
class dateType
{
private:
	int dMonth, dDay, dYear;
	bool leap;
public:
	void setDate(int month, int day, int year);
	
	void isLeapYear();

	int getDay() const;
	
	int getMonth() const;
	
	int getYear() const;

	void printDate() const;

	dateType(int month = 1, int day = 1, int year = 1900);
};

