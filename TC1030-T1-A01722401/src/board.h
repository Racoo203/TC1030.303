#ifndef BOARD_H
#define BOARD_H

#include "tile.h"
#include <random>

class Board {
    public:
        // Atributos
        Tile tiles[30];

        // Constructor
        Board();

        // Metodos
        void printBoard(int _positionP1, int _positionP2);
};

#endif