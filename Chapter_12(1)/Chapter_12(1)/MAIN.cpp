#include "deven.h"
#include <string>
#include <math.h>
#include <fstream>
#include <iomanip>

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

struct student {
	double score; string ID, answers; char lettergrade;
};

void Q2()
{
	system("cls");
	fstream all; string correct = "TFFTFFTTTTFFTFTFTFTT", temp, tem; int x, y, c = 0, counter1=0, tempscore = 0; student* bank;

	all.open("Text1.txt");

	if (all.is_open())
	{
		while (all.peek() != EOF)
		{
			getline(all, temp);
			c += 1;
		}
		bank = new student[c];
	}
	else {
		cout << "Failed Returning... " << endl;
		Sleep(5000);
		return;
	}
	all.close();
	all.open("Text1.txt");
	if(all.is_open())
	{
		while (getline(all, temp))
		{
		
			x = temp.find_first_of(" ");
			y = temp.length();
			x += 1;

			for (int i = 0; i < x; i++)
			{
				bank[counter1].ID += temp[i];
			}
			
			for (int i = x; i < temp.length(); i++)
			{
				bank[counter1].answers += temp[i];
			}
			counter1++;
		}
		
	}

	for (int i = 0; i < c; i++)
	{
		tempscore = 0;
		tem = bank[i].answers;
		for (int j = 0; j < tem.length(); j++)
		{

				if (tem[j] == correct[j])
					tempscore++;
		}
		bank[i].score = (static_cast<double>(tempscore) / 20) * 100;

		double sct = bank[i].score;

		if (sct > 0 && sct <= 59.99)
			bank[i].lettergrade = 'F';
		else if (sct > 60 && sct <= 69.99)
			bank[i].lettergrade = 'D';
		else if (sct > 70 && sct <= 79.99)
			bank[i].lettergrade = 'C';
		else if (sct > 80 && sct <= 89.99)
			bank[i].lettergrade = 'B';
		else if (sct > 90 && sct <= 100)
			bank[i].lettergrade = 'A';
		else {
			bank[i].lettergrade = 'F';
		}

		cout << "Student ID: " << bank[i].ID << endl << "Answers: " << bank[i].answers << endl << "Points: " << tempscore << endl << "Final Grade: " << bank[i].lettergrade << endl;

	}
	system("pause");
	
}

struct candidate
{
	string name; int votes=0;
};
void Q3()
{

	system("cls");
	int totalvotes = 0, numcan = 0;
	dev.print("Please enter the number of candidates: ");
	cin >> numcan;

	candidate* s = new candidate[numcan];

	for (int i = 0; i < numcan; i++)
	{
		system("cls");
		dev.print("Please enter the candidates name");
		cin >> s[i].name;
		dev.print("Please enter their amount of votes");
		cin >> s[i].votes;
		totalvotes += s[i].votes;
	}
	system("cls");

	dev.print("Candidate          Votes Recieved          % of Total Votes");
	for (int i = 0; i < numcan; i++)
	{
		cout << setw(19) << left << s[i].name 
			<<  setw(23) << left << s[i].votes 
			<< setw(40) << left << dev.RoundHundreth(((static_cast<double>(s[i].votes) / totalvotes) * 100)) << endl;
	}
	cout << setw(19) << left << "Total"
		<< setw(23) << left << totalvotes << endl;
	system("pause");
}

void Q4()
{
	system("cls");
}

void Q5()
{
	system("cls");
}