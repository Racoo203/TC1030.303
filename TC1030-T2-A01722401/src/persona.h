#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {

    private:
        string nombre;
        string direccion;
        string ciudad;
        string estado;

        int cp;

    public:
        Persona();
        Persona(string _nombre, string _direccion, string _ciudad, 
            string _estado, int _cp);

        void setNombre(string _nombre);
        void setDireccion(string _direccion);
        void setCiudad(string _ciudad);
        void setEstado(string _estado);
        void setCp(int _cp);

        string getNombre();
        string getDireccion();
        string getCiudad();
        string getEstado();
        int getCp();

};

#endif