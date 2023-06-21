#include "circle.h"

Circle::Circle() : Shape() {
    radius = 0;
}

Circle::Circle(int _x, int _y, int _radius) : Shape(_x, _y) {
    radius = _radius;
}

string Circle::draw() {
    return "soy un circulo";
}