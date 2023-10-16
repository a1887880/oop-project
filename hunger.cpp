#include <iostream>
#include <string>

class Commodity {
protected:
    double value;
    int stageOfLife;

public:
    Commodity(double val) : value(val), stageOfLife(0) {}

    virtual void Grow() = 0;

    virtual void Details() {
        std::cout << "Stage of Life: " << stageOfLife << std::endl;
        std::cout << "Value: " << value << std::endl;
    }
};

class Animal : public Commodity {
private:
    std::string name;
    int feedingRequirement;
    int hungerRating;  // 0: not hungry, 1: bit hungry, 2: very hungry

public:
    Animal(double val, const std::string& animalName, int req)
        : Commodity(val), name(animalName), feedingRequirement(req), hungerRating(0) {}

    void Grow() override {
        stageOfLife++;
        // animal growth
    }

    void FeedAnimal() {
        if (hungerRating == 0) {
            std::cout << name << " is not hungry. No need to feed." << std::endl;
        } else {
            // feeding logic
            std::cout << "Fed " << name << ". Hunger reduced." << std::endl;
            hungerRating = (hungerRating > 0) ? hungerRating - 1 : 0;
        }
    }

    void PassADay() {
        if (hungerRating > 0) {
            hungerRating--;
        }
    }

    void SetHunger(int rating) {
        hungerRating = rating;
    }

    void Details() override {
        std::cout << "Animal Name: " << name << std::endl;
        std::cout << "Feeding Requirement: " << feedingRequirement << std::endl;
        std::cout << "Hunger Rating: " << hungerRating << " (0: Not hungry, 1: A bit hungry, 2: Very hungry)" << std::endl;
        Commodity::Details();
    }
};

class Crop : public Commodity {
private:
    int waterDemands;
    int waterSaturationRating;  // 0: dry, 1: needs some water, 2: watered

public:
    Crop(double val, int demands) : Commodity(val), waterDemands(demands), waterSaturationRating(0) {}

    void Grow() override {
        stageOfLife++;
        // crop growth
    }

    void WaterPlants() {
        if (waterSaturationRating == 2) {
            std::cout << "Plants are already well-watered. No need to water." << std::endl;
        } else {
            // watering logic
            std::cout << "Watered plants. Water saturation increased." << std::endl;
            waterSaturationRating = (waterSaturationRating < 2) ? waterSaturationRating + 1 : 2;
        }
    }

    void PassADay() {
        if (waterSaturationRating > 0) {
            waterSaturationRating--;
        }
    }

    void SetWaterSaturation(int rating) {
        waterSaturationRating = rating;
    }

    void Details() override {
        std::cout << "Water Demands: " << waterDemands << std::endl;
        std:: cout << "Water Saturation Rating: " << waterSaturationRating << " (0: Dry, 1: Moist, 2: Well-watered)" << std::endl;
        Commodity::Details();
    }
};