#pragma once
#include "deven.h"
class personType
{
private:
	std::string firstName, lastName;
public:
	void print() const;
	void setName(std::string first, std::string last);
	std::string getFirstName() const;
	std::string getLastName() const;

	personType(std::string first, std::string last);
};

