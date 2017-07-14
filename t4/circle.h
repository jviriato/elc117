#pragma once
#include <iostream>
#include "point.h"

const double PI = 3.14159;

class Circle {
private:
	Point* p;
	double r;
public:
	Circle();
	Circle(double x, double y, double r);
	double area();
	void setRadius(double r);
	double getRadius();
	Point* getPoint();
	double distanceTo(Circle* c);
};
