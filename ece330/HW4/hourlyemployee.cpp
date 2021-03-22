#include <iostream>
#include <iomanip>


#include <string>


#include "hourlyemployee.h"

using namespace std;

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial,
		   int dept, double rate, double hours){
  myIdNum = id;
  myLastName = last;
  myFirstName = first;
  myMiddleInitial = initial;
  myDeptCode = dept;
  myRate = rate;
  myHours = hours;
  
  void HourlyEmployee::setRate(double rate){
	  myRate = rate;
  }
  
  double HourlyEmployee::getRate() const{
	  return myRate;
  }
  
  void HourlyEmployee::setHours(double hours){
	  myHours = hours;
  }
  
  double HourlyEmployee::getHours()const {
	  return myHours;
  }
  
  
  void Employee:: printEmployee ()			// print Employee information
{
  cout << endl;
  cout << "Employee ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
  cout << "Hourly Rate: " << getRate () << endl;
  cout << "Hours Worked: " << getHours () << endl;
}

}
