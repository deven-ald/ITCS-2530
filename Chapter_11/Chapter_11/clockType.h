#pragma once
class clockType
{
private:
	int hr, min, sec;

public:
	void setTime(int, int, int);
	void getTime(int& a, int& b, int& c) const;
	void printTime() const;
	void incrementSeconds(), incrementMinutes(), incrementHours();
	bool equalTime(const clockType&) const;
	clockType();
	clockType(int hrs, int mins, int secs);

};

