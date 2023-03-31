#include "clockType.h"
#include <iostream>
clockType::clockType(int hrs, int mins, int secs)
{
	if (hrs >= 0 && hrs <= 24)
		hr = hrs;
	else
		hr = 0;
	if (mins >= 0 && mins < 60)
		min = mins;
	else
		min = 0;
	if (secs >= 0 && secs < 60)
		sec = secs;
	else
		sec = 0;
	
}
clockType::clockType()
{
	min = 0;
	hr = 0;
	sec = 0;
}
void clockType::printTime() const 
{
	std::cout << "Time: " << hr << ":" << min << ":" << sec;
}
void clockType::incrementHours()
{
	hr++;
	if (hr > 23)
		hr = 0;
}
void clockType::incrementSeconds()
{
	sec++;
	if (sec > 59)
		sec = 0;
}
void clockType::incrementMinutes()
{
	min++;
	if (min > 59)
		min = 0;

}
void clockType::getTime(int& a, int& b, int& c) const
{
	a = hr;
	b = min;
	c = sec;
}
bool clockType::equalTime(const clockType& yourclock) const
{
	bool iseqal = (yourclock.hr == hr && yourclock.min == min && yourclock.sec);
	if (iseqal)
		return true;
	else
		return false;
}
void clockType::setTime(int a, int b, int c)
{
	if (a >= 0 && a <= 24)
		hr = a;
	else
		hr = 0;
	if (b >= 0 && b < 60)
		min = b;
	else
		min = 0;
	if (c >= 0 && c < 60)
		sec = c;
	else
		sec = 0;
}