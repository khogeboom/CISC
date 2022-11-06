/*
 * File: empltest.cpp
 * This program illustrates the creation and use of employee objects.
 */

#include <iostream>
#include "employee.h"
#include "manager.h"
#include "Supervisor.h"
using namespace std;

int main()
{
  Employee empl("John Burke", 25.0);
  Manager mgr("Jan Kovacs", 1200.0, true);
  Supervisor sup(std::string(), 0, "Denise Zephyr", 780.0, "Accounting", false);

  // Assume all employees worked 40 hours this period.

  cout << "For Employee:" << endl;
  cout << "Name: " << empl.getName() << endl;
  cout << "Pay: " << empl.pay(40.0) << endl;

  cout << "Changing the Employee's name..." << endl;
  empl.setName("Doug Conners");
  cout << "New Name: " << empl.getName() << endl;

  cout << endl;
  cout << "For Manager:" << endl;
  cout << "Name: " << mgr.getName() << endl;
  cout << "Salaried: " << mgr.getSalaried() << endl;
  cout << "Pay: " << mgr.pay(40.0) << endl;

  cout << "Changing the Manager's salaried status..." << endl;
  mgr.setSalaried(false);
  cout << "New Pay: " << mgr.pay(40.0) << endl;

  cout << endl;
  cout << "For Supervisor:" << endl;
  cout << "Name: " << sup.getName() << endl;
  cout << "Pay: " << sup.pay(40.0) << endl;
  cout << "Dept: " << sup.getDept() << endl;

  cout << "Changing the Supervisor's pay rate..." << endl;
  sup.setPayRate(900.0);
  cout << "New Pay: " << sup.pay(40.0) << endl;

  return 0;
}
