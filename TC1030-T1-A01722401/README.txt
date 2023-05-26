AUTOR:      RAÚL CORREA OCAÑAS
FECHA:      26 DE MAYO DE 2023
MATRICULA:  A01722401
CLASE:      TC1030 - PROGRAMACIÓN ORIENTADA A OBJETOS

CREADO EN C++

INSTRUCCIONES DE COMPILACIÓN:
    El editor seleccionado para realizar el codigo fue VSCode, utilizando las respectivas
extensiones para compilar C++. Así mismo, se utilizó el compilador g++ para compilar
el codigo. 'snakes.cpp' es el archivo que actua como el 'main' del programa. En la terminal
de VSCode, asegurarse de estar en el directorio correcto, donde se debe escribir el 
siguiente comando para compilar el programa:
        
> g++ snakes.cpp board.cpp dice.cpp player.cpp tile.cpp -o snakes.exe

DESCRIPCIÓN DEL PROGRAMA:
    Simulación del juego Serpientes y Escaleras. El juego consiste en dos jugadores
tirando un dado y avanzando en un tablero de 5x6 casillas. El jugador que llegue
primero a la casilla 30 gana. El tablero tiene 3 serpientes y 3 escaleras que
hacen que el jugador tanto avance como retroceda en el tablero 3 casillas. En
caso de que ningun jugador llegue a la casilla 30 antes del turno 15, el programa
se detiene.

Se consideraron los siguientes objetos arbitrarios al jugar:
- Jugador // Conocido como la clase PLAYER
- Dado // Conocido como la clase DICE
- Tablero // Conocido como la clase BOARD
- Casilla // Conocido como la clase TILE
- Juego // Conocido como la clase GAME dentro de SNAKES

    Se observa que la clase TILE es una clase hija de la clase BOARD, ya un tablero 
esta compuesto de casillas. PLAYER, DICE, BOARD son clases hijas de la clase GAME.
Esto es debido a que el juego esta compuesto de estas tres ideas arbitrarias y sus 
instancias. SNAKES, actuando como la clase main del programa, es una clase padre de
GAME.

    Se crearon los respectivos archivos .h y .cpp de cada objeto, con sus respectivos
constructores, setters, getters y metodos. 

    En cuanto a la visualización del programa, se ve diferente a lo esperado según el
documento. Se espera algo por el estilo de:

"1 1 1 4 N 5"

Sin embargo, intencionalmente se modificó el programa para que se vea de la siguiente
manera, donde se puede apreciar mejor el tablero y los jugadores:

C: Continuar
E: Salir
C
TURN: 1|PLAYER 1
Roll: 1
01|N    02|N    03|N    04|N    05|N    06|L
07|N    08|N    09|N    10|S    11|N    12|N
13|N    14|L    15|N    16|N    17|S    18|N
19|N    20|N    21|L    22|N    23|N    24|N
25|N    26|S    27|N    28|N    29|N    30|N

Al correr el codigo, se puede observar como el texto puede tomar tres opciones de color:
- Rojo:     Indica que el jugador 1 esta en la casilla
- Verde:    Indica que el jugador 2 esta en la casilla
- Amerillo: Indica que ambos jugadores estan en la casilla

TC1030 - T1 - A01722401.zip
--README.txt
--src
----board.cpp
----board.h
----dice.cpp
----dice.h
----player.cpp
----player.h
----snakes.cpp
----snakes.exe
----snakes.out
----test.txt
----tile.cpp
----tile.h