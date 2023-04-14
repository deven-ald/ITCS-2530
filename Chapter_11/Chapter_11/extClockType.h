#pragma once
#include "clockType.h"
#include "deven.h" //Included to use the headerfiles defined in this file
class extClockType :
    public clockType
{
private:
    clockType clock;
    std::string timezone;
public:
	void setTime(int, int, int, std::string);
	void getTime(int& a, int& b, int& c, std::string& tz) const;
	void printTime() const;
	void incrementSeconds(), incrementMinutes(), incrementHours();
	bool equalTime(const extClockType&) const;
	extClockType();
	extClockType(int hrs, int mins, int secs, std::string timezone);
	void setTimezn(std::string);
	void incrementTz();
};

