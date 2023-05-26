#include <iostream>
#include <string>
using namespace std;

class Fraccion {
    private:
        int numerador;
        int denominador;
        string fraccion;
        
    public:
        Fraccion(int= 0, int= 1); // Constructor inicial
        
        void setNumerador(int num);
        void setDenominador(int den);
        void setFraccion(string frac);
        
        int getNumerador();
        int getDenominador();
        string getFraccion();
        
        Fraccion sumarFracciones(Fraccion f1, Fraccion f2);
        Fraccion multFracciones(Fraccion f1, Fraccion f2);
        
        void imprimirFraccion();
        Fraccion simplificarFraccion(Fraccion f);
        
};