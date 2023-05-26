#include "tile.h"

// Constructor
Tile::Tile(int _id, string _type) {
    setId(_id);
    setType(_type);
}

Tile::Tile() { 
    setId(0);
    setType("N");
}

// Getters
int Tile::getId() {
    return id;
}

int Tile::getEffect() {
    return effect;
}

string Tile::getType() {
    return type;
}

// Setters

void Tile::setId(int _id) {
    if (_id >= 0) {
        id = _id;
    } else {
        cout << "Invalid id" << endl;
    }
}

void Tile::setEffect(int _effect) {
    effect = _effect;
}

void Tile::setType(string _type) {
    type = _type;
    
    if (type == "N") { // NORMAL
        setEffect(0);
    }else if (type == "L") { // LADDER
        setEffect(3);
    }else if (type == "S") { // SNAKE
        setEffect(-3);
    } else {
        cout << "Invalid type" << endl;
        setEffect(0);
    }
    
}

string Tile::tileView() {
    string tileView;
    if (getId() < 10) {
            tileView = "0" + to_string(getId()) + "|" + getType();
        } else tileView = to_string(getId()) + "|" + getType();
    return tileView;
}