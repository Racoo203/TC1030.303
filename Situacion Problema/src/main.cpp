#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <sstream>
#include <limits>

#include "episodio.h"
#include "pelicula.h"
using namespace std;

// Creacion de variables globales
vector<Video*> videos;
int counter;

template<typename T> T validateInput(const string& _message) {
    T value;
    while (!(cin >> value)) {
        cout << "Introduzca un numero valido." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << _message << endl;
    }
    return value;
}

// Funciones
// Funcion para cargar el archivo
void cargarArchivo() {
    // Creacion de variable guardando el archivo.
    ifstream inputFile("Ejemplo.txt");
    // Validacion de archivo
    if (inputFile.is_open()) {
        // Creacion de variables para almacenar el contenido del archivo
        vector<string> row;
        string line, word;

        cout<<"Archivo abierto exitosamente"<<endl;
        while (getline(inputFile, line)) {
            row.clear();
            stringstream str(line);
            while(getline(str, word, ' ')) {
                row.push_back(word);
            }
            if (row[0] == "e") {
                videos.push_back(new Episodio(
                    stoi(row[1]), row[2], row[3], 
                    stoi(row[4]), stoi(row[5]), row[6], 
                    stoi(row[7]), stoi(row[8])));
            }
            
            if (row[0] == "p") {
                videos.push_back(new Pelicula(
                    stoi(row[1]), row[2], row[3], 
                    stoi(row[4]), stoi(row[5])));
            }
        }
        cout << "Videos agregado exitosamente" << endl;
        cout << "Total de videos: " << videos.size() << endl;
        inputFile.close();
    } else {
        cout<<"Error al abrir archivo"<<endl;
    }
    
}

// Funcion para filtrar videos
void filtrarVideos() {
    cout << "Selecciona el filtro" << endl;
    cout << "1. Calificacion" << endl;
    cout << "2. Genero" << endl;
    int filtro;
    while (!(cin >> filtro)) {
        cout << "Opcion no valida. Introduzca un numero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    if (filtro == 1) {
        cout << "Introduzca la calificacion" << endl;
        int calificacion;
        while (!(cin >> calificacion)) {
            cout << "Opcion no valida. Introduzca un numero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        for (Video* video : videos) {
            if (video->getCalificacion() == calificacion) {
                video->muestra();
                counter++;
            }
        }
    } else if (filtro == 2) {
        cout << "Introduzca el genero" << endl;
        string genero;
        cin >> genero;
        for (Video* video : videos) {
            if (video->getGenero() == genero) {
                video->muestra();
                counter++;
            } 
        }
    } else {
        cout << "Opcion no valida" << endl;
    }
    cout << "Total de videos: " << counter << endl;
    counter = 0;
}

// Funcion para filtrar episodios
void filtrarEpisodios() {
    cout << "Introduzca el nombre de la serie" << endl;
    string serie;
    cin >> serie;
    cout << "Introduzca la calificacion" << endl;
    int calificacion = validateInput<int>("Introduzca la calificacion: ");
    if (calificacion < 1 || calificacion > 5) {
        cout << "Calificacion no valida, intenta con otro parametro." << endl;
        return;
    }
    for (Video* video : videos) {
        Episodio* episodio = dynamic_cast<Episodio*>(video);
        if (episodio != nullptr && episodio->getCalificacion() == calificacion && episodio->getSerie() == serie) {
            cout << "Episodio: " << episodio->getTitulo() << endl;
            counter++;
        }
    }
    cout << "Total de episodios: " << counter << endl;
    counter = 0;
}

// Funcion para filtrar peliculas
void filtrarPeliculas() {
    cout << "Introduzca la calificacion" << endl;
    int calificacion = validateInput<int>("Introduzca la calificacion: ");
    if (calificacion < 1 || calificacion > 5) {
        cout << "Calificacion no valida, intenta con otro parametro." << endl;
        return;
    }
    for (Video* video : videos) {
        Pelicula* pelicula = dynamic_cast<Pelicula*>(video);
        if (pelicula != nullptr && pelicula->getCalificacion() == calificacion) {
            pelicula->muestra();
            counter++;
        }
    }
    cout << "Total de peliculas: " << counter << endl;
    counter = 0;
}

// Funcion para calificar un video
void calificarVideo() {
    string titulo;
    cout << "Introduzca el titulo del video: " << endl;
    cin >> titulo;
    int calificacion = validateInput<int>("Introduzca la calificacion: ");
    for (Video* video : videos) {
        if (video->getTitulo() == titulo) {
            video->setCalificacion(calificacion);
            cout << "Calificacion agregada exitosamente" << endl;
            video -> muestra();
            return;
        } 
        // Rompe el ciclo si encuentra el video
    }
    cout << "No se encontro el video, verifica nuevamente los parametros." << endl;
}

void compararVideos() {
    int id1, id2;
    Video* vid1;
    Video* vid2;
    cout << "Introduzca el ID del primer video: " << endl;
    cin >> id1;
    cout << "Introduzca el ID del segundo video: " << endl;
    cin >> id2;
    for (Video* video : videos) {
        if (video->getIdVideo() == id1) vid1 = video;
        if (video->getIdVideo() == id2) vid2 = video;
    }
    if (*vid1 > *vid2) {
        cout << "El video " << vid1->getTitulo() << " es mejor que " << vid2->getTitulo() << endl;
        return;    
    } else if (*vid1 < *vid2) {
        cout << "El video " << vid2->getTitulo() << " es mejor que " << vid1->getTitulo() << endl;
        return;
    } else {
        cout << "Los videos son iguales." << endl;
        return;
    } 
    cout << "No se encontro el video, verifica nuevamente los parametros." << endl;
}

int main() {
    // INICIALIZACION DE VARIABLES
    // Variable para determinar si el codigo ha terminado
    bool terminar = false;
    int opcion;

    while (!terminar) {
        // Visualizar opciones
        cout << "1. Cargar archivo de datos" << endl;
        cout << "2. Filtrar videos (calificacion / genero)" << endl;
        cout << "3. Filtrar episodios de una serie. (calificacion)" << endl;
        cout << "4. Filtrar peliculas. (calificacion)" << endl;
        cout << "5. Calificar un video" << endl;
        cout << "6. Comparar videos (calificacion)" << endl;
        cout << "7. Salir" << endl;
        
        // Seleccion de opciones}
        // Validacion de tipo de dato,
        opcion = validateInput<int>("Opcion: ");

        switch (opcion) {
            case 1: 
                cout << "Cargando archivo..." << endl;
                cargarArchivo();
                break;
            case 2:
                cout << "Filtrando..." << endl;
                filtrarVideos();
                break;
            case 3:
                cout << "Filtrando..." << endl;
                filtrarEpisodios();
                break;
            case 4:
                cout << "Filtrando..." << endl;
                filtrarPeliculas();
                break;
            case 5:
                calificarVideo();
                break;
            case 6:
                cout << "Comparando..." << endl;
                compararVideos();
                break;
            case 7:
                cout << "Cerrando..." << endl;
                terminar = true;
                for (Video* video : videos) {
                    delete video;
                }
                cout << "Memoria liberada" << endl;
                cout << "Cerrado exitosamente." << endl;
                break;
            default:
                cout << "Opcion no valida, selecciona un número del 1-6." << endl;
                break;
            }
    };

    return 0;

}