#ifndef VIDEO_H 
#define VIDEO_H 

#include <iostream>
using namespace std;

// ESTA ES UNA CLASE ABSTRACTA

class Video { 
    // CONCEPTO: El modificar la visibilidad de los atributos y metodos de una clase
    // se le conoce como Encapsulamiento.
    // El encapsulamiento es el proceso de ocultar los detalles de implementacion
    // de una clase, de manera que solo se muestren los detalles que sean necesarios
    // para el uso de dicha clase.
    private:
        int idVideo;
        string titulo;
        string genero;
        int duracion;
        int calificacion;
    public:
        // Constructor
        // CONCEPTO: Cuando tienes dos metodos con el mismo nombre pero con diferentes 
        // parametros, se dice que estan sobrecargados
        Video();
        Video(int _idVideo, string _titulo, string _genero, int _duracion, int _calificacion);
        
        // Metodos
        // CONCEPTO: En cuanto a los conceptos de Programacion Orientada Objetos,
        // es un ejemplo de Polimorfismo.
        // El polimorfismo es la capacidad de un objeto de tomar diferentes formas.
        virtual void muestra() = 0;
        bool operator>(const Video& _video) const;
        bool operator<(const Video& _video) const;

        // CONCEPTO: En cuanto a los conceptos de Programacion Orientada Objetos,
        // es un ejemplo de Abstraccion.
        // La abstraccion es el proceso de ocultar los detalles de implementacion
        // de una clase, de manera que solo se muestren los detalles que sean necesarios
        // Setters
        void setIdVideo(int _idVideo);
        void setTitulo(string _titulo);
        void setGenero(string _genero);
        void setDuracion(int _duracion);
        void setCalificacion(int _calificacion);

        // Getters
        int getIdVideo();
        string getTitulo();
        string getGenero();
        int getDuracion();
        int getCalificacion();
};

#endif // VIDEO_H