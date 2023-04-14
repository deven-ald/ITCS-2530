#include "personType.h"
std::string personType::getFirstName() const
{
	return firstName;
}
std::string personType::getLastName() const
{
	return lastName;
}

void personType::print() const
{
	std::cout << firstName << " " << lastName;
}
void personType::setName(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}
personType::personType(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}