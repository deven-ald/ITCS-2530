#include "Chapter10.h"
#include <string>
#include <iostream>

Employee::Employee()
{
	name = "";
	numOfServiceYears = 0;
	pay = 0;
}

Employee::Employee(std::string nam, int yrs, double p)
{
	name = nam;
	numOfServiceYears = yrs;
	pay = p;
}

Employee::Employee(int years, double pa)
{
	numOfServiceYears = years;
	pay = pa;
	name = "";
}

Employee::Employee(std::string nm)
{
	name = nm;
	pay = 0;
	numOfServiceYears = 0;
}

void Employee::setData(std::string nm, int yrs, double pay1)
{
	name = nm;
	numOfServiceYears = yrs;
	pay = pay1;
}

void Employee::print() const
{
	std::cout << "Pay: " << pay << std::endl << "Service Years: " << numOfServiceYears << std::endl << "Name: " << name << std::endl;
}

void Employee::updatePay(double x)
{
	pay += x;
}

int Employee::getNumOfServiceYears() const
{
	return numOfServiceYears;
}

double Employee::getPay() const 
{
	return pay;
}