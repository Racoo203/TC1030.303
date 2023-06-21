AUTOR:      RAÚL CORREA OCAÑAS
FECHA:      16 DE JUNIO DE 2023
MATRICULA:  A01722401
CLASE:      TC1030 - PROGRAMACIÓN ORIENTADA A OBJETOS

CREADO EN C++

INSTRUCCIONES DE COMPILACIÓN:
    El editor seleccionado para realizar el codigo fue VSCode, utilizando las respectivas
extensiones para compilar C++. Así mismo, se utilizó el compilador g++ para compilar
el codigo. 'main.cpp' es el archivo que actua como el 'main' del programa. En la terminal
de VSCode, asegurarse de estar en el directorio correcto, donde se debe escribir el 
siguiente comando para compilar el programa:
        
> g++ main.cpp fraccion.cpp -o main.exe
> .\main.exe

Se puede probar los casos prueba con el siguiente comando>
> .\main.exe < input.txt

DESCRIPCIÓN DEL PROGRAMA:
    Este programa consiste en una simulación de un sistema de streaming de video, en el cual
se puede filtrar la informacion de una base de datos de peliculas y series, de acuerdo a
las preferencias del usuario. Se lee un archivo de texto con todos los episodios y peliculas,
y se crea un vector de objetos de tipo Video, que puede ser de tipo Pelicula o Episodio.

    Usando polimorfismo, se puede acceder a los metodos de cada clase, y se puede filtrar la
informacion de acuerdo a las preferencias del usuario. La clase video es la clase padre
abstracta, y las clases Pelicula y Episodio son clases hijas que heredan los atributos
y metodos de la clase padre. Se puede acceder a los atributos de cada clase usando los
metodos get y set, y se puede imprimir la informacion de cada objeto muestra().

TC1030 - Proyecto Integrador - A01722401.zip
--README.txt
--src
----Ejemplo.txt
----episodio.cpp
----episodio.h
----input.txt
----main.cpp
----main.exe
----outputEsperado.txt
----pelicula.cpp
----pelicula.h
----video.cpp
----video.h