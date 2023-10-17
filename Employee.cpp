#include "Employee.h"

// constructor with parameter for employee class
Employee::Employee(string name) {
    this->name = name;
    payDemand = 100;
}

// default constructor for employee class and calls the parameterised constructor with empty string
Employee::Employee() : Employee("") {}

// getter for employee's name
string Employee::get_name() {
    return name;
}

// setter for employee's name
void Employee::set_name(string newName) {
    name = newName;
}

// getter for employee's pay demand (daily wage)
double Employee::get_payDemand() {
    return payDemand;
}

// setter for employee's pay demand (daily wage)
void Employee::set_payDemand(double newPayDemand) {
    payDemand = newPayDemand;
}

// method to display summary of employee's information
void Employee::summariseEmployee() {
    cout << "Name: " << name << endl
        << "Pay Demand (Daily): " << payDemand << endl;
}