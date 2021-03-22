/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() 
{
  HourlyEmployee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI ", 14),
  e3 (003, "Morrison", "Jim", "D", 03);
  
  SalariedEmployee
  e4 (),
  e5(),
  e6();
  e1.printEmployee();
  e2.printEmployee();
  e3.printEmployee();
  e4.printEmployee();
  e5.printEmployee();
  e6.printEmployee();

}
