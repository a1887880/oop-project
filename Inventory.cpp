#include "Inventory.h"

Inventory::Inventory() {
    numWheat = 0;
    numCarrots = 0;
    numPotatos = 0;
    numWatermelons = 0;

    numEggs = 0;
    numWool = 0;
    numCheese = 0;
    numMilk = 0;

    animalFeed = 0;
}

int Inventory::get_numWheat() {return numWheat;}
int Inventory::get_numCarrots() {return numCarrots;}
int Inventory::get_numPotatos() {return numPotatos;}
int Inventory::get_numWatermelons() {return numWatermelons;} 
int Inventory::get_numEggs() {return numEggs;}
int Inventory::get_numWool() {return numWool;}
int Inventory::get_numCheese() {return numCheese;}
int Inventory::get_numMilk() {return numMilk;}
int Inventory::get_animalFeed() {return animalFeed;}

void Inventory::buyFeed(int quantity) {
    animalFeed += quantity;
} 

void Inventory::emptyCrops() {
    numWheat = 0;
    numCarrots = 0;
    numPotatos = 0;
    numWatermelons = 0;
}

void Inventory::emptyCollectables() {
    numEggs = 0;
    numWool = 0;
    numCheese = 0;
    numMilk = 0;
}

void Inventory::summariseInventory() {
    cout << "Units of Eggs: " << numEggs << endl
        << "Units of Wool: " << numWool << endl
        << "Units of Cheese: " << numCheese << endl
        << "Units of Milk: " << numMilk << endl
        << "Units of Wheat: " << numWheat << endl
        << "Units of Carrots: " << numCarrots << endl
        << "Units of Potatos: " << numPotatos << endl
        << "Units of Watermelons: " << numWatermelons << endl
        << "Units of Animal Feed: " << animalFeed << endl;
}