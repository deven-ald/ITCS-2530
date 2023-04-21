#pragma once
#ifndef DEVEN
#define DEVEN
#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <fstream>
#endif
class deven
{
public:
	bool isVowel(std::string v);
	int isVowelCounter(std::string c);
	bool charVowel(char a);
	int reversedigit(int d);
	void print(std::string a);
	double RoundHundreth(double Num);
	void PrintFile(std::string a);
	bool loopend(bool& end);
	std::string Lower(std::string s);
	std::string RemoveSpace(std::string input);
	bool isPrime(int a);
};
