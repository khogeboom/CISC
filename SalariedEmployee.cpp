//
// Created by Kasey Hogeboom on 11/29/21.
//
#include <iostream>
using namespace std;
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(string userFirst, string userLast, string userSSN, double userSalary) :
Employee(userFirst, userLast, userSSN), weeklySalary(userSalary)
{

}

double SalariedEmployee::GetSalary() {
    return weeklySalary;
}

double SalariedEmployee::earnings() {
    return weeklySalary;
}

void SalariedEmployee::print() {
    cout << "Salaried Employee: " << getFirstName() << " " << getLastName() << endl;
    cout << "Social Security Number: " << getSocialSecurityNumber() << endl;
    cout << "Weekly Salary: " << GetSalary();
}
