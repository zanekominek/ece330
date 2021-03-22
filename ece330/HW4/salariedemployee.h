#ifndef SALARIEDEMPLOYEE
#define SALARIEDEMPLOYEE

#include <string>
#include "employee.h"
using namespace std;

class SalariedEmployee : public Employee{

public:
	double getSalary();
	void setSalary(double salary);
	void printEmployee();
private: 

double mySalary;


};

#endif
