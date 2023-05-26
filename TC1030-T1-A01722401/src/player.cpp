#include "player.h"

// Constructor
Player::Player(int _currentTile, int _playerId) {
    setCurrentTile(_currentTile);
    setPlayerId(_playerId);
}

// Getters

int Player::getCurrentTile() {
    return currentTile;
}

int Player::getPlayerId() {
    return playerId;
}

// Setters

void Player::setCurrentTile(int _currentTile) {
    currentTile = _currentTile;
}

void Player::setPlayerId(int _playerId) {
    playerId = _playerId;
} 

// Methods

// Move the player to the next tile
void Player::move(int _tilesToMove) {
    currentTile += _tilesToMove;
}