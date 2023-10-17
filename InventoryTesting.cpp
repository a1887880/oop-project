#include <iostream>
#include "Inventory.h"

int main() {
    // create inventory object
    Inventory inventory;

    // perform various operations and tests
    inventory.emptyCrops();
    inventory.emptyCollectables();

    inventory.increase_numEggs(5);
    inventory.increase_numWool(10);
    inventory.increase_numCheese(3);
    inventory.increase_numMilk(8);

    inventory.buyFeed(20);

    // display inventory summary
    inventory.summariseInventory();

    return 0;
}