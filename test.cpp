#include "Farm.h"

int main(void) {
    Farm F("Ryan's Farm");

    F.hireEmployee("Jarrod");
    F.showPayroll();

    F.summariseFarm();

    F.set_bankAccount(100000);
    F.buyWatermelons();
    F.buyWatermelons();
    cout << "NumWatermelons: " << F.get_numWatermelons() << endl;

    F.get_watermelons()[0].grow();
    //F.get_watermelons()[0].set_value(10);
    F.increaseValues();
    cout << F.get_watermelons()[0].get_value() << endl;

    F.summariseCrop(F.get_watermelons(), F.get_numWatermelons());
}