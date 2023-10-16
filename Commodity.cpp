#include "Commodity.h"

Commodity::Commodity(double value, int maxLifeStage) {
    this->value = value;
    this->stageOfLife = 0;
    this->maxLifeStage = maxLifeStage;
}

int Commodity::get_value() {return value;}
void Commodity::set_value(int newValue) {value = newValue;}

int Commodity::get_stageOfLife() {return stageOfLife;}
void Commodity::set_stageOfLife(int newStage) {stageOfLife = newStage;}

int Commodity::get_maxLifeStage() {return maxLifeStage;}
void Commodity::set_maxLifeStage(int newMaxStage) {maxLifeStage = newMaxStage;}

void Commodity::grow() {stageOfLife++;}
void Commodity::grow(int stages) {stageOfLife += stages;}