#include "extClockType.h"

void extClockType::setTime(int hrs, int mins, int sec, std::string tz)
{
	clockType::setTime(hrs, mins, sec);
	timezone = tz;
}


void extClockType::getTime(int& a, int& b, int& c, std::string& tz) const
{
	clockType::getTime(a, b, c);
	tz = timezone;

}


void extClockType::printTime() const
{
	clockType::printTime();
	std::cout << " " << timezone;
}


void extClockType::incrementSeconds()
{
	clockType::incrementSeconds();
} 


void extClockType::incrementMinutes()
{
	clockType::incrementMinutes();
}


void extClockType::incrementHours()
{
	clockType::incrementHours();
}


void extClockType::incrementTz()
{
	std::cout << "How far ahead is this timezone (30min or 1hr)?" << std::endl;
	std::string res;
	std::cin >> res;
	if (res == "30min")
	{
		for (int i = 0; i < 30; i++)
		{
			incrementMinutes();
		}
		int a, b, c;
		clockType::getTime(a, b, c);
		if (b == 0)
		{
			incrementHours();
		}
	}
	else if (res == "1hr")
	{
		incrementHours();
	}
	else
	{
		std::cout << "Invalid Input Going back" << std::endl;
		Sleep(1000);
		system("cls");
		return;
		
	}
	std::cout << "Enter timezone (One Hour Ahead): " << std::endl;
	std::cin >> timezone;
	system("cls");
}


bool extClockType:: equalTime(const extClockType& a) const
{
	int x, y, z, w, b, c;
	std::string tz;
	a.getTime(x, y, z, tz);
	clockType::getTime(w, b, c);
	bool cond = (w == x) && (b == y) && (z == c) && (tz == timezone);
	if (cond)
	{
		return true;
	}
	else
	{
		return false;
	}

}


void extClockType::setTimezn(std::string tz)
{
	std::cout << "How far ahead is your timezone? (30Mins - 1hr)" << std::endl;
	std::string res;
	std::cin >> res;

	if (res == "30min")
	{
		for (int i = 0; i < 30; i++)
		{
			incrementMinutes();
		}
	}
	else if (res == "1hr")
	{
		incrementHours();
	}
	else
	{
		std::cout << "Invalid Input Going back" << std::endl;
		Sleep(1000);
		system("cls");
		return;

	}

}


extClockType::extClockType()
{
	clockType::setTime(0, 0, 0);
	timezone = "EST";
}


extClockType::extClockType(int hrs, int mins, int secs, std::string tz)
{
	clockType::setTime(hrs, mins, secs);
	timezone = tz;
}



