// Kasey Hogeboom
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions.
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee( string &first, string &last,
                    string &ssn )
        : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{
    // empty body
} // end Employee constructor

// set first name
void Employee::setFirstName( string &first )
{
    firstName = first;
} // end function setFirstName

// return first name
string Employee::getFirstName()
{
    return firstName;
} // end function getFirstName

// set last name
void Employee::setLastName( string &last )
{
    lastName = last;
} // end function setLastName

// return last name
string Employee::getLastName()
{
    return lastName;
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( string &ssn )
{
    socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber()
{
    return socialSecurityNumber;
} // end function getSocialSecurityNumber

// print Employee's information (virtual, but not pure virtual)
void Employee::print()
{
    cout << getFirstName() << ' ' << getLastName()
         << "\nsocial security number: " << getSocialSecurityNumber();
} // end function print