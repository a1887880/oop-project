#include "Sheep.h"

Sheep::Sheep(string name) : Animal(200, name, "Sheep", 3) {
    woolProductionRate = 1;
}

int Sheep::get_woolProductionRate() {return woolProductionRate;}
void Sheep::set_woolProductionRate(int newRate) {woolProductionRate = newRate;}

void Sheep::summariseCommodity() {
    Animal::summariseCommodity();
    cout << "Wool Production Rate: " << woolProductionRate << endl;
}