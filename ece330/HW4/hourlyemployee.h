#ifndef HOURLYEMPLOYEE
#define HOURLYEMPLOYEE

#include <string>
#include "employee.h"
using namespace std;

class HourlyEmployee : public Employee{

public:
	void setRate(double rate);
	double getRate() const;
	void setHours(double hours);
	double getHours() const;
	void printEmployee();
private:
	double myRate;
	double myHours;
};

#endif