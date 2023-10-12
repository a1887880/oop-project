#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.h"

class Sheep : public Animal {
    protected:
        int woolProductionRate; // in Kilograms
    public:
        Sheep(string name);
        
        int get_woolProductionRate();
        void set_woolProductionRate(int newRate);

        void summariseCommodity();
};

#endif