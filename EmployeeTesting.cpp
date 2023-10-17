#include <iostream>

#include "Employee.h"

int main() {
  // create employee object with name and default payDemand
  Employee employee1("John");
  employee1.summariseEmployee();

  cout<<"\n"<<endl;

  // set new name and payDemand
  employee1.set_name("Alice");
  employee1.set_payDemand(150.0);
  employee1.summariseEmployee();

  return 0;
}