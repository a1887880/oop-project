#include <iostream>
#include <vector>
#include "Farm.h" 
#include "Animal.h"
#include "Crop.h" 
#include "Employee.h" 
#include "Inventory.h" 

int main() {
    Farm farm;
    
    farm.InitializeFarm();

    int choice;
    while (true) {
        std::cout << "Farm Simulation Menu:" << std::endl;
        std::cout << "1. View Farm Summary" << std::endl;
        std::cout << "2. Manage Farm (buy/sell land, hire/fire employees)" << std::endl;
        std::cout << "3. Manage Animals (buy animals, feed animals)" << std::endl;
        std::cout << "4. Manage Crops (buy crops, water crops)" << std::endl;
        std::cout << "5. View Inventory" << std::endl;
        std::cout << "6. Fast Forward Time" << std::endl;
        std::cout << "7. Show Payroll" << std::endl;
        std::cout << "8. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                farm.farmSummary();
                break;
            case 2:
                farm.manageFarm();
                break;
            case 3:
                farm.manageAnimals();
                break;
            case 4:
                farm.manageCrops();
                break;
            case 5:
                farm.showInventory();
                break;
            case 6:
                farm.fastForward();
                break;
            case 7:
                farm.showPayroll();
                break;
            case 8:
                std::cout << "Exiting the Farm Simulation." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
