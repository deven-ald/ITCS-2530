#pragma once
#include "deven.h"
class addressType
{
private:
	int zip;
	std::string addy, city, state;
public:
	addressType();
	addressType(int, 
		std::string, 
		std::string, 
		std::string);
	void printInfo();
	void setAddy(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setZip(int);
};

