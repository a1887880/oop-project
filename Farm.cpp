#include "Farm.h"

Farm::Farm(string name) {
    this->name = name;
    landArea = 1000;
    value = 10000000;
    bankAccout = 30;

    numChickens = 0;
    numSheep = 0;
    numGoats = 0;
    numCows = 0;

    numWheat = 0;
    numCarrots = 0;
    numPotatos = 0;
    numWatermelons = 0;

    numEmployees = 0;

    maxPerAnimal = 10;
    maxPerCrop = 10;
    maxEmployees = 10;

    chickens = new Chicken[10];
    sheep = new Sheep[10];
    goats = new Goat[10];
    cows = new Cow[10];

    wheat = new Wheat[10];
    carrots = new Carrot[10];
    potatos = new Potato[10];
    watermelons = new Watermelon[10];

    employees = new Employee[10];
}

Farm::Farm() : Farm("") {}

string Farm::get_name() {return name;}

bool Farm::buyLand() {
    if (bankAccout > 10000000) {
        landArea += 10000;
        
        return true;
    } else {
        return false;
    }
}

bool Farm::hireEmployee(string name) {
    if (numEmployees < maxEmployees) {
        Employee employee(name);
        employees[numEmployees] = employee;
        numEmployees++;
        return true;
    } else {
        return false;
    }
}

void Farm::showPayroll() {
    cout << "Number of Employees: " << numEmployees << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 << endl;
        employees[i].summariseEmployee();
        cout << endl;
    }
}

bool Farm::buyChicken(string name) {
    if (bankAccout > 20 && numChickens < maxPerAnimal) {
        Chicken chicken(name);
        chickens[numChickens] = chicken;
        numChickens++;
        bankAccout -= 20;
        return true;
    } else {
        return false;
    }
}

bool Farm::buySheep(string name) {
    if (bankAccout > 200 && numSheep < maxPerAnimal) {
        Sheep _sheep(name);
        sheep[numSheep] = _sheep;
        numSheep++;
        bankAccout -= 200;
        return true;
    } else {
        return false;
    }
}

bool Farm::buyGoat(string name) {
    if (bankAccout > 500 && numGoats < maxPerAnimal) {
        Goat goat(name);
        goats[numGoats] = goat;
        numGoats++;
        bankAccout -= 500;
        return true;
    } else {
        return false;
    }
}

bool Farm::buyCow(string name) {
    if (bankAccout > 1000 && numCows < maxPerAnimal) {
        Cow cow(name);
        cows[numCows] = cow;
        numCows++;
        bankAccout -= 1000;
        return true;
    } else {
        return false;
    }
}

bool Farm::sellAnimal(Animal *animal, int n, int numAnimals) {
    if (numAnimals > 0) {
        bankAccout += animal[n].get_value();

        for (int i = n; i < numAnimals-1; i++) {
            animal[n] = animal[n+1];
        }
        numAnimals -= 1;

        return true;
    } else {
        return false;
    }
}

bool Farm::buyWheat() {
    if (bankAccout > 15 && numWheat < maxPerCrop) {
        Wheat W;
        wheat[numWheat] = W;
        numWheat++;
        bankAccout -= 15;
        return true;
    } else {
        return false;
    }
}

bool Farm::buyCarrots() {
    if (bankAccout > 40 && numCarrots < maxPerCrop) {
        Carrot carrot;
        carrots[numCarrots] = carrot;
        numCarrots++;
        bankAccout -= 40;
        return true;
    } else {
        return false;
    }
}

bool Farm::buyPotatos() {
    if (bankAccout > 70 && numPotatos < maxPerCrop) {
        Potato potato;
        potatos[numPotatos] = potato;
        numPotatos++;
        bankAccout -= 70;
        return true;
    } else {
        return false;
    }
}

bool Farm::buyWatermelons() {
    if (bankAccout > 150 && numWatermelons < maxPerCrop) {
        Watermelon watermelon;
        watermelons[numWatermelons] = watermelon;
        numWatermelons++;
        bankAccout -= 150;
        return true;
    } else {
        return false;
    }
}

bool Farm::sellCrop(Crop* crop, int n, int numCrops) {
    if (numCrops > 0) {
        bankAccout += crop[n].get_value();

        for (int i = n; i < numCrops-1; i++) {
            crop[n] = crop[n+1];
        }
        numCrops -= 1;

        return true;
    } else {
        return false;
    }
}

void Farm::increaseValues() {
    for (int i = 0; i < numChickens; i++) {
        int newValue = chickens[i].get_value() + 1;
        chickens[i].set_value(newValue);
    }
    for (int i = 0; i < numSheep; i++) {
        int newValue = sheep[i].get_value() + 2;
        sheep[i].set_value(newValue);
    }
    for (int i = 0; i < numGoats; i++) {
        int newValue = goats[i].get_value() + 3;
        goats[i].set_value(newValue);
    }
    for (int i = 0; i < numCows; i++) {
        int newValue = cows[i].get_value() + 4;
        cows[i].set_value(newValue);
    }  

    for (int i = 0; i < numWheat; i++) {
        int newValue = wheat[i].get_value() + 3;
        wheat[i].set_value(newValue);
    }
    for (int i = 0; i < numCarrots; i++) {
        int newValue = carrots[i].get_value() + 6;
        carrots[i].set_value(newValue);
    }
    for (int i = 0; i < numPotatos; i++) {
        int newValue = potatos[i].get_value() + 10;
        potatos[i].set_value(newValue);
    }
    for (int i = 0; i < numCows; i++) {
        int newValue = cows[i].get_value() + 20;
        cows[i].set_value(newValue);
    }       
}

void Farm::summariseFarm() {
    cout << "General Information" << endl 
        << "Farm Name: " << name << endl 
        << "Value: " << value << endl
        << "Land Area: " << landArea << endl
        << "Bank Account: " << bankAccout << endl << endl 

        << "Animals" << endl
        << "Number of Chickens: " << numChickens << endl
        << "Numbers Sheep: " << numSheep << endl
        << "Number of Goats: " << numGoats << endl
        << "Number of Cows: " << numCows << endl << endl

        << "Crops\n"
        << "Units of Wheat: " << numWheat << endl
        << "Units of Carrots: " << numCarrots << endl
        << "Units of Potatoes: " << numPotatos << endl
        << "Units of Watermelon: " << numWatermelons << endl << endl;
    
    cout << "Inventory\n";
    inventory.summariseInventory();

    cout << "\nPayroll\n";
    showPayroll();
}

void Farm::saveData() {
    ofstream file("FarmInfo.txt");

    file << "Farm Summary" << endl 
        << "Farm Name: " << name << endl 
        << "Value: " << value << endl
        << "Land Area: " << landArea << endl
        << "Bank Account: " << bankAccout << endl
        << "Number of Animals: " << numChickens+numSheep+numGoats+numCows << endl
        << "Number of Crops: " << numWheat+numCarrots+numPotatos+numWatermelons << endl
        << "Number of Employees: " << numEmployees << endl;


    file.close();
}

Farm::~Farm() {
    delete[] chickens;
    delete[] sheep;
    delete[] goats;
    delete[] cows;

    delete[] wheat;
    delete[] carrots;
    delete[] potatos;
    delete[] watermelons;

    delete[] employees;
}