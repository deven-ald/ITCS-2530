#include <iostream>
#include <math.h>
#include "boxType.h"

using namespace std;
void boxType::setDimension(double a, double b, double c)
{
	rectangleType::setDimension(a, b);
	height = c;
}
double boxType::getHeight() const
{
	return height;
}
double boxType::area() const
{
	return rectangleType::area();
}
double boxType::volume() const
{
	return rectangleType::area() * height;
}
void boxType::print() const
{
	rectangleType::print();
	cout << "Height: " << height << endl;
}
boxType::boxType()
{
	rectangleType::setDimension(0, 0);
	height = 0;
}
boxType::boxType(double a, double b, double c)
{
	rectangleType::setDimension(a, b);
	height = c;
}
