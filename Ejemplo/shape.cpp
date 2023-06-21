#include "shape.h"

Shape::Shape() {
    x = 0;
    y = 0;
}

Shape::Shape(int _x, int _y) {
    x = _x;
    y = _y;
}

int Shape::getX() {
    return x;
}

int Shape::getY() {
    return y;
}

string Shape::draw() {
    return "soy una figura";
}
