#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {
    protected:
        int milkProductionRate; // in Litres
    public:
        Cow(string name);
        Cow();

        int get_milkProductionRate();
        void set_milkProductionRate(int newRate);

        void summariseCommodity();
};

#endif