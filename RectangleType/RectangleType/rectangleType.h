#include <iostream>
#include <math.h>



class rectangleType
{
private:
	double length, width;
public:
	void setDimension(double, double);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
	rectangleType();
	rectangleType(double, double);
};

