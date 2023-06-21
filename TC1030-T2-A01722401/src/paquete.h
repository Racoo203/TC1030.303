#ifndef PAQUETE_H
#define PAQUETE_H

#include "envio.h"

class Paquete: public Envio {

    private:
        int largo;
        int ancho;
        int profundidad;

        double peso;
        double preciokilo;

    public:
        Paquete();
        Paquete(
            Envio _envio, 
            int _largo, 
            int _ancho, 
            int _profundidad, 
            double _peso, 
            double _preciokilo);

        void setLargo(int _largo);
        void setAncho(int _ancho);
        void setProfundidad(int _profundidad);
        void setPeso(double _peso);
        void setPreciokilo(double _preciokilo);

        int getLargo();
        int getAncho();
        int getProfundidad();
        double getPeso();
        double getPreciokilo();

        double calculaCosto();

};

#endif