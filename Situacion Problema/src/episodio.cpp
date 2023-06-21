#include "episodio.h"

Episodio::Episodio() {
    // Como los atributos de Video son privados, no se puede acceder a ellos desde Episodio
    // directamente, por lo que se debe usar los metodos de acceso publicos de Video.
    setIdVideo(0);
    setTitulo("N/A");
    setGenero("N/A");
    setDuracion(0);
    setCalificacion(0);
    setSerie("N/A");
    setNumEpisodio(0);
    setNumTemporada(0);
}

Episodio::Episodio(
    int _idVideo, string _titulo, string _genero, 
    int _duracion, int _calificacion, string _serie, 
    int _numEpisodio, int _numTemporada
):Video(_idVideo, _titulo, _genero, _duracion, _calificacion) {
    setSerie(_serie);
    setNumEpisodio(_numEpisodio);
    setNumTemporada(_numTemporada);
}

void Episodio::muestra() {
    cout << "ID: " << getIdVideo() << endl;
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Duracion: " << getDuracion() << endl;
    cout << "Calificacion: " << getCalificacion() << endl;
    cout << "Serie: " << getSerie() << endl;
    cout << "Numero de episodio: " << getNumEpisodio() << endl;
    cout << "Numero de temporada: " << getNumTemporada() << endl;
    cout << endl;
}

// Setters

void Episodio::setSerie(string _serie) {
    serie = _serie;
}

void Episodio::setNumEpisodio(int _numEpisodio) {
    numEpisodio = _numEpisodio;
}

void Episodio::setNumTemporada(int _numTemporada) {
    numTemporada = _numTemporada;
}

// Getters

string Episodio::getSerie() {
    return serie;
}

int Episodio::getNumEpisodio() {
    return numEpisodio;
}

int Episodio::getNumTemporada() {
    return numTemporada;
}