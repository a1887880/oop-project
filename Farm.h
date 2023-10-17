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

        int get_bankAccount();

        string get_name();
        int get_numChickens();
        int get_numSheep();
        int get_numGoats();
        int get_numCows();
        int get_numWheat();
        int get_numCarrots();
        int get_numPotatos();
        int get_numWatermelons();

        int get_numEmployees();

        Chicken *get_chickens();
        Sheep *get_sheep();
        Goat *get_goats();
        Cow *get_cows();
        Wheat *get_wheat();
        Carrot *get_carrots();
        Potato *get_potatos();
        Watermelon *get_watermelons();
        Employee *get_employees();   

        void set_bankAccount(int newValue);   

        void summariseCrop(Crop* crops, int numCrops); 
       
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