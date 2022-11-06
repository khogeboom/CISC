/*
 * File: employee.cpp
 * Employee method definitions.
 */

#include "employee.h"

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

void Employee::setName(string userName) {
    name = userName;
}

string Employee::getName() const
{
  return name;
}

void Employee::setPayRate(float userPayRate) {
    payRate = userPayRate;
}

float Employee::getPayRate() const
{
  return payRate;
}

void Employee::setSalaried(bool userSalaried) {
    salaried = userSalaried;
}

float Employee::pay(float hoursWorked) const
{
  return hoursWorked * payRate;
}
