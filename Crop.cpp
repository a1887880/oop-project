#include "Crop.h"

Crop::Crop(double value, string cropType, int matureStage)
    : Commodity(value, 10) {
  this->cropType = cropType;
  this->waterSaturation = 100;
  this->matureStage = matureStage;
}

string Crop::get_cropType() { return cropType; }
void Crop::set_cropType(string newCropType) { cropType = newCropType; }

int Crop::get_waterSaturation() { return waterSaturation; }
void Crop::set_waterSaturation(int newWaterSaturation) {
  waterSaturation = newWaterSaturation;
}

int Crop::get_matureStage() { return matureStage; }
void Crop::set_matureStage(int newMatureStage) { matureStage = newMatureStage; }

void Crop::waterCrop() { waterSaturation = 100; }

bool Crop::fatalThirst() {
  if (waterSaturation == 0) {
    return true;
  } else {
    return false;
  }
}

void Crop::summariseCommodity() {
  cout << "Crop Type: " << cropType << endl
       << "Value: " << value << endl
       << "Stage of Life: " << stageOfLife << endl
       << "Maximum Stage of Life: " << maxLifeStage << endl
       << "Water Saturation: " << waterSaturation << endl
       << "Stage of Maturation: " << matureStage << endl;
}