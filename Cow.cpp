#include "Cow.h"

Cow::Cow(string name) : Animal(1000, name, "Cow", 10) {
    milkProductionRate = 15;
}

int Cow::get_milkProductionRate() {return milkProductionRate;}
void Cow::set_milkProductionRate(int newRate) {milkProductionRate = newRate;}

void Cow::summariseCommodity() {
    Animal::summariseCommodity();
    cout << "Milk Production Rate: " << milkProductionRate << endl;
}