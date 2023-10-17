#ifndef GOAT_H
#define GOAT_H

// Include the header file for the base class "Animal"
#include "Animal.h"

// Declare the "Goat" class, inheriting from "Animal"
class Goat : public Animal {
 protected:
  int cheeseProductionRate;  // Cheese production rate

 public:
  // Constructor for the "Goat" class
  Goat(string name);

  // Getter and setter methods for the "cheeseProductionRate" member variable
  int get_cheeseProductionRate();
  void set_cheeseProductionRate(int newRate);

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
