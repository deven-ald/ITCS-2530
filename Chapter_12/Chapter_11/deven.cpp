#include "deven.h"
#include "deven.h"
bool deven::isPrime(int a)
{
	system("cls");
	bool isprime = true;


	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			isprime = false;
			break;
		}
	}
	if (a == 2) {
		isprime = true;
	}
	return isprime;
}

std::string deven::RemoveSpace(std::string input)
{
	std::cin.ignore();
	//Gets the input
	getline(std::cin, input);

	//removes spaces

	input.erase(remove_if(input.begin(), input.end(), ::isspace), input.end());
	return input;
}

std::string deven::Lower(std::string s)
{
	for (char& c : s) {
		c = tolower(c);
	}
	return s;
}

bool deven::loopend(bool& end)
{
	char choice;
	print(" ");
	print("Press y to go again or type anything to exit.");
	std::cin >> choice;
	choice = tolower(choice);
	if (choice == 'y') {
		return end = true;
	}
	else {
		return end = false;
	}
}

void deven::PrintFile(std::string a)
{
	std::ifstream f(a);
	std::cout << f.rdbuf();

}

double deven::RoundHundreth(double Num)
{
	double r;
	r = floor(Num) + floor((Num - floor(Num)) * 100.0 + 0.5) / 100.0;
	return r;

}

void deven::print(std::string a)
{
	std::cout << a << std::endl;
}

int deven::reversedigit(int d)
{
	int reverse = 0;
	//The fact that this works is so crazy to me to be honest.
	while (d != 0) {
		reverse = reverse * 10 + (d % 10);
		d = d / 10;
	}
	return reverse;
}

bool deven::charVowel(char a)
{
	if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		return true;
	else
		return false;
}

int deven::isVowelCounter(std::string c) {
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

bool deven::isVowel(std::string v) {
	std::string vowel = "aeiou";
	bool a = false;
	v = Lower(v);
	if (vowel.find(v) != std::string::npos) {
		a = true;
	}
	return a;

}