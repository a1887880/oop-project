#include <iostream>
#include "Crop.h"

int main() {
    // Creating a Crop object
    Crop crop(50.0, "Wheat", 5);

    // Testing getters and setters
    std::cout << "Initial Crop Type: " << crop.get_cropType() << std::endl;
    crop.set_cropType("Barley");
    std::cout << "Updated Crop Type: " << crop.get_cropType() << std::endl;

    std::cout << "Initial Water Saturation: " << crop.get_waterSaturation() << std::endl;
    crop.set_waterSaturation(90);
    std::cout << "Updated Water Saturation: " << crop.get_waterSaturation() << std::endl;

    std::cout << "Initial Mature Stage: " << crop.get_matureStage() << std::endl;
    crop.set_matureStage(6);
    std::cout << "Updated Mature Stage: " << crop.get_matureStage() << std::endl;

    // Testing watering the crop
    crop.waterCrop();
    std::cout << "Water Saturation after watering: " << crop.get_waterSaturation() << std::endl;

    // Testing fatal thirst condition
    crop.set_waterSaturation(0);  // Set water saturation to 0
    if (crop.fatalThirst()) {
        std::cout << "The crop is in a fatal thirst state." << std::endl;
    } else {
        std::cout << "The crop is not in a fatal thirst state." << std::endl;
    }

    // Testing summarizing the commodity
    crop.summariseCommodity();

    return 0;
}
