#include <iostream>
#include <iomanip>


#include <string>


#include "salariedemployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial,
		   int dept, double rate, double hours){
  myIdNum = id;
  myLastName = last;
  myFirstName = first;
  myMiddleInitial = initial;
  myDeptCode = dept;
  mySalary = salary;
		   }
  
  
  void SalariedEmployee::setSalary(double salary){
	  mySalary = salary;
  }
  
  double SalariedEmployee::getSalary()const {
	  return mySalary;
  }
  
  
  void Employee:: printEmployee ()			// print Employee information
{
  cout << endl;
  cout << "Employee ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
  cout << "Salary: " << mySalary () << endl;
}

}
