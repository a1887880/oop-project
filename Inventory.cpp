#include "Inventory.h"

// constructor for inventory class
Inventory::Inventory() {
    // initialises the counts for different crops and collectables to zero
    numWheat = 0;
    numCarrots = 0;
    numPotatos = 0;
    numWatermelons = 0;

    numEggs = 0;
    numWool = 0;
    numCheese = 0;
    numMilk = 0;

    // initialise the animal feed count to zero
    animalFeed = 0;
}

// getters for different crop and collectable counts
int Inventory::get_numWheat() { return numWheat; }
int Inventory::get_numCarrots() { return numCarrots; }
int Inventory::get_numPotatos() { return numPotatos; }
int Inventory::get_numWatermelons() { return numWatermelons; }
int Inventory::get_numEggs() { return numEggs; }
int Inventory::get_numWool() { return numWool; }
int Inventory::get_numCheese() { return numCheese; }
int Inventory::get_numMilk() { return numMilk; }
int Inventory::get_animalFeed() { return animalFeed; }

// methods to increase count of specific collectables
void Inventory::increase_numEggs(int num) { numEggs += num; }
void Inventory::increase_numWool(int num) { numWool += num; }
void Inventory::increase_numCheese(int num) { numCheese += num; }
void Inventory::increase_numMilk(int num) { numMilk += num; }

// method to buy animal feed and increase feed count
void Inventory::buyFeed(int quantity) {
    animalFeed += quantity;
}

// methods to reset counts of crops and collectables
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

// method to display summary of inventory
void Inventory::summariseInventory() {
    cout << "Units of Eggs: " << numEggs << endl
        << "Units of Wool: " << numWool << endl
        << "Units of Cheese: " << numCheese << endl
        << "Units of Milk: " << numMilk << endl
        << "Units of Animal Feed: " << animalFeed << endl;
}