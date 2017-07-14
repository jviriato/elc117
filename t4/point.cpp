#include "point.h"

   Point::Point() {
      x = y = 0.0;
   }
   Point::Point(double x, double y) {
      this->x = x;
      this->y = y;
   }
   void Point::move(double dx, double dy) {
      x = x + dx;
      y = y + dy;
   }
   double Point::getX(){
     return x;
   }
   double Point::getY(){
     return y;
   }
   double Point::distanceTo(Point* p) {
      std::cout<<"A distancia entre p1("<<this->x<<", "<<this->y<<") e p2("<<p->x<<", "<<p->y<<") eh: ";
      return std::sqrt( ( (p->x - this->x) * (p->x - this->x) ) + ( (p->y - this->y) * (p->y - this->y) ) );
   }

/*int main()
{
   Point p(0,0);
   Point* p1[5];

   for(int i = 0; i < 5; i++)
      p1[i] = new Point(std::rand()%10, std::rand()%10);

   for(int i = 0; i < 5; i++)
      	std::cout<< p.distanceTo(p1[i]) << std::endl;

  for(int i = 0; i < 5; i++)
      delete p1[i];

  return 0;
}*/
