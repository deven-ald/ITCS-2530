#pragma once
#include "rectangleType.h"
#include <iostream>
#include <math.h>
class boxType :
    public rectangleType 
{
private:
    double height;
public:
    void setDimension(double, double, double);
    double getHeight() const;
    double area() const;
    double volume() const;
    void print() const;
    boxType();
    boxType(double, double, double);
};

