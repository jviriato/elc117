#pragma once
#include <iostream>
#include <cmath>
#include <cstdlib>

class Point {
private:
   double x;
   double y;
public:
   Point();
   Point(double x, double y);
   void move(double dx, double dy);
   double getX();
   double getY();
   double distanceTo(Point* p);
};
