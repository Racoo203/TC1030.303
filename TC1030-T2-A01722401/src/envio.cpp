#include "envio.h"

Envio::Envio() {
    setCostoEstandar(0);
    setRemitente(Persona());
    setDestinatario(Persona());
}

Envio::Envio(Persona _remitente, Persona _destinatario, double _costoEstandar) {
    setRemitente(_remitente);
    setDestinatario(_destinatario);
    setCostoEstandar(_costoEstandar);
}

void Envio::setRemitente(Persona _remitente) {
    remitente = _remitente;
}

void Envio::setDestinatario(Persona _destinatario) {
    destinatario = _destinatario;
}

void Envio::setCostoEstandar(double _costoEstandar) {
    costoEstandar = _costoEstandar;
}

double Envio::getCostoEstandar() {
    return costoEstandar;
}

Persona Envio::getRemitente() {
    return remitente;
}

Persona Envio::getDestinatario() {
    return destinatario;
}

double Envio::calculaCosto() {
    return getCostoEstandar();
}
