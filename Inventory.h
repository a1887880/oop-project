#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>

using namespace std;

class Inventory {
    private:
        int numWheat;
        int numCarrots;
        int numPotatos;
        int numWatermelons;
        
        int numEggs;
        int numWool;
        int numCheese;
        int numMilk;

        int animalFeed;
    public:
        Inventory();

        int get_numWheat();
        int get_numCarrots();
        int get_numPotatos();
        int get_numWatermelons();
        int get_numEggs();
        int get_numWool();
        int get_numCheese();
        int get_numMilk();
        int get_animalFeed();

        void buyFeed(int quantity);

        void emptyCrops();
        void emptyCollectables();

        void summariseInventory();
};

#endif