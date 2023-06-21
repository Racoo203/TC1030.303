#include "pelicula.h"

Pelicula::Pelicula() {
    // Como los atributos de Video son privados, no se puede acceder a ellos desde Pelicula
    // directamente, por lo que se debe usar los metodos de acceso publicos de Video.
    setIdVideo(0);
    setTitulo("N/A");
    setGenero("N/A");
    setDuracion(0);
    setCalificacion(0);
}

Pelicula::Pelicula(
    int _idVideo, string _titulo, string _genero, 
    int _duracion, int _calificacion
):Video(
    _idVideo, _titulo, _genero, _duracion, _calificacion
    ) {
    
}

void Pelicula::muestra() {
    cout << "ID: " << getIdVideo() << endl;
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Duracion: " << getDuracion() << endl;
    cout << "Calificacion: " << getCalificacion() << endl;
    cout << endl;
}