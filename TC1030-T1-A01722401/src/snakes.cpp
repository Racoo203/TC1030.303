#include "board.h"
#include "player.h"
#include "dice.h"
#include <iostream>

class Game {
    public:
        void start() {
            // instantiate objects
            Board board;
            Player player1(1, 1); // position, player number
            Player player2(1, 2); // position, player number
            Dice dice;

            char input;
            int turn = 1;
            bool playing = true;
            int turnMAX = 15;

            board.printBoard(
                player1.getCurrentTile(), 
                player2.getCurrentTile());

            // turnos, "c" para continuar y "e" para salir
            cout << "C: Continuar" << endl << "E: Salir" << endl;
            while (playing && turn <= turnMAX) {
                // Ask player if they want to continue
                // turno
                cin >> input;

                if (input == 'C') {
                    // TURNO
                    int roll = dice.roll();

                    if (turn % 2 == 1) { 
                        cout << "TURN: " << turn << "|\033[1;31mPLAYER 1\033[0m" << endl;
                        cout << "Roll: " << roll << endl;
                        player1.move(roll);
                        player1.move(board.tiles[player1.getCurrentTile()-1].getEffect());
                    } else {
                        cout << "TURN: " << turn << "|\033[1;32mPLAYER 2\033[0m" << endl;
                        cout << "Roll: " << roll << endl;
                        player2.move(roll);
                        player2.move(board.tiles[player2.getCurrentTile()-1].getEffect());
                    }

                    if (player1.getCurrentTile() >= 30) {
                        player1.setCurrentTile(30);
                        cout << "PLAYER 1 WINS" << endl;
                        playing = false;
                    } else if (player2.getCurrentTile() >= 30) {
                        player2.setCurrentTile(30);
                        cout << "PLAYER 2 WINS" << endl;
                        playing = false;
                    }

                    board.printBoard(
                            player1.getCurrentTile(), 
                            player2.getCurrentTile());
                    
                    turn += 1;

                } else if (input == 'E') {
                    playing = false;
                    cout << "Thanks for playing!!" << endl;
                } else {
                    cout << "Opción invalida" << endl;
                }
            }

            if (turn > turnMAX) cout << "The maximum number of turns has been reached..." << endl;

            cout << "--GAME OVER--" << endl;
        }
};

int main() {
    Game game;
    game.start();
    return 0;
}