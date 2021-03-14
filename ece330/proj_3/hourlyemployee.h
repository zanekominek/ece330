#ifndef HOURLYEMPLOYEE
#define HOURLYEMPLOYEE

#include <string>
#include "employee.h"
using namespace std;

class HourlyEmployee : public Employee{

public:

private:
	double rate;
	double hours;
};

#endif