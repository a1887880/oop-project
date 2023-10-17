#include "Farm.h"

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

    cout << "Welcome to " << farm.get_name() << "!\nHere is a summary of your farm at the moment.\n\n";
    farm.summariseFarm();
    
    bool gameOver = false;
    bool success;
    int daysElapsed = 0;
    int choice;


    while (gameOver != true) {
        cout << "It is day 0.\n";

        for (int i = 0; i < 5; i++) {

            cout << "You have " << 5-i << " actions left today.\n";

            cout << "    1. See information\n    2. Purchase commodity\n   3. Harvest crop\n    4. Manage employees\n   5. Manage inventory\n   6. End day\n   7. End game\n";
            cout << "What action do you wish to perform (enter number associated with that action): ";
            cin >> choice;
            while (choice < 1 || choice > 7) {
                cout << "Invalid input. Please enter an integer between 1 and 7, inclusive: ";
                cin >> choice;
            }

            switch (choice) {
                case 1:
                    cout << "What do you wish to see?\n   1. Whole farm summary\n   2. Payroll\n   3. Inventory\n Enter action: ";
                    cin >> choice;
                    while (choice < 1 || choice > 3) {
                        cout << "Invalid input. Please enter an integer between 1 and 3, inclusive: ";
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
                    
                case 4:
                case 5:
                case 6:
                case 7:
            }
        }
    }



    return 0;
}