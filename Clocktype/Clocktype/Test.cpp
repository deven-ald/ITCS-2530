#include "clockType.h"
#include <iostream>
#include <random>
using namespace std;

int main()
{
	clockType your_Clock, my_Clock;
	int hr = rand() % 23 + 1;
	int min = rand() % 59 + 1;
	int sec = rand() % 59 + 1;

	cout << "Time for clock one:" << endl;
	my_Clock.setTime(hr, min, sec);
	my_Clock.printTime();

	cout << endl << "Plese enter the prompted values:" << endl;
	cout << "Hours:" << endl;
	cin >> hr;
	cout << "Minutes: " << endl;
	cin >> min;
	cout << "Seconds: " << endl;
	cin >> sec;
	your_Clock.setTime(hr, min, sec);
	cout << "Your Clock's Time:" << endl;
	your_Clock.printTime();

	cout << endl;
	if (my_Clock.equalTime(your_Clock))
		cout << "They are equal in time" << endl;
	else
		cout << "They are NOT equal in time" << endl;
	return 0;
}