#include "persona.h"

Persona::Persona() {
    setNombre("");
    setDireccion("");
    setCiudad("");
    setEstado("");
    setCp(0);
}

Persona::Persona(string _nombre, string _direccion, string _ciudad, 
    string _estado, int _cp) {
    
    setNombre(_nombre);
    setDireccion(_direccion);
    setCiudad(_ciudad);
    setEstado(_estado);
    setCp(_cp);
}

void Persona::setNombre(string _nombre) {
    nombre = _nombre;
}

void Persona::setDireccion(string _direccion) {
    direccion = _direccion;
}

void Persona::setCiudad(string _ciudad) {
    ciudad = _ciudad;
}

void Persona::setEstado(string _estado) {
    estado = _estado;
}

void Persona::setCp(int _cp) {
    cp = _cp;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getDireccion() {
    return direccion;
}

string Persona::getCiudad() {
    return ciudad;
}

string Persona::getEstado() {
    return estado;
}

int Persona::getCp() {
    return cp;
}