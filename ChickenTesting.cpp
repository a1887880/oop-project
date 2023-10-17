#include <iostream>
#include "Chicken.h"

int main() {
    // Creating a Chicken object
    Chicken chicken("Cluckers");

    // Testing getters and setters
    std::cout << "Initial Name: " << chicken.get_name() << std::endl;

    std::cout << "Initial Egg Production Rate: " << chicken.get_eggProductionRate() << std::endl;
    chicken.set_eggProductionRate(2);
    std::cout << "Updated Egg Production Rate: " << chicken.get_eggProductionRate() << std::endl;

    // Testing summarizing the commodity
    chicken.summariseCommodity();

    return 0;
}
