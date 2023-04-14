#include "cylinderType.h"
#include "deven.h"

cylinderType::cylinderType()
{
	height = 0; 
	radius = 0;
	base.setRadius(radius);

}
cylinderType::cylinderType(double rad, double h)
{
	radius = rad;
	height = h;
	base.setRadius(radius);
}
double cylinderType::volume()
{
	vol = PI * pow(radius, 2) * height;
	return vol;
}
double cylinderType::surfaceArea()
{
	surfarea = (2 * PI * pow(radius, 2)) + (PI * pow(radius, 2) * height);
	return surfarea;
}
void cylinderType::setHeight(double h)
{
	height = h;

}
void cylinderType::setRadius(double r)
{
	radius = r;
	base.setRadius(r);
}
void cylinderType::setCenter(double x, double y)
{
	cenX = x;
	cenY = y;
}