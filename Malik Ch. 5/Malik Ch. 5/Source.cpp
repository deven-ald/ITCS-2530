#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <cctype>
/*
AUTHOR: DEVENDRA RANJAN 
DATE 2-10-2023
ITCS-2530
*/
using namespace std;
void ques4();
void ques6();
void ques12();
void ques29();
void ques28();
void print(string);
void printfile(string);
int main()
{
	//Variables
	int i = 1;
	int sel1;
	//Main Loop
	while (i == 1)
	{
		system("cls");
		printfile("Main Menu.txt");
		print("");

		cin >> sel1;

		if (sel1 == 4) {
			ques4();
		}
		else if (sel1 == 6) {
			ques6();
		}
		else if (sel1 == 29) {
			ques29();
		}
		else if (sel1 == 12) {
			ques12();
		}
		else if (sel1 == 28) {
			ques28();
		}
		else if (sel1 == 1) {
			return 0;
		}
	}

	//Return Statement
	return 0;
}

void ques4() {
	


	string flip[10][10] = { { "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" }
	, {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ", "" } };

	string number;
	string digit;
	char choice = 'y';
	

	while (choice == 'y') {
		system("CLS");
		print("Please enter a phrase to be converted into a number. ");
		cin.ignore();
		//This grabs whatever was entered with spaces and all
		getline(cin, number);
		//this reduces the number to having zero spaces
		number.erase(remove_if(number.begin(), number.end(), ::isspace), number.end());
		
		//This iterates through each character in number and turns it into an upper case letter 
		for (char& c : number) {
			c = toupper(c);
		}
		//This makes the stringa n object able to be parsed through like a list
		string n(number);
		//Initial loop iterating through each character
		printf("Phone Number: ");
		//It is set as "6" in the following code because it can only be a 7 character phrase
		for (int i = 0; i <= 6; i++) {
			digit = n[i];
			//This was the only way to do it that didn't throw a run time error
			if (digit == "1" || digit == "2" || digit == "3" || digit == "4" || digit == "5" || digit == "6" || digit == "7" || digit == "8" || digit == "9" || digit == "0" ) {
				print("invalid input try again");
				break;
			}
			if (i >= number.length()) {
				break;
			}
			
			//While loop condition:
			int c = 0;
			//Number cooresponding 
			int a = 0;
			//WHile loop
			while (c == 0 && a < 10) {
					//This condition looks through flip at a point and see's if the digit is associated with the multidimensional array
				if (flip[1][a].find(digit) != string::npos && i != 3) {
					cout << flip[0][a];
					c = 1;
				}
				else if (flip[1][a].find(digit) != string::npos && i == 3) {
					cout << "-" << flip[0][a];
				}
				else {
					c = 0;
				}
				
				a += 1;

			}
			
			
		}
		print(" ");
		print("Press y to go again or type anything to exit.");
		cin >> choice;
		choice = tolower(choice);
		
	}
	
}

void ques6() {

	int number;
	bool condition = true;
	char option;
	while (condition) {
		system("cls");
		bool isprime = true;

		print("Please enter a positive integer: ");
		cin >> number;

		for (int i = 2; i <= sqrt(number); i++) {
			if (number % i == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime) {
			print("Number is prime");
		}
		else {
			print("Number isn't prime");
		}
		print(" ");
		print("Press y to go again or type anything to exit.");
		cin >> option;
		option = tolower(option);

		if (option == 'y') {
			condition = true;
		}
		else {
			condition = false;
		}
		
	}
	
	


}
void ques12() {
	bool condition = true;
	double towna;
	double townb;
	double popra;
	double poprb;
	char option;
	bool condition2 = true;
	
	while (condition2) {
		while (condition) {
			int counter = 0;
			system("cls");
			//Prompt
			print("Please input the population of town A (Has to be less than the population of town B): ");
			cin >> towna;
			print("Please input the population of town B: ");
			cin >> townb;
			print("Please enter the growth rate of town A in a decimal (e.g: 0.5) (Has to be greater than the growth rate of town B)");
			cin >> popra;
			print("Finally, enter the growth rate for town B in a decimal (e.g: 0.5)");
			cin >> poprb;
			
			//Error handling
			if (towna > townb || popra < poprb) {
				print("You have entered an invalid value for one or both of the fields above. Press enter to try again.");
				system("Pause");
				break;
			}

			//Calculations
			for (int i = 1; towna < townb; i++) {
				towna = towna + (towna * popra);
				townb = townb + (townb * poprb);
				counter = i;
			}

			//output

			cout << "It would take " << counter << " years for town A to catch up to town B in population based off %" << popra*100 << " growth rate." << endl;
			print("Press y to go again or type anything to exit.");
			cin >> option;
			option = tolower(option);

			if (option == 'y') {
				condition = true;
			}
			else {
				condition = false;
				condition2 = false;
			}
			}
		}
	}


void ques29() {
	int posint;
	
	bool condition = true;
	char option;
	while (condition) {
		int factorial = 1;
		system("cls");
		print("Please enter a NON-NEGATIVE whole number");
		cin >> posint;
		for (int i = 1; i <= posint; i++) {
			factorial *= i;
		}
			cout << "!" << posint << " is equal to: " << factorial << endl;
			print(" ");
			print("Press y to go again or type anything to exit.");
			cin >> option;
			option = tolower(option);

			if (option == 'y') {
				condition = true;
			}
			else {
				condition = false;
			}
		}
	
	system("pause");
}

void ques28() {
	bool condition = true;
	char option;
	while (condition) {
		system("cls");
		//variable initialization
		int units, vacant = 0;
		int x = 0;
		double rent, incentive, maintain, profit = 0, prof;


		//prompt
		print("Please enter the number of units in the aparment building: ");
		cin >> units;
		print("Please enter the cost for rent: ");
		cin >> rent;
		print("Please enter the cost increase that most commonly causes vacancy: ");
		cin >> incentive;
		print("Enter monthly maintanenece: ");
		cin >> maintain;

		while (vacant != units) {
			prof = (rent - maintain) * (units - vacant);
			if (prof > profit) {

				//This gets the units each time the loop runs
				x = units - vacant;
				//this gets the profit so that it can be maximized according to number of units.
				profit = prof;
			}
			//increases rent per month to find how to maximize
			rent = rent + incentive;
			//Increases vacancy before the vancant units equal the units
			vacant++;

		}
		print(" ");
		cout << "To maximize profits you would need: " << x << " units rented out" << endl;
		print("Press y to go again or type anything to exit.");
		cin >> option;
		option = tolower(option);

		if (option == 'y') {
			condition = true;
		}
		else {
			condition = false;
		}
	}
}
void print(string a) {
	cout << a << endl;
}
void printfile(string a) {
	ifstream f(a);
	cout << f.rdbuf();

}