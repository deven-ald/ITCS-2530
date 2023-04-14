#include "addressType.h"

addressType::addressType()
{

}
addressType::addressType(int,
	std::string,
	std::string,
	std::string)
{

}
void addressType::printInfo()
{
	std::cout << addy << " " << city << " " << state << " " << zip << std::endl;
}
void addressType::setAddy(std::string a)
{
	addy = a;
}
void addressType::setCity(std::string a)
{
	city = a;
}
void addressType::setState(std::string a)
{
	state = a;
}
void addressType::setZip(int a)
{
	zip = a;
}