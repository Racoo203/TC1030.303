// create a class that makes a matrix of fractions
#include "Fraccion.h"

class MatFrac {
    private:
        int filas;
        int cols;
    public:
        // Getters and setters
        void setFilas(int filas);
        void setCols(int cols);
        int getFilas();
        int getCols();

        // constructores
        MatFrac(int= 2, int= 2); // default constructor
        MatFrac(int filas, int cols); // initial constructor

        // metodos
        // leer csv
        void leerCSV();
        // crear matriz con datos
        void crearMatriz(int a, int b);
        // imprimir matriz
        void imprimirMatriz();
        // sumar matrices
        MatFrac sumarMatrices(MatFrac m1, MatFrac m2);
        // guardar matriz en csv
        void guardarCSV();
        
};