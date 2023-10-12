#include "Chicken.h"

Chicken::Chicken(string name) : Animal(20, name, "Chicken", 1) {
    eggProductionRate = 1;
}

int Chicken::get_eggProductionRate() {return eggProductionRate;}
void Chicken::set_eggProductionRate(int newRate) {eggProductionRate = newRate;}

void Chicken::summariseCommodity() {
    Animal::summariseCommodity();
    cout << "Egg Production Rate: " << eggProductionRate << endl;
}