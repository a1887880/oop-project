#include "Farm.h"

// constructs Farm from name parameter
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
// default constructor for Farm
Farm::Farm() : Farm("") {}

// getters
int Farm::get_bankAccount() {return bankAccout;}
string Farm::get_name() {return name;}
int Farm::get_numChickens() {return numChickens;}
int Farm::get_numSheep() {return numSheep;}
int Farm::get_numGoats() {return numGoats;}
int Farm::get_numCows() {return numCows;}
int Farm::get_numWheat() {return numWheat;}
int Farm::get_numCarrots() {return numCarrots;}
int Farm::get_numPotatos() {return numPotatos;}
int Farm::get_numWatermelons() {return numWatermelons;}
int Farm::get_numEmployees() {return numEmployees;}
Chicken* Farm::get_chickens() {return chickens;}
Sheep* Farm::get_sheep() {return sheep;}
Goat* Farm::get_goats() {return goats;}
Cow* Farm::get_cows() {return cows;}
Wheat* Farm::get_wheat() {return wheat;}
Carrot* Farm::get_carrots() {return carrots;}
Potato* Farm::get_potatos() {return potatos;}
Watermelon* Farm::get_watermelons() {return watermelons;}
Employee* Farm::get_employees() {return employees;}

// sets new bankAccount
void Farm::set_bankAccount(int newValue) {bankAccout = newValue;}


void Farm::summariseCrop(Crop* crops, int numCrops) {
    cout << "Crop number | Value | stage of life / max stages\n"; // shows layout of summary

    // iterates through each crop in array to summarise
    for (int i = 0; i < numCrops; i++) {
        cout << i << " | " << crops[i].get_value() << " | " 
            << crops[i].get_stageOfLife() << "/" << crops[i].get_maxLifeStage() << endl;
    }
}

bool Farm::buyLand() {
    // expands land area if bank account is large enough
    if (bankAccout > 10000000) {
        landArea += 10000;
        bankAccout -= 10000000;
        
        return true;
    } else {
        return false;
    }
}

bool Farm::hireEmployee(string name) {
    // hires employee if maxEmployees is not reached
    if (numEmployees < maxEmployees) {
        Employee employee(name); // instantiates employee
        employees[numEmployees] = employee; // adds employee to array
        numEmployees++; // increments numEmployees
        return true;
    } else {
        return false;
    }
}

bool Farm::fireEmployee(int empIndex) {
    // checks there is an employee to fire
    if (numEmployees > 0) {
        // shuffles array to remove employee 
        for (int i = empIndex-1; i < numEmployees-1; i++) {
            employees[i] = employees[i+1];
        }
        numEmployees -= 1; // reduces numEmployees

        return true;
    } else {
        return false;
    }
}

void Farm::showPayroll() {
    cout << "Number of Employees: " << numEmployees << endl; // shows number of employees hired
    
    // iterates through to summarise each individual employee
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << i + 1 << endl;
        employees[i].summariseEmployee();
        cout << endl;
    }
}

bool Farm::buyChicken(string name) {
    // buys chicken given sufficient funds
    if (bankAccout > 20 && numChickens < maxPerAnimal) {
        Chicken chicken(name); // instantiates chicken
        chickens[numChickens] = chicken; // adds chicken to array
        numChickens++; // increments chicken count
        bankAccout -= 20; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::buySheep(string name) {
    // executes given sufficient funds
    if (bankAccout > 200 && numSheep < maxPerAnimal) {
        Sheep _sheep(name); // instantiates sheep
        sheep[numSheep] = _sheep; // adds sheep to array
        numSheep++; // increments count
        bankAccout -= 200; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::buyGoat(string name) {
    // executes given sufficient funds
    if (bankAccout > 500 && numGoats < maxPerAnimal) {
        Goat goat(name); // instantiates goat
        goats[numGoats] = goat; // adds goat to array
        numGoats++; // increments count 
        bankAccout -= 500; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::buyCow(string name) {
    // adds cow given sufficient funds
    if (bankAccout > 1000 && numCows < maxPerAnimal) {
        Cow cow(name); //instantiates cow object
        cows[numCows] = cow; // adds cow to array
        numCows++; // increments cow count
        bankAccout -= 1000; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::sellAnimal(Animal *animal, int n, int numAnimals) {
    // checks there is animal to sell
    if (numAnimals > 0) {
        bankAccout += animal[n].get_value(); // adds value to bank account

        // shuffles array to remove unwanted animal
        for (int i = n; i < numAnimals-1; i++) {
            animal[n] = animal[n+1];
        }
        numAnimals -= 1; // decreases count

        return true;
    } else {
        return false;
    }
}

bool Farm::buyWheat() {
    // executes given sufficient conditions 
    if (bankAccout > 15 && numWheat < maxPerCrop) {
        Wheat W; // instantiates wheat object
        wheat[numWheat] = W; // adds wheat object to array
        numWheat++; // increases count
        bankAccout -= 15; // subtracts cost of wheat
        return true;
    } else {
        return false;
    }
}

bool Farm::buyCarrots() {
    // executes given sufficient conditions
    if (bankAccout > 40 && numCarrots < maxPerCrop) {
        Carrot carrot; // instantiates carrot
        carrots[numCarrots] = carrot; // adds carrot to array
        numCarrots++; // increases count
        bankAccout -= 40; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::buyPotatos() {
    if (bankAccout > 70 && numPotatos < maxPerCrop) {
        Potato potato; // instantiates potato
        potatos[numPotatos] = potato; // adds potato to array
        numPotatos++; // increases count
        bankAccout -= 70; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::buyWatermelons() {
    if (bankAccout > 150 && numWatermelons < maxPerCrop) {
        Watermelon watermelon; // instantiates watermelon
        watermelons[numWatermelons] = watermelon; // adds watermelon to array
        numWatermelons++; // increases count
        bankAccout -= 150; // subtracts cost
        return true;
    } else {
        return false;
    }
}

bool Farm::sellCrop(Crop* crop, int n, int numCrops) {
    // checks there is crop to sell
    if (numCrops > 0) {
        bankAccout += crop[n].get_value(); // adds value of crop to bank account

        // reshuffles array to remove crop
        for (int i = n; i < numCrops-1; i++) {
            crop[i] = crop[i+1];
        }
        numCrops -= 1; // decreases count

        return true;
    } else {
        return false;
    }
}

void Farm::increaseValues() {
    int newValue; // declares newValue used in each loop

    // increases value of each chicken
    for (int i = 0; i < numChickens; i++) {
        newValue = chickens[i].get_value() + 1;
        chickens[i].set_value(newValue);
    }
    // increases value of each sheep
    for (int i = 0; i < numSheep; i++) {
        newValue = sheep[i].get_value() + 2;
        sheep[i].set_value(newValue);
    }
    // increases value of each goat
    for (int i = 0; i < numGoats; i++) {
        newValue = goats[i].get_value() + 3;
        goats[i].set_value(newValue);
    }
    // increases value of each cow
    for (int i = 0; i < numCows; i++) {
        newValue = cows[i].get_value() + 4;
        cows[i].set_value(newValue);
    }  
    // increases value of each wheat
    for (int i = 0; i < numWheat; i++) {
        newValue = wheat[i].get_value() + 3;
        wheat[i].set_value(newValue);
    }
    // increases vcalue of each carrot
    for (int i = 0; i < numCarrots; i++) {
        newValue = carrots[i].get_value() + 6;
        carrots[i].set_value(newValue);
    }
    // increases value of each potato
    for (int i = 0; i < numPotatos; i++) {
        newValue = potatos[i].get_value() + 10;
        potatos[i].set_value(newValue);
    }
    // increases value of each watermelon
    for (int i = 0; i < numWatermelons; i++) {
        newValue = watermelons[i].get_value() + 20;
        watermelons[i].set_value(newValue);
    }       
}

void Farm::ageCommodities() {
    // ages chickens
    for (int i = 0; i < numChickens; i++) {
        chickens[i].grow();
    }
    // ages sheep
    for (int i = 0; i < numSheep; i++) {
        sheep[i].grow();
    }
    // ages goats
    for (int i = 0; i < numGoats; i++) {
        goats[i].grow();        
    }
    // ages cows
    for (int i = 0; i < numCows; i++) {
        cows[i].grow();
    }  
    // ages wheat
    for (int i = 0; i < numWheat; i++) {
        wheat[i].grow();
    }
    // ages carrots
    for (int i = 0; i < numCarrots; i++) {
        carrots[i].grow();
    }
    // ages potatoes
    for (int i = 0; i < numPotatos; i++) {
        potatos[i].grow();
    }
    // ages watermelons
    for (int i = 0; i < numWatermelons; i++) {
        watermelons[i].grow();
    }  
}

void Farm::terminateAgedCommodities() {
    bool success; // declares boolean value

    // terminates any chickens thatres too old
    for (int i = 0; i < numChickens; i++) {
        if (chickens[i].get_stageOfLife() >= chickens[i].get_maxLifeStage()) {
            success = sellAnimal(chickens, i, numChickens);
            if (success) {
                cout << "Chicken sold due to age.\n";
            }
        }
    }
    // terminates any sheep too old
    for (int i = 0; i < numSheep; i++) {
        if (sheep[i].get_stageOfLife() >= sheep[i].get_maxLifeStage()) {
            success = sellAnimal(sheep, i, numSheep);
            if (success) {
                cout << "Sheep sold due to age.\n";
            }
        }
    }
    // terminates any goats necessaary
    for (int i = 0; i < numGoats; i++) {
        if (goats[i].get_stageOfLife() >= goats[i].get_maxLifeStage()) {
            success = sellAnimal(goats, i, numGoats);
            if (success) {
                cout << "Goat sold due to age.\n";
            }
        }       
    }
    // terminates any cows necessary
    for (int i = 0; i < numCows; i++) {
        if (cows[i].get_stageOfLife() >= cows[i].get_maxLifeStage()) {
            success = sellAnimal(cows, i, numCows);
            if (success) {
                cout << "Cow sold due to age.\n";
            }
        }  
    }  
    // terminates any wheat necessary
    for (int i = 0; i < numWheat; i++) {
        if (wheat[i].get_stageOfLife() >= wheat[i].get_maxLifeStage()) {
            success = sellCrop(wheat, i, numWheat);
            if (success) {
                cout << "Wheat sold due to age.\n";
            }
        }  
    }
    // terminates any carrots necessary
    for (int i = 0; i < numCarrots; i++) {
        if (carrots[i].get_stageOfLife() >= carrots[i].get_maxLifeStage()) {
            success = sellCrop(carrots, i, numCarrots);
            if (success) {
                cout << "Carrots sold due to age.\n";
            }
        }  
    }
    // terminates any potatoes necessary
    for (int i = 0; i < numPotatos; i++) {
        if (potatos[i].get_stageOfLife() >= potatos[i].get_maxLifeStage()) {
            success = sellCrop(potatos, i, numPotatos);
            if (success) {
                cout << "Potatoes sold due to age.\n";
            }
        }  
    }
    // terminates any watermelon necessary
    for (int i = 0; i < numWatermelons; i++) {
        if (watermelons[i].get_stageOfLife() >= watermelons[i].get_maxLifeStage()) {
            success = sellCrop(watermelons, i, numWatermelons);
            if (success) {
                cout << "Watermelons sold due to age.\n";
            }
        }  
    }  
}

void Farm::summariseFarm() {
    // generates summary message for whole farm
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
    
    // generates summary of inventory
    cout << "Inventory\n";
    inventory.summariseInventory();

    // generates summary of employees
    cout << "\nPayroll\n";
    showPayroll();
}

void Farm::saveData() {
    ofstream file("FarmInfo.txt"); // opens file that will store game data

    // writes the following to file
    file << "Farm Summary" << endl 
        << "Farm Name: " << name << endl 
        << "Value: " << value << endl
        << "Land Area: " << landArea << endl
        << "Bank Account: " << bankAccout << endl
        << "Number of Animals: " << numChickens+numSheep+numGoats+numCows << endl
        << "Number of Crops: " << numWheat+numCarrots+numPotatos+numWatermelons << endl
        << "Number of Employees: " << numEmployees << endl;

    // closes file
    file.close();
}

Farm::~Farm() {
    // deallocates each dynamic array that is apart of farm
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