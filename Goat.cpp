#include "Goat.h"

Goat::Goat(string name) : Animal(500, name, "Goat", 6) {
    cheeseProductionRate = 3;
}
Goat::Goat() : Goat("") {}

int Goat::get_cheeseProductionRate() {return cheeseProductionRate;}
void Goat::set_cheeseProductionRate(int newRate) {cheeseProductionRate = newRate;}

void Goat::summariseCommodity() {
    Animal::summariseCommodity();
    cout << "Cheese Production Rate: " << cheeseProductionRate << endl;
}