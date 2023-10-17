#include <iostream>
#include "Farm.h"

using namespace std;

int main() {
    // Create a farm with a name
    Farm F("Bill's Farm");

    // Test getters
    cout << "Farm Name: " << F.get_name() << endl; // expected "Bill's Farm"
    cout << "Bank Account: $" << F.get_bankAccount() << endl; // expected: 30
    cout << "Number of Chickens: " << F.get_numChickens() << endl; // expected: 0
    cout << "Number of Sheep: " << F.get_numSheep() << endl; // expected: 0
    cout << "Number of Wheat Units: " << F.get_numWheat() << endl; // expected: 0
    cout << "Number of Employees: " << F.get_numEmployees() << endl; // expected: 0

    // Buy some animals and crops
    if (F.buyChicken("Chicken 1")) { // expected to print purchased
        cout << "Chicken 1 purchased\n";
    } else {
        cout << "Chicken 1 purchase failed\n";
    }

    if (F.buySheep("Sheep 1")) { // expected to print failure message
        cout << "Sheep 1 purchased\n";
    } else {
        cout << "Sheep 1 purchase failed\n";
    }

    if (F.buyWheat()) { // expected to return false
        cout << "Wheat purchase successful\n";
    } else {
        cout << "Wheat purchase unsuccessful\n";
    }

    F.set_bankAccount(20);
    if (F.buyWheat()) { // expected to return true
        cout << "Wheat purchase successful\n";
    } else {
        cout << "Wheat purchase unsuccessful\n";
    }

    // prints values after altering some
    cout << "New number of Chickens: " << F.get_numChickens() << endl;
    cout << "New number of Sheep: " << F.get_numSheep() << endl;
    cout << "New number of Wheat Units: " << F.get_numWheat() << endl;
    cout << "Number of Cows: " << F.get_numCows() << endl;

    // Test buyLand function
    if (F.buyLand()) {
        std::cout << "Land Area Increased.\n";
    } else {
        std::cout << "Not enough funds to buy land." << std::endl;
    }

    F.set_bankAccount(10000001); // sets bank account large enough to buy land

    // Test buyLand function
    if (F.buyLand()) {
        std::cout << "Land Area Increased.\n";
    } else {
        std::cout << "Not enough funds to buy land.\n" << std::endl;
    }

    // Hire an employee
    F.hireEmployee("John Doe");
    F.showPayroll();

    // Test sellAnimal and sellCrop functions
    F.sellAnimal(F.get_chickens(), 0, F.get_numChickens());
    F.sellCrop(F.get_wheat(), 0, F.get_numWheat());

    // Test increaseValues function
    F.increaseValues();

    // Test ageCommodities function
    F.ageCommodities();

    // Test terminateAgedCommodities function
    F.terminateAgedCommodities();

    // Summarize the farm; includes calls to showPayroll and summariseInventory functions so tests them as well
    F.summariseFarm();

    // Save farm data to a file
    F.saveData();

    return 0;
}

//g++ FarmTest.cpp Farm.o Inventory.o Employee.o Commodity.o Animal.o Crop.o Chicken.o Sheep.o Goat.o Cow.o Wheat.o Carrot.o Potato.o Watermelon.o -Wall -std=c++11 -o test