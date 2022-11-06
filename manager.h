/*
 * File: manager.h
 * Manager class definition.
 */

#ifndef _MANAGER_H
#define _MANAGER_H

#include "employee.h"
#include <iostream>
using namespace std;

class Manager : public Employee {
public:
  Manager(string theName,
          float thePayRate,
          bool isSalaried);

  bool getSalaried() const;

  float pay(float hoursWorked) const;

protected:
  bool salaried;
};

#endif /* not defined _MANAGER_H */
