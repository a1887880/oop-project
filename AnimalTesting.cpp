#include <iostream>
#include "Animal.h"

int main() {
    // Creating an Animal object
    Animal lion(100.0, "Simba", "Lion", 3);

    // Testing getters and setters
    std::cout << "Initial Name: " << lion.get_name() << std::endl;
    lion.set_name("Mufasa");
    std::cout << "Updated Name: " << lion.get_name() << std::endl;

    std::cout << "Initial Species: " << lion.get_species() << std::endl;
    lion.set_species("African Lion");
    std::cout << "Updated Species: " << lion.get_species() << std::endl;

    std::cout << "Initial Feeding Requirement: " << lion.get_feedingRequirement() << std::endl;
    lion.set_feedingRequirement(4);
    std::cout << "Updated Feeding Requirement: " << lion.get_feedingRequirement() << std::endl;

    std::cout << "Initial Hunger Rating: " << lion.get_hungerRating() << std::endl;
    lion.set_hungerRating(2);
    std::cout << "Updated Hunger Rating: " << lion.get_hungerRating() << std::endl;

    // Testing feeding the animal
    lion.feedAnimal();
    std::cout << "Hunger Rating after feeding: " << lion.get_hungerRating() << std::endl;

    // Testing fatal hunger condition
    lion.set_hungerRating(6);  // Set a hunger rating greater than 5
    if (lion.fatalHunger()) {
        std::cout << "The lion is in a fatal hunger state." << std::endl;
    } else {
        std::cout << "The lion is not in a fatal hunger state." << std::endl;
    }

    // Testing summarizing the commodity
    lion.summariseCommodity();

    return 0;
}