#include <iostream>
#include "circle.h"
#include "point.h"

	Circle::Circle() {
    		this->p = new Point(0, 0);
    		this->r = 0.0;
	}

	Circle::Circle(double x, double y, double r){
    		this->p = new Point(x, y);
    		this->r = r;
	}

	double Circle::area() {
		return PI * r * r;
	}
	void Circle::setRadius(double r) {
    		this->r = r;
	}

	double Circle::getRadius(){
		return r;
	}

	Point* Circle::getPoint(){
		return p;
	}

	double Circle::distanceTo(Circle* c) {
    		double dist = this->p->distanceTo(c->p);
    		return dist - (this->r + c->r);
	}

/*int main()
{
  Circle* c1 = new Circle();
  Circle* c2 = new Circle(2, 8, 5.5);
  std::cout << "Distancia entre c1 e c2: " << c1->distanceTo(c2) << std::endl;
  delete c1;
  delete c2;
}*/
