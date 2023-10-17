#ifndef WATERMELON_H
#define WATERMELON_H

// Include the header file for the base class "Crop"
#include "Crop.h"

// Declare the "Watermelon" class, inheriting from "Crop"
class Watermelon : public Crop {
 public:
  // Constructor for the "Watermelon" class
  Watermelon();

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
