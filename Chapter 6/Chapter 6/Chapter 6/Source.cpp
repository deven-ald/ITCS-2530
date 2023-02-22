#include <iostream>
#include <Windows.h>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include "DevenRanjan.cpp"
#include <vector>
#include <string>
#include <set>
#include <algorithm>

/*
AUTHOR: Devendra Ranjan
2023

DISCLOSURE: 
So, I created this program thinking about versalitity. I want to get used to writing std:: because it's just
more applicable. I hope that is okay. Additionally, I know it's kind of counterintuitive to say that but 
use the "Windows.h" file.
*/
typedef double de;
bool isPalindrome(std::string str);
void question1();
bool isVowel(std::string v);
void question2();
void question3();
void PI();
int isVowelCounter(std::string c);
bool ex11(char);
bool ex14(de, de, de);
void ques7();
int reversedigit(int);
void question9();
//for the following reference devenranjan.cpp
Devendra s;


int main() {
	bool condition = true;
	int x;
	while (condition) {
		system("cls");
		s.PrintFile("Text.txt");
		std::cin >> x;

		if (x == 1) {
			question1();
		}
		else if (x == 2) {
			question2();
		}
		else if (x == 3) {
			question3();
		}
		else if (x == 4) {
			PI();
		}
		else if (x == 5) {
			bool con = true;
			bool con2 = true;
			//TEST FUCNTION for Number 5
			//I wasn't supposed to do this problem, but I started and I'm in too deep now I'm writing the rest of it
			while (con) {
				system("cls");
				std::cout << "Enter 4 char (separated by spaces) values to be tested the program will print true if there is a whitespace and false if there isn't" << std::endl;
				char j[6] = {};
				std::cin >> j[0] >> j[1] >> j[2] >> j[3];
				j[4] = ' ';
				j[5] = ' ';
				int counting = 0;
				for (int i = 0; i <= 5; i++) {
					if (ex11(j[i])) {
						std::cout << "Input: " << "'" <<  j[i] << "'" << " output: " << " true " << std::endl;
						counting++;

					}
					else {
						std::cout << "Input: " << j[i] << " output: " << " false" << std::endl;
					}
					
				}
				//This other loop counts the number of white spaces and the times that the output is true and checks if they are the same
				//If they are the same the program will say that it is an operational function
				int counting2 = 0;
				for (int i = 0; i <= sizeof(j) / sizeof(j[0]); i++) {
					if (j[i] == ' ') {
						counting2++;
					}
				}
				if (counting == counting2) {
					s.print("this program is working properly");
				}

				s.loopend(con);
			}
			while (con2) {

				system("cls");
				//array for testing
				double arr[10];
				//Times
				for (int i = 0; i <= 8; i++) {
					system("cls");
					std::cout << "You will have to enter " << 9 << " numbers all separated by the enter sign to get an output" << std::endl;
					std::cin >> arr[i];
				}

				for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-1; i = i + 3)
				{
					bool co = ex14(arr[i], arr[i + 1], arr[i + 2]);
					if (co) {
						std::cout << "The product of the floors of " << arr[i] << " and " << arr[i + 1] << std::endl << "Is equal to the floor of " << arr[i + 2] << std::endl;
					}
					else {
						std::cout << "The product of the floors of " << arr[i] << " and " << arr[i + 1] << std::endl << "Is NOT equal to the floor of " << arr[i + 2] << std::endl;
					}
				}
				s.loopend(con2);
			}
		}
		else if (x == 7) {
			ques7();
		}
		else if (x == 9) {
			question9();
		}
		else if (x == 0) {
			return 0;
		}
	}
	return 0;
}

void question3() {
	bool condition = true;

	while (condition) {
		system("cls");
		//initializing Variables
		std::string input;

		//Prompt
		s.print("Please enter a phrase or word and the program will output the NUMBER of vowels in that phrase or word.");
		//Ignores Spaces
		input = s.RemoveSpace(input);
		input = s.Lower(input);

		//output
		std::cout << "Number of vowels: " << isVowelCounter(input) << " Number of characters: " << input.length() << std::endl;
		s.loopend(condition);
	
	}
}



int isVowelCounter(std::string c) {
	//counter

	int i = 0;
	std::string vowel = "aeiou";
	for (char& a : c) {
		if (vowel.find(a) != std::string::npos) {
			i++;
		}
	}

	return i;
}
void question2() {
	bool condition = true;


	while (condition) {
		system("cls");
		s.print("Please enter a character you believe to be a vowel");
		std::string input;
		int counter;
		std::cin >> input;
		if (isVowel(input)) {
			s.print("Is a vowel");
		}
		else {
			s.print("Is not a vowel");
		}
		s.loopend(condition);
	}
	return;
}


bool isVowel(std::string v) {
	std::string vowel = "aeiou";
	bool a = false;
	v = s.Lower(v);
	if (vowel.find(v) != std::string::npos) {
		a = true;
	}
	return a;

}
void question1() {
	bool condition = true;
	std::string fixedstring;

	while (condition) {
		system("cls");
		s.print("Please enter a phrase or sentence you believe to be a Palindrome:  ");
		fixedstring = s.Lower(s.RemoveSpace(fixedstring));
		bool y = isPalindrome(fixedstring);
		if (y) {
			s.print("This is a Palindrome");
		}
		else {
			s.print("This is not a palindrome");

		}

		s.loopend(condition);
	}
}


bool isPalindrome(std::string str) {

	int len = str.length();
	for (int i = 0; i < len / 2; i++) 
		if (str[i] != str[len - 1 - i]) 
			return false;
		
	return true;
	
}

//Pi Function
void PI() {
	bool con = true;
	const de Pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548;
	while (con) {
		de rad, radsq, radcu;
		system("cls");
		//prompt and input and output 
		std::cout << "The square root of PI is represented as: " << sqrt(Pi) << std::endl;
		s.print("Enter the radius of a sphere to find the surface area as well as the volume of said sphere: ");
		std::cin >> rad;
		radsq = pow(rad, 2);
		radcu = pow(rad, 3);
		std::cout << "Surface Area: " << 4.0 * Pi * radsq << std::endl;
		std::cout << "Volume: " << (4.0 / 3.0) * Pi * radcu << std::endl;

		s.loopend(con);
	}
}

bool ex11(char c) {
	bool tf = false;
	if (c == ' ') 
		tf = true;
	
	return tf;
}
bool ex14(de x, de y, de z) {
	bool tf = false;
	de sum = floor(x) * floor(y);
	if (sum == floor(z))
		tf = true;


	return tf;
}
void ques7() {
	bool condition = true;
	while (condition) {
		int twinprimes = 0;
		system("cls");
		//Init variable
		int num1 = 0, num2 = 1;
	    int difference = 0;
		//this solves a problem I encounter Later
		std::vector<int> Vector(difference);

		//Prompt
		std::cout << "Enter two positive integers (Note: Expect higher numbers to take a while)" << std::endl;
		std::cin >> num1 >> num2;
		
		int sum = 0;

		//For sepecific situation but these conditional and loops calculate the criteria
		if (num1 < num2) {
			//The following two lines calculate the difference and set the size of the vector to that difference
			difference = num2 - num1;
			Vector.resize(difference);
		
			//Find's every number BETWEEN the two supplied
			for (int i = num1 + 1; i < num2; i++) {
				//Checks if it's prime and if it is prime, twin, and in between the two numbers
				if (s.isPrime(i + 2) && i + 2 < num2 && s.isPrime(i)) {

					if (s.isPrime(i + 2)) {
						Vector.push_back(i + 2);
						Vector.push_back(i);
					}
				}
				//Calculates sum
				if (s.isPrime(i)) {
					sum = sum + i;
				}

			}

		}
		else if (num1 > num2) {
			difference = num2 - num1;
			Vector.resize(difference);
			for (int i = num2 + 1; i <= num1; i++) {
				if (s.isPrime(i + 2) && i+2 < num1 && s.isPrime(i)) {

					if (s.isPrime(i + 2)) {
						Vector.push_back(i + 2);
						Vector.push_back(i);

					}
				}
				if (s.isPrime(i)) {
					sum = i+sum;
				}
			}
		}
		//Uses algorithm header file to sort the vector
		std::sort(Vector.begin(), Vector.end());

		//Uses Set to identify individual and unique integers inside the set
		std::set<int> Individual(Vector.begin(), Vector.end());

		//Auto is used for variables with compicated types such as something in a set or a vector
		//And it allows me to pick a specific character that is unique and sort them in numeric order
		//From largest to smallest
		for (auto n : Individual) {
			if (num1 > num2) {
				if (n > num2) {
					std::cout << n << " ";
					twinprimes++;
				}
			}
			else if (num2 > num1) {
				if (n > num1) {
					std::cout << n << " ";
					twinprimes++;
				}
			}
		}
		std::cout << std::endl;
		s.print("Above are the twin primes for those two numbers");
		std::cout << "The sum of the prime numbers between the two integers are: " << sum << std::endl;
		std::cout << "Number of twin primes: " << twinprimes << std::endl;
		s.loopend(condition);
	}
}

void question9() {
	bool condition = true;
	while (condition) {
		system("cls");
		int number;
		s.print("Please enter a number to reverse (This would probably work better if it is a single digit...)");
		std::cin >> number;
		std::cout << "Reversed: " << reversedigit(number) << std::endl;
		s.loopend(condition);
	}
}

int reversedigit(int d) {
	int reverse = 0;
	//The fact that this works is so crazy to me to be honest.
	while (d != 0) {
		reverse = reverse * 10 + (d % 10);
		d = d / 10;
	}
	return reverse;
}