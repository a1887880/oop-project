#include <iostream>
#include "Cow.h"

int main() {
    // Creating a Cow object
    Cow cow("Bessie");

    // Testing getters and setters
    std::cout << "Initial Name: " << cow.get_name() << std::endl;

    std::cout << "Initial Milk Production Rate: " << cow.get_milkProductionRate() << " Litres" << std::endl;
    cow.set_milkProductionRate(20);
    std::cout << "Updated Milk Production Rate: " << cow.get_milkProductionRate() << " Litres" << std::endl;

    // Testing summarizing the commodity
    cow.summariseCommodity();

    return 0;
}
