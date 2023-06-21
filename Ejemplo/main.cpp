#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

using namespace std;

int main() {
    Shape* shapes[10];
    shapes[0] = new Shape(1, 2);
    shapes[1] = new Circle(3, 4, 5);
    shapes[2] = new Rectangle(6, 7, 8, 9);

    for (int i = 0; i < 3; i++) {
        cout << shapes[i]->draw() << endl;
    }
    
    return 0;
}