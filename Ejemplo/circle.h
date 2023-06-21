#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
    private:
        int radius;
    public:
        Circle();
        Circle(int _x, int _y, int _radius);
        string draw();
};

#endif