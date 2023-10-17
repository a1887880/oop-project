#ifndef WHEAT_H
#define WHEAT_H

// Include the header file for the base class "Crop"
#include "Crop.h"

// Declare the "Wheat" class, inheriting from "Crop"
class Wheat : public Crop {
 public:
  // Constructor for the "Wheat" class
  Wheat();

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
