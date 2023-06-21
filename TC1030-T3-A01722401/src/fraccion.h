#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
    private:
        int numerador;
        int denominador;
    public:
        Fraccion();
        Fraccion(int _numerador, int _denominador);
        
        Fraccion operator+(Fraccion _fraccion );
        Fraccion operator-(Fraccion _fraccion);
        Fraccion operator*(Fraccion _fraccion );
        Fraccion operator/(Fraccion _fraccion );

        bool operator==(Fraccion _fraccion );
        bool operator>(Fraccion _fraccion );
        bool operator<(Fraccion _fraccion );

        // tiene  que ser tipo friend para que pueda acceder a los atributos privados
        friend istream operator>>(istream &is, Fraccion &fraccion);
        friend ostream operator<<(ostream &os, Fraccion &fraccion);

        void setNumerador(int _numerador);
        void setDenominador(int _denominador);

        int getNumerador();
        int getDenominador();

        void simplificar();
        void imprimir(int _spaces= 0);
        void fimprimir();

};

#endif // FRACCION_H