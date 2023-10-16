#ifndef FARM_H
#define FARM_H

#include <iostream>

#include "Wheat.h"
#include "Carrot.h"
#include "Potato.h"
#include "Watermelon.h"
#include "Chicken.h"
#include "Goat.h"
#include "Sheep.h"
#include "Cow.h"

#include "Employee.h"
#include "Inventory.h"

class Farm {
    private:
        string name;
        int landArea;
        double value;
        double bankAccout;

        int numAnimals, numCrops, numEmployees;

        Chicken *chickens;
        Sheep *sheep;
        Goat *goats;
        Cow *cows;

        Wheat *wheat;
        Carrot *carrots;
        Potato *potatos;
        Watermelon *watermelons;

        Inventory inventory;

        Employee *employees;
    public:

};

#endif