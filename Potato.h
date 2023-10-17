#ifndef POTATO_H
#define POTATO_H

// Include the header file for the base class "Crop"
#include "Crop.h"

// Declare the "Potato" class, inheriting from "Crop"
class Potato : public Crop {
 public:
  // Constructor for the "Potato" class
  Potato();

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
