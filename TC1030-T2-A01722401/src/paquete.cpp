#include "paquete.h"

Paquete::Paquete() : Envio() {
    setLargo(0);
    setAncho(0);
    setProfundidad(0);
    setPeso(0);
    setPreciokilo(0);
}

Paquete::Paquete(
    Envio _envio, int _largo, int _ancho, int _profundidad, 
    double _peso, double _preciokilo) : Envio(_envio) {
    setLargo(_largo);
    setAncho(_ancho);
    setProfundidad(_profundidad);
    setPeso(_peso);
    setPreciokilo(_preciokilo);
}


void Paquete::setLargo(int _largo) {
    largo = _largo;
}

void Paquete::setAncho(int _ancho) {
    ancho = _ancho;
}

void Paquete::setProfundidad(int _profundidad) {
    profundidad = _profundidad;
}

void Paquete::setPeso(double _peso) {
    if (_peso > 0) {
        peso = _peso;
    } else {
        cout << "El peso tiene que ser mayor a 0" << endl;
    }
}

void Paquete::setPreciokilo(double _preciokilo) {
    if (_preciokilo > 0) {
        preciokilo = _preciokilo;
    } else {
        cout << "El precio por kilo tiene que ser mayor a 0" << endl;
    }
}

int Paquete::getLargo() {
    return largo;
}

int Paquete::getAncho() {
    return ancho;
}

int Paquete::getProfundidad() {
    return profundidad;
}

double Paquete::getPeso() {
    return peso;
}

double Paquete::getPreciokilo() {
    return preciokilo;
}

double Paquete::calculaCosto() {
    double precio = getPeso() * getPreciokilo();
    return precio + getCostoEstandar();
}

