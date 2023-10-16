#ifndef ANIMAL_H
#define ANIMAL_H

#include "Commodity.h"

class Animal : public Commodity {
    protected:
        string name;
        string species;
        int feedingRequirement;
        int hungerRating;

    public:
        Animal(int value, string name, string species, int feedingRequirement);

        string get_name();
        void set_name(string newName);

        string get_species();
        void set_species(string newSpecies);

        int get_feedingRequirement();
        void set_feedingRequirement(int newFeedingRequirement);

        int get_hungerRating();
        void set_hungerRating(int newHungerRating);

        void feedAnimal();

        bool fatalHunger();

        void summariseCommodity();
};

#endif