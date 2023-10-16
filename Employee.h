#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        string name;
        double payDemand; // daily cost of employeement
    public:
        Employee(string name);
        Employee();

        string get_name();
        void set_name(string newName);

        double get_payDemand();
        void set_payDemand(double newPayDemand);

        void summariseEmployee();
};

#endif