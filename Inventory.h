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

        void increase_numEggs(int num);
        void increase_numWool(int num);
        void increase_numCheese(int num);
        void increase_numMilk(int num);

        void buyFeed(int quantity);

        void emptyCrops();
        void emptyCollectables();

        void summariseInventory();
};

#endif