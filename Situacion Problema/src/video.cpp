#include "video.h"

Video::Video() {
    idVideo = 0;
    titulo = "N/A";
    genero = "N/A";
    duracion = 0;
    calificacion = 0;
}

Video::Video(int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion) {
    idVideo = _idVideo;
    titulo = _titulo;
    genero = _genero;
    duracion = _duracion;
    calificacion = _calificacion;
}

bool Video::operator>(const Video& _video) const {
    return calificacion > _video.calificacion;
}

bool Video::operator<(const Video& _video) const {
    return calificacion < _video.calificacion;
}

void Video::setIdVideo(int _idVideo) {
    idVideo = _idVideo;
}

void Video::setTitulo(string _titulo) {
    titulo = _titulo;
}

void Video::setGenero(string _genero) {
    genero = _genero;
}

void Video::setDuracion(int _duracion) {
    duracion = _duracion;
}

void Video::setCalificacion(int _calificacion) {
    calificacion = _calificacion;
}

int Video::getIdVideo() {
    return idVideo;
}

string Video::getTitulo() {
    return titulo;
}

string Video::getGenero() {
    return genero;
}

int Video::getDuracion() {
    return duracion;
}

int Video::getCalificacion() {
    return calificacion;
}