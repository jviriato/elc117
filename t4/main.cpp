#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "svg.h"
#include "circle.h"
#include "point.h"

int main()
{
    std::srand(std::time(0));
    /*Testando o point, primeira parte do trabalho:*/
    Point p(0,0);
    Point* p1[5];

    for(int i = 0; i < 5; i++)
       p1[i] = new Point(std::rand()%10, std::rand()%10);

    for(int i = 0; i < 5; i++)
         std::cout<< p.distanceTo(p1[i]) << std::endl;

   for(int i = 0; i < 5; i++)
       delete p1[i];

    /*Parte final do trabalho, aqui a coisa fica legal...*/
    SVG svg;
    std::ofstream file;
    file.open("meusvg.svg");
    svg.head(file);
    Circle* c[10];
    for(int i = 0; i < 10; i++){
      c[i] = new Circle(rand() % 800, rand() % 600, rand() % 200);
      svg.drawCircle(file, c[i], rand() % 255, rand() % 255, rand() % 255);
      if(i>0){
        Point* p1 = c[i-1]->getPoint();
        Point* p2 = c[i]->getPoint();
        svg.drawLine(file, p1, p2, rand() % 255, rand() % 255, rand() % 255);
      }
    }
    svg.tail(file);

    for(int i = 0; i < 10; i++)
      delete c[i];

    file.close();
}
