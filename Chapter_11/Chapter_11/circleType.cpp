#include "circleType.h"
#include "deven.h"
void circleType::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
		radius = 0;
}

double circleType::getRadius()
{
	return radius;

}

void circleType::print()
{

	std::cout << "circumference: " << circumference() << std::endl <<
		"area: " << area() << std::endl <<
		"radius: " << radius << std::endl;

}
double circleType::circumference()
{
	return 2 * 3.14159265 * radius;
}

double circleType::area()
{
	return 3.14159265 * radius * radius;
}

circleType::circleType(double r)
{
	setRadius(r);
}