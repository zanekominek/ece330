/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() 
{
  HourlyEmployee
  e1 (001, "Kominek", "Zane", "T", 22, 100, 40),
  e2 (002, "Nafchi", "Amir", "R ", 14, 10000000, 1),
  e3 (003, "Tentacles", "Squidward", "Q", 03, 4, 40);
  
  SalariedEmployee
  e4 (004, "Obama", "Barack", "H", 89, 400000),
  e5(005, "Floofenheimen", "Freidrich", "V", 17, 500000),
  e6(006, "Names", "Out", "O", 10, 60000);
  e1.printEmployee();
  e2.printEmployee();
  e3.printEmployee();
  e4.printEmployee();
  e5.printEmployee();
  e6.printEmployee();

}
