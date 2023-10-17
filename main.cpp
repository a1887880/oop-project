#include "Farm.h"

#include <cctype>

using namespace std;

int main(void) {
    cout << "Hello and welcome to Farming Simulator!\nIn this game, you will be able to buy, grow and sell both animals and crops to increase the value of your farm as much as possible.\n"
        << "With the help of paid employees to increase the productivity of your farm, this game will simulate a real-life farming environment, in which you will be required\n"
        << "to make business-related decisions regarding land expansion, staff and utility management, and financial-consideration to name a few.\n"
        << "Each day, you can perform a maximum of five tasks around the farm.\n"
        << "Be careful to take great care with finances, otherwise you could find yourself in debt! You will lose the game if this happens.\n"
        << "Anyway you have a lot to do. Good luck farmer!\n\n";

    string name;
    cout << "What do you wish to name your farm (no spaces)? ";
    cin >> name;

    Farm farm(name);

    cout << "\nWelcome to " << farm.get_name() << "!\nHere is a summary of your farm at the moment.\n\n";
    farm.summariseFarm();
    cout << endl;
    
    bool gameOver = false;
    bool success;
    int daysElapsed = 0;
    int choice;
    bool endDay;


    while (gameOver != true) {
        cout << "\n\nIT IS NOW DAY " << daysElapsed << ".\n";
        endDay = false;

        for (int i = 0; i < 5; i++) {
            if (gameOver || endDay) {break;}

            cout << "\nYou have " << 5-i << " actions left today.\n";

            cout << "   1. See information\n   2. Purchase commodity\n   3. Harvest crops\n   4. Manage employees\n   5. Manage inventory\n   6. End day\n   7. End game\n";
            cout << "What action do you wish to perform (enter number associated with that action): ";
            cin >> choice;
            while (choice < 1 || choice > 7) {
                cout << "Invalid input. Please enter an integer between 1 and 7, inclusive: ";
                cin >> choice;
            }
            cout << endl;

            switch (choice) {
                case 1:
                    cout << "What do you wish to see?\n   1. Whole farm summary\n   2. Payroll\n   3. Inventory\n   4. Bank Account\nEnter action: ";
                    cin >> choice;
                    while (choice < 1 || choice > 4) {
                        cout << "Invalid input. Please enter an integer between 1 and 4, inclusive: ";
                        cin >> choice;
                    }

                    switch (choice) {
                        case 1:
                            farm.summariseFarm();
                            break;
                        case 2:
                            farm.showPayroll();
                            break;
                        case 3:
                            farm.inventory.summariseInventory();
                            break;
                        case 4:
                            cout << "\nBank Account - $" << farm.get_bankAccount() << endl;
                            break;
                    }
                    
                    break;
                case 2:
                    cout << "Do wish to purchase an animal (1), or a crop(2): ";
                    cin >> choice;

                    while (choice < 1 || choice > 2) {
                        cout << "Invalid input. Please enter an integer between 1 and 2, inclusive: ";
                        cin >> choice;
                    }
                    
                    if (choice == 1) {
                        cout << "Which animal?\n   1. Chicken - $20\n   2. Sheep - $200\n   3. Goat - $500\n   4. Cow - $1000\n";
                        cout << "Enter desired animal number: ";
                        cin >> choice;

                        while (choice < 1 || choice > 4) {
                            cout << "Invalid input. Please enter an integer between 1 and 4, inclusive: ";
                            cin >> choice;
                        }

                        switch (choice) {
                            case 1:
                                cout << "What should be the name of this Chicken: ";
                                cin >> name;
                                success = farm.buyChicken(name);
                                if (success) {
                                    cout << "Chicken purchased!\n";
                                } else {
                                    cout << "Chicken purchase unsuccessful.\n";
                                }

                                break;
                            case 2:
                                cout << "What should be the name of this Sheep: ";
                                cin >> name;
                                success = farm.buySheep(name);
                                if (success) {
                                    cout << "Sheep purchased!\n";
                                } else {
                                    cout << "Sheep purchase unsuccessful.\n";
                                }

                                break;
                            case 3:
                                cout << "What should be the name of this Goat: ";
                                cin >> name;
                                success = farm.buyGoat(name);
                                if (success) {
                                    cout << "Goat purchased!\n";
                                } else {
                                    cout << "Goat purchase unsuccessful.\n";
                                }

                                break;
                            case 4:
                                cout << "What should be the name of this Cow: ";
                                cin >> name;
                                success = farm.buyCow(name);
                                if (success) {
                                    cout << "Cow purchased!\n";
                                } else {
                                    cout << "Cow purchase unsuccessful.\n";
                                }

                                break;
                        }
                    } else {
                        cout << "Which crop?\n   1. Wheat - $15\n   2. Carrot - $40\n   3. Potato - $70\n   4. Watermelon - $150\n";
                        cout << "Enter desired crop: ";
                        cin >> choice;

                        while (choice < 1 || choice > 4) {
                            cout << "Invalid input. Please enter an integer between 1 and 4, inclusive: ";
                            cin >> choice;
                        }

                        switch (choice) {
                            case 1:
                                success = farm.buyWheat();
                                if (success) {
                                    cout << "Wheat purchased!\n";
                                } else {
                                    cout << "Purchase unsuccessful\n";
                                }

                                break;
                            case 2:
                                success = farm.buyCarrots();
                                if (success) {
                                    cout << "Carrots purchased!\n";
                                } else {
                                    cout << "Purchase unsuccessful\n";
                                }

                                break;
                            case 3:
                                success = farm.buyPotatos();
                                if (success) {
                                    cout << "Potatoes purchased!\n";
                                } else {
                                    cout << "Purchase unsuccessful\n";
                                }

                                break;
                            case 4:
                                success = farm.buyWatermelons();
                                if (success) {
                                    cout << "Watermelons purchased!\n";
                                } else {
                                    cout << "Purchase unsuccessful\n";
                                }

                                break;
                        }
                    }

                    break;
                case 3:
                    cout << "Which crop do you wish to sell?\n   1. Wheat\n   2. Carrot\n   3. Potato\n   4. Watermelon\n";
                    cout << "Enter desired crop: ";
                    cin >> choice;

                    while (choice < 1 || choice > 4) {
                        cout << "Invalid input. Please enter an integer between 1 and 4, inclusive: ";
                        cin >> choice;
                    }

                    switch (choice) {
                        case 1:
                            cout << "Which wheat crop patch?\n";
                            farm.summariseCrop(farm.get_wheat(), farm.get_numWheat());

                            cout << "Enter number of desired crop: ";
                            cin >> choice;

                            while (choice < 0 || choice >= farm.get_numWheat()) {
                                cout << "Invalid input. Please enter a number between 0 and " << farm.get_numWheat() << ", inclusive: ";
                                cin >> choice;
                            }

                            success = farm.sellCrop(farm.get_wheat(), choice, farm.get_numWheat());

                            break;
                        case 2:
                            cout << "Which carrot crop patch?\n";
                            farm.summariseCrop(farm.get_carrots(), farm.get_numCarrots());

                            cout << "Enter number of desired crop: ";
                            cin >> choice;

                            while (choice < 0 || choice >= farm.get_numCarrots()) {
                                cout << "Invalid input. Please enter a number between 0 and " << farm.get_numCarrots() << ", inclusive: ";
                                cin >> choice;
                            }

                            success = farm.sellCrop(farm.get_carrots(), choice, farm.get_numCarrots());

                            break;
                        case 3:
                            cout << "Which potato crop patch?\n";
                            farm.summariseCrop(farm.get_potatos(), farm.get_numPotatos());

                            cout << "Enter number of desired crop: ";
                            cin >> choice;

                            while (choice < 0 || choice > farm.get_numPotatos()) {
                                cout << "Invalid input. Please enter a number between 0 and " << farm.get_numPotatos() << ", inclusive: ";
                                cin >> choice;
                            }

                            success = farm.sellCrop(farm.get_potatos(), choice, farm.get_numPotatos());

                            break;
                        case 4:
                            cout << "Which watermelon crop patch?\n";
                            farm.summariseCrop(farm.get_watermelons(), farm.get_numWatermelons());

                            cout << "Enter number of desired crop: ";
                            cin >> choice;

                            while (choice < 0 || choice > farm.get_numWatermelons()) {
                                cout << "Invalid input. Please enter a number between 0 and " << farm.get_numWatermelons() << ", inclusive: ";
                                cin >> choice;
                            }

                            success = farm.sellCrop(farm.get_watermelons(), choice, farm.get_numWatermelons());

                            break;
                    }

                    break;
                case 4:
                    cout << "How do you wish to manage employees?\n   1. Hire\n";
                    cout << "Enter action: ";
                    cin >> choice;

                    while (choice != 1) {
                        cout << "Invalid input. Please enter 1: ";
                        cin >> choice;
                    }

                    if (choice == 1) {
                        cout << "What should this employee be named: ";
                        string empName;
                        cin >> empName;
                        success = farm.hireEmployee(empName);
                        if (success) {
                            cout << empName << " hired!\n";
                        } else {
                            cout << empName << " rejected your offer.\n";
                        }
                    }

                    break;
                case 5:
                    cout << "What do you wish to do:\n   1. Sell collectibles\n   2. Buy Feed\nEnter action: ";
                    cin >> choice;

                    while (choice < 1 || choice > 2) {
                        cout << "Invalid input. Please enter integer between 1 and 2, inclusive: ";
                        cin >> choice;
                    }

                    if (choice == 1) {
                        int increment = 0;
                        increment += (farm.inventory.get_numEggs()*2 + farm.inventory.get_numWool()*10 + farm.inventory.get_numCheese()*6 + farm.inventory.get_numMilk()*5);
                        farm.set_bankAccount(farm.get_bankAccount() + increment);
                        farm.inventory.emptyCollectables();
                        cout << "Collectibles sold! You made $" << increment << endl;
                    } else {
                        int feedAmount;
                        cout << "How much feed: ";
                        cin >> feedAmount;
                        farm.inventory.buyFeed(feedAmount);
                        farm.set_bankAccount(farm.get_bankAccount() - feedAmount);
                        cout << "Animal feed purchased. It cost you $" << feedAmount << endl;
                    }

                    break;
                case 6:
                    cout << "Ok! Ending day...\n";
                    endDay = true;
                    break;
                case 7:
                    cout << "Are you sure you wish to end game (0 for no, 1 for yes)? ";
                    cin >> choice;
                    if (choice == 1) {
                        gameOver = true;
                    }

                    break;
            }
        }

        farm.inventory.increase_numEggs(farm.get_numChickens()*2);
        farm.inventory.increase_numWool(farm.get_numSheep());
        farm.inventory.increase_numCheese(farm.get_numGoats()*5);
        farm.inventory.increase_numMilk(farm.get_numCows()*8);

        farm.increaseValues();
        daysElapsed++;

        farm.ageCommodities();
        farm.terminateAgedCommodities();

        farm.set_bankAccount(farm.get_bankAccount()-(farm.get_numEmployees()*100));
        if (farm.get_bankAccount() < 0) {
            cout << "Oh no! Your account balance is $" << farm.get_bankAccount() 
                << " which means you have gone bankrupt. Your farm has now been taken from you.\n";
            break;
        }
    }

    cout << "Thank you for playing Farming Simulator.\n";
    cout << "Do you wish to save a record of your results (no - 0, yes - 1)? ";
    cin >> choice;

    cout << "Ok!\n";
    if (choice == 1) {
        farm.saveData();
        cout << "Data saved to FarmInfo.txt\n";
    }

    cout << "GAME OVER\n";
    
    return 0;
}