#ifndef SHEEP_H
#define SHEEP_H

// Include the header file for the base class "Animal"
#include "Animal.h"

// Declare the "Sheep" class, inheriting from "Animal"
class Sheep : public Animal {
 protected:
  int woolProductionRate;  // Wool production rate

 public:
  // Constructor for the "Sheep" class
  Sheep(string name);

  // Getter and setter methods for the "woolProductionRate" member variable
  int get_woolProductionRate();
  void set_woolProductionRate(int newRate);

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
