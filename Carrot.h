#ifndef CARROT_H
#define CARROT_H

// Include the header file for the base class "Crop"
#include "Crop.h"

// Declare the "Carrot" class, inheriting from "Crop"
class Carrot : public Crop {
 public:
  // Constructor for the "Carrot" class
  Carrot();

  // Override the summariseCommodity method from the base class
  void summariseCommodity();
};

#endif
