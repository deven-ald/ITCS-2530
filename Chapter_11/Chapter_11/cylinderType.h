#pragma once
#include "circleType.h"
class cylinderType :
    public circleType
{
private:
    circleType base;
    const double PI = 3.1415926;
    double vol, surfarea, height, radius, cenX, cenY;
public:
    cylinderType();
    cylinderType(double rad, double h);
    double volume();
    double surfaceArea();
    void setHeight(double h);
    void setRadius(double r);
    void setCenter(double x, double y);
};

