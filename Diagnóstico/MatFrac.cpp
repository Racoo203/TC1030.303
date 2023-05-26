#include "MatFrac.h"
using namespace std;

// Getters and setters
void MatFrac::setFilas(int filas) {
    this->filas = filas;
}

void MatFrac::setCols(int cols) {
    this->cols = cols;
}

int MatFrac::getFilas() {
    return filas;
}

int MatFrac::getCols() {
    return cols;
}

//constructores

MatFrac::MatFrac(int filas, int cols) {
    setFilas(filas);
    setCols(cols);
}

// metodos

// leer csv
void MatFrac::leerCSV() {
    // TODO
}

// crear matriz con datos
void MatFrac::crearMatriz(int a, int b) {
    

    // Aqui ya no supe como crear una matriz tomando a y b como valores variables

    // Fraccion matriz[a][b];
}

// imprimir matriz
void MatFrac::imprimirMatriz() {
    // TODO
}

// sumar matrices
MatFrac MatFrac::sumarMatrices(MatFrac m1, MatFrac m2) {
    // TODO
}

// guardar matriz en csv
void MatFrac::guardarCSV() {
    // TODO
}

