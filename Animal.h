#ifndef ANIMAL_H
#define ANIMAL_H

// Include the header file for the base class "Commodity"
#include "Commodity.h"

// Declare the "Animal" class, inheriting from "Commodity"
class Animal : public Commodity {
 protected:
  string name;
  string species;
  int feedingRequirement;
  int hungerRating;

 public:
  // Constructor for the "Animal" class
  Animal(double value, string name, string species, int feedingRequirement);

  // Getter and setter methods for the "name" member variable
  string get_name();
  void set_name(string newName);

  // Getter and setter methods for the "species" member variable
  string get_species();
  void set_species(string newSpecies);

  // Getter and setter methods for the "feedingRequirement" member variable
  int get_feedingRequirement();
  void set_feedingRequirement(int newFeedingRequirement);

  // Getter and setter methods for the "hungerRating" member variable
  int get_hungerRating();
  void set_hungerRating(int newHungerRating);

  // Function to feed the animal
  void feedAnimal();

  // Function to check if the animal is experiencing fatal hunger
  bool fatalHunger();

  // Function to summarize the commodity information
  void summariseCommodity();
};

#endif
