#include "fraccion.h"

#include <iostream>
using namespace std;

Fraccion::Fraccion() {
    setNumerador(0);
    setDenominador(1);
}

Fraccion::Fraccion(int _numerador, int _denominador) {
    setNumerador(_numerador);
    setDenominador(_denominador);
}

Fraccion Fraccion::operator+(Fraccion _fraccion) {
    Fraccion resultado;
    resultado.setNumerador(numerador * _fraccion.denominador + _fraccion.numerador * denominador);
    resultado.setDenominador(denominador * _fraccion.denominador);
    resultado.simplificar();
    return resultado;
}

Fraccion Fraccion::operator-(Fraccion _fraccion) {
    Fraccion resultado;
    resultado.setNumerador(numerador * _fraccion.denominador - _fraccion.numerador * denominador);
    resultado.setDenominador(denominador * _fraccion.denominador);
    resultado.simplificar();
    return resultado;
}

Fraccion Fraccion::operator*(Fraccion _fraccion) {
    Fraccion resultado;
    resultado.setNumerador(numerador * _fraccion.numerador);
    resultado.setDenominador(denominador * _fraccion.denominador);
    resultado.simplificar();
    return resultado;
}

Fraccion Fraccion::operator/(Fraccion _fraccion) {
    Fraccion resultado;
    resultado.setNumerador(numerador * _fraccion.denominador);
    resultado.setDenominador(denominador * _fraccion.numerador);
    resultado.simplificar();
    return resultado;
}

bool Fraccion::operator==(Fraccion _fraccion) {
    return (numerador == _fraccion.numerador && denominador == _fraccion.denominador);
}

bool Fraccion::operator>(Fraccion _fraccion) {
    return (numerador * _fraccion.denominador > _fraccion.numerador * denominador);
}

bool Fraccion::operator<(Fraccion _fraccion) {
    return (numerador * _fraccion.denominador < _fraccion.numerador * denominador);
}


void Fraccion::setNumerador(int _numerador) {
    // validate if numerador is greater than 0
    if (_numerador >= 0) {
        numerador = _numerador;
    } else {
        numerador = 0;
    }
}

void Fraccion::setDenominador(int _denominador) {
    // validate if numerador is greater than 0
    if (_denominador >= 0) {
        denominador = _denominador;
    } else {
        denominador = 0;
    }
}

int Fraccion::getNumerador() {
    return numerador;
}

int Fraccion::getDenominador() {
    return denominador;
}

void Fraccion::simplificar() {
    int mcd = 1;
    int numSimpl;
    int denSimpl;
    
    for (int i = 1; i <= getNumerador() && i <= getDenominador(); i++) {
        if (getNumerador() % i == 0 && getDenominador() % i == 0) {
            mcd = i;
            numSimpl = getNumerador() / mcd;
            denSimpl = getDenominador() / mcd;
        }
    }
    
    setNumerador(numSimpl);
    setDenominador(denSimpl);
}

void Fraccion::imprimir(int _spaces) {    
    cout << getNumerador() << "/" << getDenominador() << endl;
}

void Fraccion::fimprimir() {
    cout << (float) getNumerador() / (float) getDenominador() << endl;
}