#include "Fraccion.cpp"
#include <iostream>
#include <string>

using namespace std;

// TEST FRACCION CLASS

int main() {
    Fraccion f1(1,2);
    Fraccion f2(3,4);
    
    Fraccion f3 = f3.sumarFracciones(f1,f2);
    Fraccion f4 = f4.multFracciones(f1,f2);
    
    f3.imprimirFraccion();
    f4.imprimirFraccion();

    // test default constructor

    Fraccion f5;
    f5.imprimirFraccion();

    // test simplificarFraccion

    Fraccion f6(2,4);
    f6 = f6.simplificarFraccion(f6);
    f6.imprimirFraccion();

    return 0;
}