#include <iostream>
#include "Goat.h"

int main() {
    // Creating a Goat object
    Goat goat("Billy");

    // Testing getters and setters
    std::cout << "Initial Name: " << goat.get_name() << std::endl;

    std::cout << "Initial Cheese Production Rate: " << goat.get_cheeseProductionRate() << " servings" << std::endl;
    goat.set_cheeseProductionRate(5);
    std::cout << "Updated Cheese Production Rate: " << goat.get_cheeseProductionRate() << " servings" << std::endl;

    // Testing summarizing the commodity
    goat.summariseCommodity();

    return 0;
}
