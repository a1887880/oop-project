#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

// employee class declaration

class Employee {
    private:
        string name;
        double payDemand; // stores daily cost of employment
        
    public:
        // parameterised constructor for employee class
        Employee(string name);

        // default constructor for employee class
        Employee();

        // getter for employee's name
        string get_name();

        // setter for employee's name
        void set_name(string newName);

        // getter for employee's daily pay demand
        double get_payDemand();

        // setter for employee's daily pay demand
        void set_payDemand(double newPayDemand);

        // method to display summary of employee's information
        void summariseEmployee();
};

#endif