/*
 * File: employee.h
 * Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);

  void setName(string);
  string getName() const;
  void setPayRate(float);
  float getPayRate() const;
  void setSalaried(bool);

  float pay(float hoursWorked) const;

protected:
  string name;
  float payRate;
  bool salaried;
};

#endif /* not defined _EMPLOYEE_H */
