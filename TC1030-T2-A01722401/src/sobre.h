#ifndef SOBRE_H
#define SOBRE_H

#include "envio.h"

class Sobre: public Envio {

    private:
        int largo;
        int ancho;

        double peso;
        double preciokilo;
        
        double cargoExtra;
    public:
        Sobre();
        Sobre(Envio _envio, int _largo, int _ancho, 
        double _cargoExtra, double _peso, double _preciokilo);

        void setLargo(int _largo);
        void setAncho(int _ancho);
        void setPeso(double _peso);
        void setPreciokilo(double _preciokilo);
        void setCargoExtra(double _cargoExtra);

        int getLargo();
        int getAncho();
        double getPeso();
        double getPreciokilo();
        double getCargoExtra();

        double calculaCosto();

};

#endif