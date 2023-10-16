#ifndef GOAT_H
#define GOAT_H

#include "Animal.h"

class Goat : public Animal {
    protected:
        int cheeseProductionRate; // in servings 
    public:
        Goat(string name);
        Goat();

        int get_cheeseProductionRate();
        void set_cheeseProductionRate(int newRate);

        void summariseCommodity();
};

#endif