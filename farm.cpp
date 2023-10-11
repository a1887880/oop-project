#include <iostream>
#include <vector>
#include <string>

class Commodity {
public:
    double value;
    int stageOfLife;

    virtual void Grow() = 0;
};

class Animal : public Commodity {
public:
    std::string name;
    int feedingRequirement;
    int hungerRating;

    void Grow() override {
        //animal growth
    }

    void feedAnimal() {
        //animal feeding
    }
};

class Crop : public Commodity {
public:
    int waterDemands;
    int waterSaturationRating;

    void Grow() override {
        //crop growth
    }

    void waterPlants() {
        //crop watering
    }
};

class Employee {
public:
    std::string name;
    std::string role;
    double salary;

    void employeeDetails() {
        //employee details
    }

    void upgradeEmployee() {
        //employee upgrade
    }
};

class Inventory {
public:
    int eggsQuantity;
    int milkQuantity;
    int woolQuantity;
    int cheeseQuantity;
    double eggsValue;
    double milkValue;
    double woolValue;
    double cheeseValue;

    void showInventory() {
        //display inventory
    }

    void sellEggs() {
        //egg selling 
    }

    void sellMilk() {
        //milk selling 
    }

    void sellWool() {
        //wool selling 
    }

    void sellCheese() {
        //cheese selling 
    }

    void collectItems() {
        //item collection 
    }
};

class Farm {
public:
    int landArea;
    std::vector<Animal*> animals;
    std::vector<Crop*> crops;
    std::vector<Employee*> employees;
    double value;
    double bankAccount;
    Inventory inventory;

    void farmSummary() {
        //farm summary
    }

    void buyLand() {
        //land buying 
    }

    void sellLand() {
        //land selling 
    }

    void hireEmployee(Employee* employee) {
        //employee hiring 
    }

    void fireEmployee(Employee* employee) {
        //employee firing 
    }

    void buyAnimal(Animal* animal) {
        //animal buying 
    }

    void buyCrop(Crop* crop) {
        //crop buying 
    }

    void fastForward() {
        //fast-forwarding 
    }

    void showPayroll() {
        //payroll details
    }
};

int main() {
    

    return 0;
}