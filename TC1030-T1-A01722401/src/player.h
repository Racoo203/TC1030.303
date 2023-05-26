#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Player {
    private:
        int currentTile;
        int playerId;
    public:
        // Getters
        int getCurrentTile();
        int getPlayerId();
        // Setters
        void setCurrentTile(int);
        void setPlayerId(int);

        // Constructor
        Player(int _currentTile, int _playerId);

        // Methods

        // Move the player to the next tile
        void move(int _tilesToMove);
};

#endif