#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>

using namespace std;

// following lines guard against multiple inclusions of the same header file
// ensures code in this file is included only once during compilation

class Inventory {
    private:
        // private member variables to store counts of different items
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
        // public constructor for inventory class
        Inventory();

        // getters for various crop and collectable counts
        int get_numWheat();
        int get_numCarrots();
        int get_numPotatos();
        int get_numWatermelons();
        int get_numEggs();
        int get_numWool();
        int get_numCheese();
        int get_numMilk();
        int get_animalFeed();

        // methods to increase count of specific collectables
        void increase_numEggs(int num);
        void increase_numWool(int num);
        void increase_numCheese(int num);
        void increase_numMilk(int num);

        // method to buy animal feed and increase feed count
        void buyFeed(int quantity);

        // methods to reset counts of crops and collectables to zero
        void emptyCrops();
        void emptyCollectables();

        // method to display summary of inventory
        void summariseInventory();
};

#endif