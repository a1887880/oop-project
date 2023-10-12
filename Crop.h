#ifndef CROP_H
#define CROP_H

#include "Commodity.h"

class Crop : public Commodity {
    protected:
        string cropType;
        int waterSaturation; // scale from 1 to 10
    public:
        Crop(double value, string cropType);

        string get_cropType();
        void set_cropType(string newCropType);

        int get_waterSaturation();
        void set_waterSaturation(int newWaterSaturation);

        void waterCrop();

        bool fatalThirst();

        void summariseCommodity();
};

#endif