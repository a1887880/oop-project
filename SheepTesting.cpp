#include <iostream>
#include "Sheep.h"

int main() {
    // Creating a Sheep object
    Sheep sheep("Shirley");

    // Testing getters and setters
    std::cout << "Initial Name: " << sheep.get_name() << std::endl;

    std::cout << "Initial Wool Production Rate: " << sheep.get_woolProductionRate() << " Kilograms" << std::endl;
    sheep.set_woolProductionRate(2);
    std::cout << "Updated Wool Production Rate: " << sheep.get_woolProductionRate() << " Kilograms" << std::endl;

    // Testing summarizing the commodity
    sheep.summariseCommodity();

    return 0;
}
