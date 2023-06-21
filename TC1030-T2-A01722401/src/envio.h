#ifndef ENVIO_H
#define ENVIO_H

#include "persona.h"

class Envio {

    private:
        Persona remitente;
        Persona destinatario;

        double costoEstandar;

    public:
        Envio();
        Envio(Persona _remitente, Persona _destinatario, double _costoEstandar);

        void setRemitente(Persona _remitente);
        void setDestinatario(Persona _destinatario);
        void setCostoEstandar(double _costoEstandar);
        double getCostoEstandar();
        Persona getRemitente();
        Persona getDestinatario();

        virtual double calculaCosto();

};

#endif