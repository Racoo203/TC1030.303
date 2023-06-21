#ifndef EPISODIO_H
#define EPISODIO_H

#include "video.h"

class Episodio: public Video {
    private:
        string serie;
        int numEpisodio;
        int numTemporada;
    public:
        Episodio();
        Episodio(
            int _idVideo, string _titulo, string _genero, 
            int _duracion, int _calificacion, string _serie, 
            int _numEpisodio, int _numTemporada
        );
        void muestra() override;

        // Setters
        void setSerie(string _serie);
        void setNumEpisodio(int _numEpisodio);
        void setNumTemporada(int _numTemporada);

        // Getters
        string getSerie();
        int getNumEpisodio();
        int getNumTemporada();

};

#endif