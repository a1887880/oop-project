#include <iostream>
#include "Employee.h"

int main() {
    // create employee object with name and default payDemand
    Employee employee1("John");
    employee1.summariseEmployee();

    // set new name and payDemand
    employee1.set_name("Alice");
    employee1.set_payDemand(150.0);
    employee1.summariseEmployee();

    // create employee object with default values
    Employee employee2;
    employee2.summariseEmployee();

    return 0;
}