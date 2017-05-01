#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "circle.h"
#include "point.h"

class SVG {
public:
  void head(std::ostream& file);
  void tail(std::ostream& file);
  void drawCircle(std::ostream& file, Circle* c, double r, double g, double b);
  void drawLine(std::ostream& file, Point* p1, Point* p2, double r, double g, double b);
};
