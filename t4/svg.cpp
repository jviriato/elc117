#include "svg.h"

void SVG::head(std::ostream& file){
    file << "<svg height=\"600\" width=\"800\" xmlns=\"http://www.w3.org/2000/svg\">" << std::endl;
}

void SVG::tail(std::ostream& file){
    file << "</svg>";
}

void SVG::drawCircle(std::ostream& file, Circle* c, double r, double g, double b){
    Point* p = c->getPoint();
    file << "<circle cx=\"" << p->getX() << "\" cy=\"" << p->getY() << "\" r=\"" << c->getRadius() << "\" stroke=\"black\" stroke-width=\"3\" fill=\"rgb("<<r<<","<<g<<","<<b<<")\" />\n";
}
void SVG::drawLine(std::ostream& file, Point* p1, Point* p2, double r, double g, double b){
    file << "<line x1=\"" << p1->getX() << "\" y1=\"" << p1->getY() << "\" x2=\"" << p2->getX() << "\" y2=\"" << p2->getY() << "\" style=\"stroke:rgb("<<r<<","<<g<<","<<b<<");stroke-width:2\" />\n";
}
