#ifndef FARM_H
#define FARM_H

#include <iostream>
#include <fstream>

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
        int landArea; // in hectares
        int value;
        int bankAccout;

        int numChickens, numSheep, numGoats, numCows;
        int numWheat, numCarrots, numPotatos, numWatermelons;
        int numEmployees;

        int maxPerAnimal, maxPerCrop, maxEmployees;


        Chicken *chickens;
        Sheep *sheep;
        Goat *goats;
        Cow *cows;

        Wheat *wheat;
        Carrot *carrots;
        Potato *potatos;
        Watermelon *watermelons;

        Employee *employees;
    public:
        Inventory inventory;

        Farm(string name);
        Farm();

        string get_name();
       
        bool buyLand();

        bool hireEmployee(string name);
        //bool fireEmployee();
        void showPayroll();

        bool buyChicken(string name);
        bool buySheep(string name);
        bool buyGoat(string name);
        bool buyCow(string name);
        bool sellAnimal(Animal *animal, int n, int numAnimal);

        bool buyWheat();
        bool buyCarrots();
        bool buyPotatos();
        bool buyWatermelons();
        bool sellCrop(Crop* crop, int n, int numCrops);

        void increaseValues();

        void summariseFarm();

        void saveData();

        ~Farm();
};

#endif