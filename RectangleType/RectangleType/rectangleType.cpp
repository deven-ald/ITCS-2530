#include <iostream>
#include <math.h>
#include "rectangleType.h"
using namespace std;
void rectangleType::setDimension(double a, double b)
{
	length = a;
	width = b;
}


double rectangleType::getLength() const 
{
	return length;
}


double rectangleType::getWidth() const 
{
	return width;
}


double rectangleType::area() const 
{
	return length * width;
}


double rectangleType::perimeter() const 
{
	return (2 * length) + (2 * width);
}


void rectangleType::print() const 
{
	cout << "Length: " << length << endl << "Width: " << width << endl;
}


rectangleType::rectangleType()
{
	length = 0;
	width = 0;
}


rectangleType::rectangleType(double a, double b)
{
	length = a;
	width = b;
}

