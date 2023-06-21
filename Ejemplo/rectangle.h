#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    private:
        int x;
        int y;
        int x1;
        int y1;
    public:
        Rectangle();
        Rectangle(int _x, int _y, int _x1, int _y1);
        string draw();
};

#endif