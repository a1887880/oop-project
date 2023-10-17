#ifndef COMMODITY_H
#define COMMODITY_H

#include <iostream>
#include <string>

using namespace std;

// Declare the "Commodity" class
class Commodity {
 protected:
  double value;      // The value of the commodity
  int stageOfLife;   // The current stage of life of the commodity
  int maxLifeStage;  // The maximum stage of life for the commodity

 public:
  // Constructor for the "Commodity" class
  Commodity(double value, int maxLifeStage);

  // Getter and setter methods for the "value" member variable
  double get_value();
  void set_value(double newValue);

  // Getter and setter methods for the "stageOfLife" member variable
  int get_stageOfLife();
  void set_stageOfLife(int newStage);

  // Getter and setter methods for the "maxLifeStage" member variable
  int get_maxLifeStage();
  void set_maxLifeStage(int newMaxStage);

  // Method to simulate the growth of the commodity
  void grow();

  // Method to simulate the growth of the commodity by a specific number of
  // stages
  void grow(int stages);

  // A pure virtual function for summarizing commodity information
  virtual void summariseCommodity() = 0;
};

#endif
