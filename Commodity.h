#ifndef COMMODITY_H
#define COMMODITY_H

#include <iostream>
#include <string>

using namespace std;

class Commodity {
    protected:
        int value;
        int stageOfLife;
        int maxLifeStage;
    public:
        Commodity(double value, int maxLifeStage);

        int get_value();
        void set_value(int newValue);

        int get_stageOfLife();
        void set_stageOfLife(int newStage);

        int get_maxLifeStage();
        void set_maxLifeStage(int newMaxStage);

        void grow();
        void grow(int stages);

        virtual void summariseCommodity() = 0;
};

#endif