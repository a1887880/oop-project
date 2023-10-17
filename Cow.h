#ifndef COW_H
#define COW_H

// Include the header file for the base class "Animal"
#include "Animal.h"

// Declare the "Cow" class, inheriting from "Animal"
class Cow : public Animal {
 protected:
  int milkProductionRate;  // Milk production rate (in Litres)

 public:
  // Constructor for the "Cow" class
  Cow(string name);
  Cow();

  // Getter and setter methods for the "milkProductionRate" member variable
  int get_milkProductionRate();
  void set_milkProductionRate(int newRate);

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
