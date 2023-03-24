#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;

//struct 
struct computerType {
	string brand;
	double price;
	int yearmade, numcores, ram;
};

struct studentType {
	string studentFName, studentLName;
	int testScore;
	char grade;
};

//Prototypes

bool endloop(bool);
int highestScore(studentType[20]);

void q1(), q2(), q5(), q6(), w(), i(), strinit(computerType& a), strout(computerType), studentinit(studentType[20]), gradeAssignment(studentType[20]), output(studentType[20]);

int main() {

	bool condition = true;

	while (condition) {
		i();
		cout << "Enter a selection: 1, 2, 5, 6" << endl;
		int option=0;
		cout << "0 to terminate program" << endl;
		cin >> option;
	
		if (option == 1) {
			q1();
		}
		else if (option == 2) {
			q2();
		}
		else if (option == 5) {
			q5();
		}
		else if (option == 6) {
			q6();
		}
		else if (option == 0) {
			exit(0);
		}
		else {
			i();
			cout << "There are 5 option. Read the prompt carefully, take a deep breath and try again." << endl;
			Sleep(1000);
		}
	}

	return 0;
}
void q1() {
	bool condition = true;
	while (condition) {
		i();
		w();
		computerType Example;

		strinit(Example);
		strout(Example);
		condition = endloop(condition);
	}
}
void q2()
{	
	studentType st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12, st13, st14, st15, st16, st17, st18, st19, st20;
	studentType arr[20] = {st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12, st13, st14, st15, st16, st17, st18, st19, st20 };
	studentinit(arr);
	gradeAssignment(arr);
	for (int i = 0; i < 20; i++) {
		cout << arr[i].testScore << endl;
	}
	//output(arr);
	w();
}
void studentinit(studentType arr[20]) 
{
	fstream student;
	student.open("student.txt");
	string temp;
	if (student.is_open()) 
	{
		int i = 0;
		while (getline(student, temp)) 
		{
			string newtemp;
			if (temp.length() > 2) {
				for (int j = 0; j < temp.find_first_of(' '); j++) {
					arr[i].studentFName += temp[j];
				}
				
				int lastnamep = temp.find_first_of(' ');
				for (int j = lastnamep + 1; temp[j] != ' '; j++) {
					arr[i].studentLName += temp[j];
				}
				for (int j= 0; j < temp.length(); j++) {
					if (isdigit(temp[j])) {
						newtemp = newtemp+temp[j];
					}
				}
				
				arr[i].testScore = stoi(newtemp);
				
			}
			
			i++;
		}
		
	}
}
int highestScore(studentType arr[20]) {
	int highestscore = arr[0].testScore;
	int index = 0;
	for (int i = 0; i < 20; i++) 
	{
		if (arr[i].testScore > highestscore) {
			highestscore = arr[i].testScore;
			index = i;
		}

	}
	return index;
}
void gradeAssignment(studentType arr[20])
{
	for (int i = 0; i < 20; i++) {
		if (arr[i].testScore <= 100 || arr[i].grade >= 90)
		{
			arr[i].grade = 'A';
		}
		else if (arr[i].testScore <= 89 || arr[i].testScore > 80)
		{
			arr[i].grade = 'B';
		}
		else if (arr[i].testScore <= 79 || arr[i].testScore > 70)
		{
			arr[i].grade = 'C';
		}
		else if (arr[i].testScore <= 69|| arr[i].testScore > 60)
		{
			arr[i].grade = 'D';
		}
		else if (arr[i].testScore < 59) 
		{
			arr[i].grade = 'F';
		}
		
	}

}
void output(studentType arr[20])
{
	cout << "Highest graded student: " << endl;
	int h = highestScore(arr);
	cout << arr[h].studentLName << ", " << arr[h].studentFName << " | Grade: " << arr[h].grade << endl;
	cout << endl << endl << endl;
	cout << "All Students: " << endl;
	for (int i = 0; i < 20; i++) {

		cout << arr[i].studentLName << ", " << arr[i].studentFName << " | Grade: " << arr[i].grade << endl;
	}
}
void q5()
{

}
void q6()
{

}
bool endloop(bool a) {
	cout << "Would you like to run this function again? (Y/N)" << endl;
	char choice = 'Y';
	cin >> choice;
	if ('Y' == toupper(choice)) {
		return a = true;
	}
	else if ('N' == toupper(choice)) {
		return a = false;
	}
}
void strinit(computerType &a) {
	i();
	cout << "Enter the brand of your computer " << endl;
	cin >>a.brand;
	cout << "Enter the price of your computer " << endl << "$";
	cin >> a.price;
	cout << "Enter the year your computer was made" << endl;
	cin >> a.yearmade;
	cout << "Enter the number of cores the CPU of your comptuer has (Usually 1-8)" << endl;
	cin >> a.numcores;
	cout << "Enter the quantity of ram in Gigabytes that your comptuer has" << endl;
	cin >> a.ram;
	i();
	cout << "Thank you, returning to screen" << endl;
	string b = "please wait"; Sleep(1000);
	i();
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < b.length(); i++) {
			cout << b[i]; Sleep(100);
		}
		i();
	}
	i();
}
void strout(computerType a) {
	cout << "Brand of your computer: " << a.brand << endl << "Price of your computer: " << a.price << endl << "Year: " << a.yearmade << endl
		<< "Number of cores: " << a.numcores << endl << "RAM in GB: " << a.ram << endl;
	Sleep(5000);
	i();
}
void i() {
	system("cls");
}
void w() {
	system("pause");
}