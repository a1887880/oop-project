#ifndef FARM_H
#define FARM_H
// includes necessary files
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

// declares farm class
class Farm {
    private:
        string name; // name of farm
        int landArea; // in hectares
        int value; // value of farm in dollars
        int bankAccout; // in dollars

        int numChickens, numSheep, numGoats, numCows; // number of each individual animals belonging to the farm 
        int numWheat, numCarrots, numPotatos, numWatermelons; // number units of each crop belonging to the farm
        int numEmployees; // number of employees currently employed by farm

        int maxPerAnimal, maxPerCrop, maxEmployees; // max number of classes the farm can currently hold

        // Pointers to what will be dynamic arrays holding multiple instances of their particular object
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
        Inventory inventory; // Individual inventory object (1 per farm)
        
        // constructors
        Farm(string name);
        Farm();

        // getters
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


        void set_bankAccount(int newValue);   // sets bank account to newValue

        void summariseCrop(Crop* crops, int numCrops);  // summarises particular crop array
       
        bool buyLand(); // increases land area

        bool hireEmployee(string name); // adds employee to array
        bool fireEmployee(int); // removes employee from array
        void showPayroll(); // summarises all employees currently hired

        bool buyChicken(string name); // adds chicken to array
        bool buySheep(string name); // adds sheep to array
        bool buyGoat(string name); // adds goat to array
        bool buyCow(string name); // adds cow to array
        bool sellAnimal(Animal *animal, int n, int numAnimal); // removes animal from array for profit
        
        bool buyWheat(); // adds wheat to array
        bool buyCarrots(); // adds carrot to array
        bool buyPotatos(); // adds potato to array
        bool buyWatermelons(); // adds watermelon to array
        bool sellCrop(Crop* crop, int n, int numCrops); // removes inidivual crop from crop array for profit

        void increaseValues(); // increase value of each commodity
        void ageCommodities(); // increments stage of life for each commodity
        void terminateAgedCommodities(); // kills commodities that have reach max Life

        void summariseFarm(); // summarises farm info

        void saveData(); // writes summary to external file

        ~Farm(); // destructor for Farm
};

#endif