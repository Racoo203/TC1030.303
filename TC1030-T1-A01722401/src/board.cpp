#include "board.h"

// constructor
Board::Board() {

    for (int i = 0; i < 30; i++) {
        tiles[i].setId(i+1);
    }

    // Snake
    tiles[9].setType("S");
    tiles[16].setType("S");
    tiles[25].setType("S");

    // Ladder
    tiles[5].setType("L");
    tiles[13].setType("L");
    tiles[20].setType("L");
}

// metodos
void Board::printBoard(int _positionP1, int _positionP2) {

    // print tile type as a 5x6 matrix
    for (int i = 0; i < 30; i++) {
        // show tile view, 5x6 matrix, 
        string currentTile = tiles[i].tileView();

        // if player1, change tile color to red 

        if (i+1 == _positionP1 && i+1 == _positionP2) {
            currentTile = "\033[1;33m" + currentTile + "\033[0m"; // YELLOW
        } else if (i+1 == _positionP1) {
            currentTile = "\033[1;31m" + currentTile + "\033[0m"; // RED
        } else if (i+1 == _positionP2) {
            currentTile = "\033[1;32m" + currentTile + "\033[0m"; // GREEN
        } 

        cout << currentTile << "\t";

        if ((i+1) % 6 == 0) {
            cout << endl;
        }
    }

    cout << endl;
}
