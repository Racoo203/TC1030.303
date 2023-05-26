// make dice
#include "dice.h"
 
int Dice::roll() {
	srand(static_cast<unsigned>(time(0)));
    return (rand() % 6) + 1;
}