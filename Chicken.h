#ifndef CHICKEN_H
#define CHICKEN_H

#include "Animal.h"

class Chicken : public Animal {
    protected:
        int eggProductionRate; // in individual eggs
    public:
        Chicken(string name);
        Chicken();

        int get_eggProductionRate();
        void set_eggProductionRate(int newRate);

        void summariseCommodity();
};

#endif