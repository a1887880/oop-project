#ifndef CHICKEN_H
#define CHICKEN_H

// Include the header file for the base class "Animal"
#include "Animal.h"

// Declare the "Chicken" class, inheriting from "Animal"
class Chicken : public Animal {
 protected:
  int eggProductionRate;  // Rate of egg production (in individual eggs)

 public:
  // Constructor for the "Chicken" class
  Chicken(string name);

  // Getter and setter methods for the "eggProductionRate" member variable
  int get_eggProductionRate();
  void set_eggProductionRate(int newRate);

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
