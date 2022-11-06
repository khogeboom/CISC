//
// Created by Kasey Hogeboom on 11/29/21.
//

#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(string userFirst, string userLast, string userSSN, int userSales, double userRate, double userSalary) :
CommissionEmployee(userFirst, userLast, userSSN, userSales, userRate), baseSalary(userSalary)
{

}

double BasePlusCommissionEmployee::GetSalary() {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() {
    return GetSalary() + (GetGrossSales() * GetRate());
}

void BasePlusCommissionEmployee::print() {
    cout << "Base-Salaried Commission Employee: " << getFirstName() << " " << getLastName() << endl;
    cout << "Gross Sales: " << GetGrossSales() << endl;
    cout << "Commission Rate: " << GetRate() << endl;
    cout << "Base Salary: " << GetSalary();
}