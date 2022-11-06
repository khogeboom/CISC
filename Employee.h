// Kasey Hogeboom
// Fig. 13.13: Employee.h
// Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ standard string class
using namespace std;

class Employee
{
public:
    Employee( string &, string &, string & );

    void setFirstName( string & ); // set first name
    string getFirstName(); // return first name

    void setLastName( string & ); // set last name
    string getLastName() ; // return last name

    void setSocialSecurityNumber( string & ); // set SSN
    string getSocialSecurityNumber(); // return SSN

    // pure virtual function makes Employee abstract base class
    virtual double earnings() = 0; // pure virtual
    virtual void print(); // virtual

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
}; // end class Employee

#endif // EMPLOYEE_H
