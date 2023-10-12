#include "Animal.h"

Animal::Animal(double value, string name, string species, int feedingRequirement) : Commodity(value, 40) {
    this->name = name;
    this->species = species;
    this->feedingRequirement = feedingRequirement;
    this->hungerRating = 0;
}

string Animal::get_name() {return name;}
void Animal::set_name(string newName) {name = newName;}

string Animal::get_species() {return species;}
void Animal::set_species(string newSpecies) {species = newSpecies;}

int Animal::get_feedingRequirement() {return feedingRequirement;}
void Animal::set_feedingRequirement(int newFeedingRequirement) {feedingRequirement = newFeedingRequirement;}

int Animal::get_hungerRating() {return hungerRating;}
void Animal::set_hungerRating(int newHungerRating) {hungerRating = newHungerRating;}

void Animal::feedAnimal() {
    this->hungerRating = 0;
}

bool Animal::fatalHunger() {
    if (hungerRating > 5) {
        return true;
    } else {
        return false;
    }
}

void Animal::summariseCommodity() {
    cout << "Name: " << name << endl
        << "Species: " << species << endl
        << "Value: " << value << endl
        << "Stage of Life: " << stageOfLife << endl
        << "Maximum Stage of Life: " << maxLifeStage << endl
        << "Feeding Requirement: " << feedingRequirement << endl
        << "Hunger Rating: " << hungerRating << endl;
}