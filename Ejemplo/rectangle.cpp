#include "rectangle.h"

Rectangle::Rectangle() {
    x = 0;
    y = 0;
    x1 = 0;
    y1 = 0;
}

Rectangle::Rectangle(int _x, int _y, int _x1, int _y1) : Shape(_x, _y) {
    x1 = _x1;
    y1 = _y1;
}

string Rectangle::draw() {
    return "soy un rectangulo";
}
