#pragma once
//AUTHOR: MALIK
class circleType
{
private:
	double radius;
public:
	void setRadius(double r);
	double getRadius();
	double area();
	double circumference();
	circleType(double r = 0);
	void print();
};

