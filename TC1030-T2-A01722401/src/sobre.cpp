#include "sobre.h"

Sobre::Sobre() : Envio() {
    setLargo(0);
    setAncho(0);
    setPeso(0);
    setPreciokilo(0);
    setCargoExtra(0);
}

Sobre::Sobre(Envio _envio, int _largo, int _ancho, 
double _cargoExtra, double _peso, double _preciokilo) : Envio(_envio) {
    setLargo(_largo);
    setAncho(_ancho);
    setPeso(_peso);
    setPreciokilo(_preciokilo);
    setCargoExtra(_cargoExtra);
}

void Sobre::setLargo(int _largo) {
    largo = _largo;
}

void Sobre::setAncho(int _ancho) {
    ancho = _ancho;
}

void Sobre::setPeso(double _peso) {
    if (_peso > 0) {
        peso = _peso;
    } else {
        peso = 0;
        cout << "El peso tiene que ser mayor a 0" << endl;
    }
}

void Sobre::setPreciokilo(double _preciokilo) {
    if (_preciokilo > 0) {
        preciokilo = _preciokilo;
    } else {
        cout << "El precio por kilo tiene que ser mayor a 0" << endl;
    }
}

void Sobre::setCargoExtra(double _cargoExtra) {
    cargoExtra = _cargoExtra;
}

int Sobre::getLargo() {
    return largo;
}

int Sobre::getAncho() {
    return ancho;
}

double Sobre::getPeso() {
    return peso;
}

double Sobre::getPreciokilo() {
    return preciokilo;
}

double Sobre::getCargoExtra() {
    return cargoExtra;
}

double Sobre::calculaCosto() {
    double precio = getPeso() * getPreciokilo();
    // si las dimensiones exceden 25 x 30 cm, se cobra un cargo extra
    if (getAncho() > 25 || getLargo() > 30) {
        precio += getCargoExtra();
    }
    
    return precio + getCostoEstandar();
}

