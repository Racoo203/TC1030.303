#include <iostream>
#include <string>
#include "Fraccion.h"
using namespace std;

// SETTERS 

void Fraccion::setNumerador(int num) {
    // num tiene que ser mayor que 0
    if (num >= 0) {
        numerador = num;
    } else {
        numerador = 0;
        cout << "El numerador no puede ser negativo. Se ha asignado 0." << endl;
    }
}

void Fraccion::setDenominador(int den) {
    // den tiene que ser mayor que 0
    if (den >= 0) {
        denominador = den;
    } else {
        denominador = 1;
        cout << "El denominador no puede ser negativo. Se ha asignado 1." << endl;
    }
}

void Fraccion::setFraccion(string frac) {
    fraccion = frac;
}

// GETTERS

int Fraccion::getNumerador() {
    return numerador;
}

int Fraccion::getDenominador() {
    return denominador;
}

string Fraccion::getFraccion() {
    return fraccion;
}

// CONSTRUCTOR

Fraccion::Fraccion(int num, int den) {
    setNumerador(num);
    setDenominador(den);
    setFraccion(to_string(num) + "/" + to_string(den));
}

// SUMA

Fraccion Fraccion::sumarFracciones(Fraccion f1, Fraccion f2) {
    int a = f1.getNumerador();
    int b = f2.getNumerador();
    int c = f1.getDenominador();
    int d = f2.getDenominador();
    
    int numSuma = a * d;
    int denSuma = b * c;
    
    return simplificarFraccion(Fraccion(numSuma,denSuma));
}

// MULTIPLICACION

Fraccion Fraccion::multFracciones(Fraccion f1, Fraccion f2) {
    int a = f1.getNumerador();
    int b = f2.getNumerador();
    int c = f1.getDenominador();
    int d = f2.getDenominador();
    
    int numMult = a * b;
    int denMult = c * d;
    
    return simplificarFraccion(Fraccion(numMult,denMult));
}

// PRINT FRACCION

void Fraccion::imprimirFraccion() {
    cout << getFraccion() << endl;
}

// SIMPLIFICAR FRACCION

Fraccion Fraccion::simplificarFraccion(Fraccion f) {
    int a = f.getNumerador();
    int b = f.getDenominador();
    
    int mcd = 1;
    
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    
    int numSimpl = a / mcd;
    int denSimpl = b / mcd;
    
    return Fraccion(numSimpl,denSimpl);
}
