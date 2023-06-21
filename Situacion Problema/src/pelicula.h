#ifndef PELICULA_H
#define PElICULA_H

#include "video.h"

class Pelicula: public Video {
    public:
        // Constructor
        Pelicula();
        Pelicula(
            int _idVideo, string _titulo, string _genero, 
            int _duracion, int _calificacion
        );
        
        // Metodos
        void muestra() override;
};

#endif // PELICULA_H