#include "deven.h"
#include <string>
using namespace std;
void Q1(), Q2(), Q3(), Q4(), Q5(); deven dev;

int main()

{
	
	bool condition = true; int choice = 0;

	while (condition)
	{

		system("cls");
		dev.PrintFile("Text.txt");
		cin >> choice;
		if (choice == 1)
		{
			Q1();
		}
		else if (choice == 2)
		{
			Q2();
		}
		else if (choice == 3)
		{
			Q3();
		}
		else if (choice == 4)
		{
			Q4();
		}
		else if (choice == 5)
		{
			Q5();
		}

		dev.loopend(condition);
	}




	return 0;
}


void Q1()
{
	string input, up; int x; 
	system("cls");
	dev.print("Please enter something to be capitalized: ");
	cin.ignore();
	getline(cin, input);
	x = input.length();
	char* a = new char(x);
	for (int i = 0; i < x; i++)
	{
		a++;
		a[i] = toupper(input[i]);
		cout << a[i];
	}
	cout << endl;
	

	system("pause");


	
}


void Q2()
{
	system("cls");
}

void Q3()
{
	system("cls");
}

void Q4()
{
	system("cls");
}

void Q5()
{
	system("cls");
}