#ifndef TILE_H
#define TILE_H

#include <iostream>
#include <string>

using namespace std;

class Tile {
    private:
        int id; // 1-30, 5X6 BOARD
        int effect; // reward, penalty, none
        string type; //SNAKE, LADDER, NORMAL
    public:
        // Constructor
        Tile(int _id, string _type);
        Tile();

        // Getters
        int getId();
        int getEffect();
        string getType();

        // Setters
        void setId(int _id);
        void setEffect(int _effect);
        void setType(string _type);

        // Methods
        string tileView();
};

#endif