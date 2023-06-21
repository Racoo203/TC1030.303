#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;


class Shape {
    private:
        int x;
        int y;
    public:
        Shape();
        Shape(int _x, int _y);
        int getX();
        int getY();
        
        virtual string draw();

};

#endif