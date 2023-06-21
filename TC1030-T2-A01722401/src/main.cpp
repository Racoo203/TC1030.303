#include <iostream>
#include "paquete.h"
#include "sobre.h"

int main() {
    // Mandarle algo a Luismi
    Persona persona1(
        "Luis Miguel", 
        "1331 Brickell Bay Dr APT 1402", 
        "Miami", 
        "Florida", 
        33131);

    Persona persona2(
        "Alana Carola Padilla Rodriguez",
        "Bosques del Mirador 2240 Dpto 3",
        "Guadalupe",
        "Nuevo Leon",
        67174
    );

    Persona persona3(
        "Raul Correa Ocañas",
        "Colinas del Sol 1334",
        "Monterrey",
        "Nuevo Leon",
        64633
    );
    // remitente, destinatario, costoEstandar
    Envio envio1(persona1, persona2, 20);
    Envio envio2(persona1, persona3, 20);
    Envio envio3(persona3, persona2, 20);
    Sobre sobre(envio1, 20, 25, 0.0, 0.5, 500.0);
    Sobre sobre2(envio2, 30, 35, 2.0, 1.0, 7.5);
    Paquete paquete(envio3, 10, 15, 20, 1.5, 10.0);

    // POLIMORFISMO
    Envio* envios[3];
    envios[0] = &sobre;
    envios[1] = &sobre2;
    envios[2] = &paquete;

    for (int i = 0; i < 3; i++) {
        // regresa información de cada atributo de envio
        cout << "Envio: " << i+1 << endl;
        cout << "---------------------------" << endl;
        cout << "Destinatario: " << envios[i]->getDestinatario().getNombre() << endl;
        cout << "Direccion: " << envios[i]->getDestinatario().getDireccion() << endl;
        cout << "Ciudad: " << envios[i]->getDestinatario().getCiudad() << endl;
        cout << "Estado: " << envios[i]->getDestinatario().getEstado() << endl;
        cout << "Codigo Postal: " << envios[i]->getDestinatario().getCp() << endl;
        cout << "---------------------------" << endl;
        cout << "Remitente: " << envios[i]->getRemitente().getNombre() << endl;
        cout << "Direccion: " << envios[i]->getRemitente().getDireccion() << endl;
        cout << "Ciudad: " << envios[i]->getRemitente().getCiudad() << endl;
        cout << "Estado: " << envios[i]->getRemitente().getEstado() << endl;
        cout << "Codigo Postal: " << envios[i]->getRemitente().getCp() << endl;
        cout << "---------------------------" << endl;
        cout << "Costo de envio: " << envios[i]->calculaCosto() << endl;
        cout << endl;

        }

    return 0;
}
