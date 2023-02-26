#include <iostream>
#include <fstream>
#include <math.h>
#include "Header.h"
#include <string>
#include <ctype.h>
#include <Windows.h>
#include <stdio.h>
void ques4();
void ques6();
void ques8();

//All of these functions are meant for question 7 and have their own descriptions
double a(double);
double c(double);
double d(double);
double e(double);
double f(double);
double postop(double, bool &currentprime);
void substr(std::string);
Devendra s;
int main() {
	bool condiiton = true;
	int option = 9;
	while (condiiton) {
		system("cls");
		s.PrintFile("text.txt");
		std::cin >> option;
		if (option == 4) {
			ques4();
		}
		else if (option == 6) {
			ques6();
		}
		else if (option == 8) {
			ques8();
		}
		else if (option == 0) {
			break;
		}
	}
	return 0;
}
void ques4() {
	bool condition = true;
	while (condition) {
		system("cls");
		std::string input;
		
		s.print("Please enter a word or string");
		std::cin.ignore();
		getline(std::cin, input);

		substr(input);

		s.loopend(condition);
	}
}
void substr(std::string input) {
	for (int i = 0; i < input.length(); i++) {
		if (s.charVowel(input[i])) {
			input.erase(i, 1);
		}
	}
	std::cout << "New string: " << input;
} 
void ques6() {
	bool condition = true;
	bool condition2 = true;
	while (condition) {
		//Gets a two digit number
		bool currentprime = false;
		double number = rand() % 90 + 10;
		char option = ' ';

		while (condition2) {
			system("cls");
			//Prints Menu
			s.PrintFile("Text1.txt");
			//Gives Extra Menu Info
			std::cout << number << std::endl << "Your Input: ";
			std::cin >> option;

			//First Option Selection
			if (option == 'a') {
				number = a(number);
				number = postop(number, currentprime);
				std::cout << "Your Number doubled is equal to : " << number << std::endl;
				if (currentprime) {
					s.print("New number is prime!");
				}
				system("pause");

			}
			else if (option == 'b') {
				number = s.reversedigit(static_cast<int>(number));
				number = postop(number, currentprime);
				std::cout << "Your Number Reversed Is Equal To: " << number << std::endl;
				if (currentprime) {
					s.print("New number is prime!");
				}

				system("pause");
			}
			else if (option == 'c') {
				number = c(number);


				number = postop(number, currentprime);
				std::cout << "New Number after raising it to a number between 2-4: " << number << std::endl;
				if (currentprime) {
					s.print("New number is prime!");
				}

				system("pause");
			}
			else if (option == 'd') {
				system("cls");
				number = d(number);

				std::cout << "New Number: " << number << std::endl;
				system("pause");
				number = postop(number, currentprime);
				s.print("If your number is prime there will be a one below this message: ");
				if (currentprime) {
					s.print("1");
				}
				system("pause");


			}
			else if (option == 'e') {
				if (number < 100) {
					system("cls");

					number = e(number);
					std::cout << "Your Number: " << number << std::endl;
					system("pause");

					number = postop(number, currentprime);
					s.print("If your number is prime there will be a one below this message: ");
					if (currentprime) {
						s.print("1");
					}
					system("pause");

				}

				else {
					std::cout << "Invalid Option, Going Back" << std::endl;
					Sleep(2000);
				}
			}
			else if (option == 'f') {
				if (number > 100 && f(number) != 0) {
					system("cls");
					number = f(number);
					number = postop(number, currentprime);
					std::cout << "Your New Number: " << number << std::endl;
					if (currentprime) {
						s.print("New number is prime!");
					}

					system("pause");
					
				}
				else {
					s.print("Invalid Input");
					Sleep(3000);
				}
			}
			else if (option == 'g') {
				break;
			}



		}
		if (option == 'g') {
			break;
		}
		s.loopend(condition);
	}
}

double postop(double num, bool &currentprime) {

	if (num < 10.0) {
		num = num + 10.0;
	}
	currentprime = s.isPrime(static_cast<int>(num));
	return num;

}
double a(double a) {
	a = a * 2;
	return a;
}
double c(double a) {
	int power = rand() % (4 - 2 + 1) + 2;
	a = pow(a, power);
	return a;
}
double d(double a) {
	double number = 0;
	double sum = 0;
	while (a > 0) {
		number =static_cast<int>(a) % 10;
		sum = sum + number;
		a = a / 10;
	}

	return sum;
}

//The following fuction is proposed to solve 34 = pow(3, 4);

double e(double a) {
	int num1 = 0;
	int num2 = 0;
	
	num1 = static_cast<int>(a) % 10;
	a = a / 10;
	num2 = static_cast<int>(a) % 10;
			


	a= pow(num2, num1);
	
	return a;
}
//The following program is essentially the one above it but with 3 numbers instead of 2
double f(double a) {

	int num1;

	num1 = static_cast<int>(a) % 10;
	if (num1 > 4) {
		return 0;
	}
	a = pow(static_cast<int>((a * pow(10, -1))), num1);
	return a;
}
//END QUESTION 6

//START QUESTION 8

void ques8() {
	bool condition = true;
	while (condition) {
		system("cls");
		std::string numbers = "1234567890";
		std::string example = " ";
		s.print("Enter your first name, last name, social security number, userid, and password in this format  ");
		s.print("'FirstnameLastname_000-00-000_Userid_password' NOTE: Spaces are imparative for this to work");
		s.print("(underscore represents a space) : ");
		std::cin.ignore();
		getline(std::cin, example);
		if (example.find(' ') != std::string::npos) {
			int start = example.find_first_of(numbers, 0);
			for (int i = start; i < start + 11; i++) {

				if (isdigit(example[i])) {
					example.replace(i, 1, "x");
				}
			}
			bool condition2 = true;
			int length = example.length();
			for (int i = length - 1; i != 0; i--) {
				if (example[i] != ' ') {
					example.replace(i, 1, "x");
				}
				if (example[i] == ' ') {
					break;
				}
			}


			std::cout << "New Version: " << example << std::endl;
		}
		else {
			s.print("Invalid Input, try again");
		}
		s.loopend(condition);
	}
}