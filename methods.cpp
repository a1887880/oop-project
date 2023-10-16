#include <iostream>
#include <vector>

class Farm {
private:
    std::vector<int> eggs;
    std::vector<int> milk;
    std::vector<int> wool;
    std::vector<int> cheese;
    int finances;
    
    // Define product prices
    int eggPrice;
    int milkPrice;
    int woolPrice;
    int cheesePrice;

public:
    Farm() : finances(1000), eggPrice(5), milkPrice(3), woolPrice(7), cheesePrice(10) {
        // Initialize your inventory and other attributes.
    }

    void showInventory() {
        std::cout << "Farm Inventory:\n";
        std::cout << "Eggs: " << eggs.size() << " (Total value: " << eggs.size() * eggPrice << ")\n";
        std::cout << "Milk: " << milk.size() << " (Total value: " << milk.size() * milkPrice << ")\n";
        std::cout << "Wool: " << wool.size() << " (Total value: " << wool.size() * woolPrice << ")\n";
        std::cout << "Cheese: " << cheese.size() << " (Total value: " << cheese.size() * cheesePrice << ")\n";
    }

    void sellEggs(int amount) {
        if (eggs.size() < amount) {
            std::cout << "Not enough eggs to sell.\n";
            return;
        }
        int profit = amount * eggPrice;
        eggs.erase(eggs.begin(), eggs.begin() + amount);
        finances += profit;
        std::cout << "Sold " << amount << " eggs for a profit of " << profit << ".\n";
    }

    void sellMilk(int amount) {
        if (milk.size() < amount) {
            std::cout << "Not enough milk to sell.\n";
            return;
        }
        int profit = amount * milkPrice;
        milk.erase(milk.begin(), milk.begin() + amount);
        finances += profit;
        std::cout << "Sold " << amount << " units of milk for a profit of " << profit << ".\n";
    }

    void sellWool(int amount) {
        if (wool.size() < amount) {
            std::cout << "Not enough wool to sell.\n";
            return;
        }
        int profit = amount * woolPrice;
        wool.erase(wool.begin(), wool.begin() + amount);
        finances += profit;
        std::cout << "Sold " << amount << " units of wool for a profit of " << profit << ".\n";
    }

    void sellCheese(int amount) {
        if (cheese.size() < amount) {
            std::cout << "Not enough cheese to sell.\n";
            return;
        }
        int profit = amount * cheesePrice;
        cheese.erase(cheese.begin(), cheese.begin() + amount);
        finances += profit;
        std::cout << "Sold " << amount << " units of cheese for a profit of " << profit << ".\n";
    }

    void collectItems(int eggsCollected, int milkCollected, int woolCollected, int cheeseCollected) {
        eggs.insert(eggs.end(), eggsCollected, 1);
        milk.insert(milk.end(), milkCollected, 1);
        wool.insert(wool.end(), woolCollected, 1);
        cheese.insert(cheese.end(), cheeseCollected, 1);
        std::cout << "Collected items from animals.\n";
    }
};
