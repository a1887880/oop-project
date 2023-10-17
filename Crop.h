#ifndef CROP_H
#define CROP_H

// Include the header file for the base class "Commodity"
#include "Commodity.h"

// Declare the "Crop" class, inheriting from "Commodity"
class Crop : public Commodity {
 protected:
  string cropType;
  int waterSaturation;
  int matureStage;

 public:
  // Constructor for the "Crop" class
  Crop(double value, string cropType, int matureStage);

  // Getter and setter methods for the "cropType" member variable
  string get_cropType();
  void set_cropType(string newCropType);

  // Getter and setter methods for the "waterSaturation" member variable
  int get_waterSaturation();
  void set_waterSaturation(int newWaterSaturation);

  // Getter and setter methods for the "matureStage" member variable
  int get_matureStage();
  void set_matureStage(int newMatureStage);

  // Function to water the crop
  void waterCrop();

  // Function to check if the crop is experiencing fatal thirst
  bool fatalThirst();

  // Function to summarize the commodity information
  void summariseCommodity();
};

#endif
