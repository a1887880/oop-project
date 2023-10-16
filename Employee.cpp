#include "Employee.h"

Employee::Employee(string name) {
    this->name = name;
    payDemand = 100;
}
Employee::Employee() : Employee("") {}

string Employee::get_name() {return name;}
void Employee::set_name(string newName) {name = newName;}

double Employee::get_payDemand() {return payDemand;}
void Employee::set_payDemand(double newPayDemand) {payDemand = newPayDemand;}

void Employee::summariseEmployee() {
    cout << "Name: " << name << endl
        << "Pay Demand (Daily): " << payDemand << endl;
}