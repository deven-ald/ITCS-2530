#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <Windows.h>
using namespace std;



void PrintFile(string a);
void Question4();
void Question6();
void Question14();
void Question18();
double RoundHundreth(double);
void print(string);



//Function Declaration

//Main
int main() {

	//Main Variables
	int option1;
	int i = 1;

	//Loop
	while (i == 1) {

		//Printing Main Menu
		system("CLS");
		PrintFile("Main Menu.txt");
		print("");
		cin >> option1;


		if (option1 == 4) {
			system("CLS");
			Question4();
		}
		else if (option1 == 6) {
			system("CLS");
			Question6();
		}
		else if (option1 == 14) {
			system("CLS");
			Question14();
		}
		else if (option1 == 18) {
			system("CLS");
			Question18();
		}
		else if (option1 == 1) {
			i++;
		}
		else {

			//error handling

			system("cls");
			cout << "Invalid input please try again" << endl;
			system("pause");
			system("cls");
		}

	}


	return 0;
}
//Question 4
void Question4() {

	int option;
	int option2;
	int i = 1;
	print("This is the incorrect code supplied from the book: ");
	PrintFile("Question4Inc.txt");
	system("pause");
	system("cls");
	print("This is the corrected code: ");
	PrintFile("Question4Cor.txt");
	system("pause");
	system("CLS");

	//question
	print("Would you like to run the code? 1 for yes 2 for no: ");
	cin >> option;
	while (i == 1) {
		if (option == 1) {
			
			system("cls");
			string shape;
			double height;
			double width;
			double length;
			double radius;
			const double PI = 3.1416;

			cout << "Enter the shape type: (rectangle, circle, cylinder) ";
			cin >> shape;
			cout << endl;

			if (shape == "rectangle")
			{
				cout << "Enter the length of the rectangle: ";
				cin >> length;
				cout << endl;
				cout << "Enter the width of the rectangle: ";
				cin >> width;
				cout << endl;
				cout << "Area of the rectangle: " << length * width << endl;
				cout << "Perimeter of the rectangle: " << 2 * (length + width) << endl;


			}
			else if (shape == "circle")
			{

				cout << "Enter the radius of the circle: ";
				cin >> radius;
				cout << endl;
				cout << "Area of the circle: " << PI * pow(radius, 2.0) << endl;
				cout << "Circumference of the circle: " << 2 * PI * radius << endl;



			}

			else if (shape == "cylinder")
			{
				cout << "Enter the height of the cylinder: ";
				cin >> height;
				cout << endl;

				cout << "Enter the radius of the base of the cylinder: ";
				cin >> radius;
				cout << endl;

				cout << "Volume of the cylinder: " << PI * pow(radius, 2.0) * height << endl;
				cout << "Surface area of the cylinder: " << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
			}
			else {
				cout << "The program does not handle " << shape << endl;
				cout << fixed << showpoint << setprecision(2);
				
			}
			system("pause");
		}

		system("CLS");
		print("Would you like to run the code again or return to menu? 1 to run code again or 2 for main menu");
		cin >> option2;
		if (option2 == 2) {
			i++;
		}
	}
}
//Question 6
void Question6() {
	//clears screen 
	system("cls");
	//variables
	int cookies;
	int boxes;
	int containers;
	int numboxes;
	int numcontainers;
	int i = 1;
	int option;


	//Start Loop
	while (i == 1) {
		//Prompt
		system("CLS");
		print("Enter the number of cookies(has to be less than 1 billion): ");
		cin >> cookies;
		print("");
		print("Enter the number of cookies in a box:  ");
		cin >> boxes;
		print("");
		print("Enter the number of boxes per container:  ");
		cin >> containers;
		print("");

		//Calculations
		numboxes = cookies / boxes;
		

		//conditional 
		if (cookies % boxes != 0) {
			numboxes -= 1;

			//output in this condition
			cout << "Number of boxes needed to hold " << cookies << " cookies: " << numboxes << endl;
			cout << "Amount of cookies left over: " << cookies % boxes << endl;
		}
		else if (cookies % boxes == 0) {
			cout << "Number of boxes needed to hold " << cookies << " cookies: " << numboxes << endl;
		}
		numcontainers = numboxes / containers;
		if (numboxes % containers != 0) {
			numcontainers--;
			cout << "Number of containers needed to hold " << boxes << " boxes: " << numcontainers << endl;
			cout << "Boxes left over: " << numboxes % containers << endl;

		}
		else if (numboxes % containers == 0) {
			cout << "Number of containers needed to hold " << boxes << " boxes: " << numcontainers << endl;
		}

		system("pause");
		print("Would you like to go again? [1 for yes 2 for no]");
		cin >> option;
		if (option != 1) {
			i++;
		}
		
	}

}
//Question 14
void Question14() {
	int i = 1;
	int option;
	double hours;
	double fee;
	while (i == 1) {
		system("cls");
		print("Enter the number of hours parked: ");
		cin >> hours;

		if (hours >= 0 && hours <= 3) {
			fee = 5;
		}
		else if (hours > 3 && hours <= 9) {
			fee = 6 * static_cast<int>(hours + 1);

		}
		else if (hours > 9 && hours <= 24) {
			fee = 60;
		}
		else if (hours > 24) {
			print("Your total is undefined");
			system("pause");
		}
		cout << "Fee:  " << fee << endl;
		system("pause");
		system("cls");
		print("Would you like to go again? (1 for yes 2 for no)");
		cin >> option;
		if (option != 1) {
			i = 2;
		}
	}
}
//Question 18
void Question18() {
	int i = 1;
	int option;
	double bodyweight, wrist, waist, hip, forearm, a1, a2;
	string choice;
	double finalbodyfat, finalbodyfatpercentage;
	while (i == 1) {
		system("CLS");
		print("Body Fat Calculator:");
		print("If you're a man enter 'm' if you're a woman enter 'w'");
		cin >> choice;
		if (choice == "w") {
			//LONGGG prompt
			double a3, a4, a5;
			print("Enter your bodyweight:  ");
			cin >> bodyweight;
			print("");
			print("Enter your wrist circumference:  ");
			cin >> wrist;
			print("");
			print("Enter your waist size:  ");
			cin >> waist;
			print("");
			print("Enter your hip measurement:  ");
			cin >> hip;
			print("");
			print("Enter forearm measurement:  ");
			cin >> forearm;
			system("cls");

			//Calculation
			a1 = (bodyweight * 0.732) + 8.987;
			a2 = wrist / 3.140;
			a3 = waist * 0.157;
			a4 = hip * 0.249;
			a5 = forearm * 0.434;
			double B = a1 + a2 - a3 - a4 + a5;
			double bodyfat = bodyweight - B;
			double bodyfatperc = bodyfat * 100 / bodyweight;
			system("pause");
			system("CLS");


			cout << "Body Fat: " << RoundHundreth(bodyfat) << endl;
			cout << "Body Fat Percentage:  " << RoundHundreth(bodyfatperc) << endl;
			system("pause");
		}
		else if (choice == "m") {
			print("Enter your bodyweight:  ");
			cin >> bodyweight;
			print("");
			//It says wrist but i looked it up and it's a typo
			print("Enter your waist circumference:  ");
			cin >> waist;
			system("cls");
			
			//calculations
			a1 = (bodyweight * 1.082) + 94.42;
			a2 = waist * 4.15;
			double B = a1 - a2;
			double bodyfat = bodyweight - B;
			double bodyfatperc = bodyfat * 100 / bodyweight;

			cout << "Body Fat: " << RoundHundreth(bodyfat) << endl;
			cout << "Body Fat Percentage:  " << RoundHundreth(bodyfatperc) << endl;
			}
		print("Would you like to go again? (1 for yes 2 for no)");
		cin >> option;
		if (option != 1) {
			i = 2;
		}

	}


}
//MISC FUCTIONS
//Prints a text file from a name has to be in source folder if you don't want to supply a path
void PrintFile(string a) {
	ifstream f(a);
	cout << f.rdbuf();

}

//Rounds to Nearest Hundreth
double RoundHundreth(double Num)
{
	double r;
	r = floor(Num) + floor((Num - floor(Num)) * 100.0 + 0.5) / 100.0;
	return r;

}

void print(string a) {
	cout << a << endl;
}