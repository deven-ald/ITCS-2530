#include <string>
#include <iostream>
class Employee
{
public:
	Employee();
	Employee(std::string, int, double);
	Employee(int, double);
	Employee(std::string);
	void setData(std::string, int, double);
	void print() const;
	void updatePay(double x);
	int getNumOfServiceYears() const;
	double getPay() const;

private:
	std::string name;
	int numOfServiceYears;
	double pay;
};
	


