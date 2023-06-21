#include "fraccion.h"

#include <iostream>
using namespace std;

int main() {

    // Test fraccion initialization
    Fraccion f1(1, 2);
    Fraccion f2(1, 3);

    // Test fraccion operations
    Fraccion f3 = f1 + f2;
    Fraccion f4 = f1 - f2;
    Fraccion f5 = f1 * f2;
    Fraccion f6 = f1 / f2;

    // Test fraccion printing
    f3.imprimir();
    f3.fimprimir();
    cout << endl;
    f4.imprimir();
    f4.fimprimir();
    cout << endl;
    f5.imprimir();
    f5.fimprimir();
    cout << endl;
    f6.imprimir();
    f6.fimprimir();
    cout << endl;
    
    // Test fraccion comparison
    cout << (f1 > f2) << endl;
    cout << (f1 < f2) << endl;
    cout << (f1 == f2) << endl;

}