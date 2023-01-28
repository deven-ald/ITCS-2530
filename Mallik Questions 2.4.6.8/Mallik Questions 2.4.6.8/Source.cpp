#include <iostream>
#include <iomanip>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

//Pre-Defining My functions

void PrintFile(string);
int Question2();
int Question6();
int Question4();
int Question8();
double RoundHundreth(double);
int main()
{
	int loop2 = 0;
	int option2;
	string option3;

	//Main Menu Loop
	while (loop2 == 0) {
		PrintFile("Main Menu.txt");
		cout << "" << endl;
		cin >> option2;

		for (int i = 0; i < 1; i++)
		{

			if (option2 == 2) {

				//Clears the screen for this option
				system("cls");

				//Runs the code for Question 2
				Question2();

				//Gives prompt to go back to Main Menu and start again or pick a different option
				cout << "Press E to terminate the program and M to return to the main menu." << endl;
				cin >> option3;

				//Promt to exit or return to main menu
				if (option3 == "E") {
					loop2 += 1;
					
				}
				else if (option3 != "M" && option3 != "E") {
					cout << "Invalid Input, Returning to Main Menu" << endl;
					Sleep(2000);
				}
				//clears screen
				system("cls");
			}

			else if (option2 == 4) {
				//Clears Screen
				system("cls");

				//Runs Qestion 4
				Question4();

				//Exit Option
				cout << "Press E to terminate the program and M to return to the main menu." << endl;
				cin >> option3;

				if (option3 == "E") {
					loop2 += 1;

				}

				else if (option3 != "M" && option3 != "E") {
					cout << "Invalid Input, Returning to Main Menu" << endl;
					Sleep(2000);
				}
				system("cls");
			}

			else if (option2 == 6) {

				Question6();
				//Exit Option
				cout << "Press E to terminate the program and M to return to the main menu." << endl;

				cin >> option3;

				//Promt to exit or return to main menu
				if (option3 == "E") {

					loop2 += 1;

				}
				else if (option3 != "M" && option3 != "E") {
					cout << "Invalid Input, Returning to Main Menu" << endl;
					Sleep(2000);
				}
				system("cls");
			}
			else if (option2 == 8) {
				Question8();
				//Exit 
				cout << "Press E to terminate the program and M to return to the main menu." << endl;

				cin >> option3;

				//Prompt to exit or return to MM

				if (option3 == "E") {

					loop2 += 1;

				}
				else if (option3 != "M" && option3 != "E") {
					cout << "Invalid Input, Returning to Main Menu" << endl;
					Sleep(2000);
				}
				system("cls");
			}

			//Terminates Program
			else if (option2 == 1) {
				return 0;
			}
			else {
				system("cls");
				cout << "INVALID INPUT PLEASE TRY TO READ AND THEN SELECT AN OPTION" << endl;
				Sleep(5000);
				system("cls");
			}
		}


	}
}
double RoundHundreth(double Num)
{
	double r;
	r = floor(Num) + floor((Num - floor(Num)) * 100.0 + 0.5) / 100.0;
	return r;

}

//This function takes a name of a file or a path and outputs that on the screen. THIS DOES NOT REFRESH THE SCREEN! Also this only works when "using namespace std;"

void PrintFile(string a) {
	ifstream f(a);
	cout << f.rdbuf();

}

//Outputs Examples and gives results for question 2

int Question2() {
	//Variables

	string option1;
	string option2;
	int loop = 1;
	int loop2 = 2;

	//Representation of Code:
	PrintFile("Text.txt");
	system("pause");
	system("CLS");
	PrintFile("file.txt");
	system("pause");
	system("CLS");

	//Prompt



	while (loop != 0) {
		cout << "Enter R to run the code and Q to quit: " << endl;
		cin >> option1;
		system("cls");
		if (option1 == "R") {
			while (loop2 == 2) {
				//I know this won't be properly formatted but because I took the choice to create a menu-based program I have to put it like this
				const double PI = 3.14159;
				double height;
				double radius;

				cout << "Enter the height of the cylinder: " << endl;
				cin >> height;
				cout << "Enter the radius of the base of the cylinder: " << endl;
				cin >> radius;
				cout << fixed << showpoint << setprecision(2);
				double Volume = PI * pow(radius, 2.0) * height;
				cout << "Volume of the cylinder = " << Volume << endl;
				double surfacearea = 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);
				cout << "Surface area: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
				system("pause");

				system("cls");
				cout << "Do you want to run the code again? (Y or N)" << endl;
				cin >> option2;
				if (option2 == "Y") {
					cout << "Please wait..." << endl;
					Sleep(4000);
					system("cls");
				}
				else if (option2 == "N") {
					loop2 += 1;
					system("cls");
				}
				else {
					cout << "Invalid Input Continuing... " << endl;
					Sleep(2000);
					system("cls");
					loop2 += 1;
				}


			}
			loop = loop--;
			return 0;
		}
		else if (option1 == "Q") {
			system("cls");
			loop = loop--;
			return 0;
		}
		else {
			cout << "Invalid Input Please Try Again in 5 Seconds" << endl;
			Sleep(5000);
			system("cls");
		}
		return 0;
	}
	return 0;
}

//Prints code and gives a solution, and then an option to fix it

int Question4() {

	//Variables

	int loop3 = 1;
	string option4;

	//File Representation
	PrintFile("Incorrect.txt");
	cout << "" << endl;
	system("pause");
	system("cls");
	PrintFile("Correct.txt");
	cout << "" << endl;
	system("pause");
	system("cls");

	while (loop3 != 0) {
		//Prompt and loop
		cout << "Enter R to run the code and Q to quit: " << endl;
		cin >> option4;
		if (option4 == "R") {
			system("cls");
			//CODE FROM BOOK THAT WAS FIXED BY ME:
			double cost;
			double area;
			double bagSize;

			cout << fixed << showpoint << setprecision(2);
			cout << "Enter the amount of fertilizer, in pounds, " << "in one bag: ";
			cin >> bagSize;

			cout << endl;
			cout << "Enter the cost of the " << bagSize << " pound fertilizer bag: ";
			cin >> cost;

			cout << endl;


			cout << "Enter the area, in square feet, that can be " << "fertilized by one bag: ";
			cin >> area;
			cout << endl;
			cout << "The cost of the fertilizer per pound is: $" << cost / bagSize << endl;
			cout << "The cost of fertilizing per square foot is: $" << cost / area << endl;
			cout << endl;
			system("pause");
			system("cls");
			return 0;
		}
		//Conditional pathway
		else if (option4 == "Q") {
			system("cls");
			return 0;
		}
		//conditional pathway
		else {
			cout << "Invalid Input Please Try Again in 5 Seconds" << endl;
			Sleep(5000);
			system("cls");
		}
	}
	return 0;
}

//Finds the volume of an object based off mann in grams and density in grams/centimeter^3

int Question6(){
	//Clears Screen 
	system("cls");
	//Variables
	double volume = 0;
	double mass = 0;
	double density = 0;
	int counter = 1;
	string choice;

	while (counter == 1) {
		//Keeping to 2 decimal places
		cout << fixed << showpoint << setprecision(2);

		//Prompt
		cout << "Please enter a mass in grams:  " << endl;
		cin >> mass;
		cout << endl;
		cout << "Please enter a density in grams per centimeter cubed:  " << endl;
		cin >> density;
		cout << endl;

		//Calculations
		volume = mass / density;

		//Output
		cout << "The volume derived from " << mass << " grams of mass and " << density
			<< " grams per cubic centimeter of density gives you a volume of: " << volume << " Cubic centimeters" << endl;
		system("pause");
		system("cls");

		//offers a continuation or exit
		cout << "To go again press G to return to menu press M:  " << endl;
		cin >> choice;
		if (choice == "G") {
			system("cls");
		}
		else if (choice == "M")
		{
			counter = 0;
			system("cls");
		}
		else {
			cout << "Invalid Input returning to menu" << endl;
			counter = 0;
			Sleep(3000);
			system("cls");
		}
	}
	return 0;
}

int Question8() {
	//clears screen
	system("cls");
	//Variables
	string choice;
	double salaries;
	int counter = 1;
	double MerchCost;
	double rent;
	double utility;
	double MarkupPercentage;
	double totalexpenses;
	double TenPerMerch;
	double difference;
	double TwentyFive;
	double MarkupPercentage2;
	double difference2;

	while (counter == 1) {
		//Prompt
		cout << "Enter total cost of Merchandise:  " << endl;
		cin >> MerchCost;
		system("cls");

		cout << "Enter total salaries including your own:  " << endl;
		cin >> salaries;
		system("cls");

		cout << "Provide a rough estimate of your utility costs:  " << endl;
		cin >> utility;
		system("cls");

		cout << "Enter your yearly rent" << endl;
		cin >> rent;
		system("cls");

		//Calculations
		totalexpenses = MerchCost + salaries + utility + rent;
		TenPerMerch = (MerchCost * 0.1);
		TwentyFive = (MerchCost * 0.25);
		difference = (totalexpenses + TenPerMerch) / MerchCost;
		MarkupPercentage = (((MerchCost * difference)/ MerchCost) * pow(10, 2)) - 100;
		difference2 = (totalexpenses + TwentyFive) / MerchCost;
		MarkupPercentage2 = (((MerchCost * difference2) / MerchCost) * pow(10, 2)) - 100;


		//Output
		// 
		//10% not considering 15% sale
		cout << "Under the circumstances in which you are planning to have a 10% profit with NO SALE" << endl;
		cout << endl;
		cout << "Total expected revenue with 10% profit:" << endl;
		cout << "$" << MerchCost * difference << endl;
		cout << endl;
		cout << "Necessary markup to achieve expected revenue: " << endl;
		cout << "An approximate " << RoundHundreth(MarkupPercentage) << "% mark up of $" << MerchCost << " makes $" << MerchCost * difference << endl;
		//RESET
		system("pause");
		system("cls");

		// 10% considering the 15% sale
		cout << "Under the circumstances in which you are planning to have a 15% sale the true profit margin to make a '10%' profit is actually 25%." << endl;
		cout << "Therefore: " << endl;
		cout << "" << endl;

		cout << "Total expected revenue with 10% profit on a 15% sale: " << endl;
		cout << "$" << MerchCost * difference2 << endl;
		cout << "" << endl;
		cout << "Necessary markup to acieve expected revenue:  " << endl;
		cout << "An approximate " << RoundHundreth(MarkupPercentage2) << "% mark up of $" << MerchCost << " makes $" << MerchCost * difference2 << endl;
		cout << "" << endl;

		//resets program
		system("pause");
		system("cls");
		
		//Offers continuation or exit

		cout << "To go again press G to return to menu press M:  " << endl;
		cin >> choice;
		if (choice == "G") {
			system("cls");
		}
		else if (choice == "M")
		{
			counter = 0;
			system("cls");
		}
		else {
			cout << "Invalid Input returning to menu" << endl;
			counter = 0;
			Sleep(3000);
			system("cls");
		}
	}
	return 0;
}