//
// Created by Kasey Hogeboom on 11/29/21.
//

#include "CommissionEmployee.h"
#include <iostream>
using namespace std;

CommissionEmployee::CommissionEmployee(string userFirst, string userLast, string userSSN, int userSales, double userRate) :
Employee(userFirst, userLast, userSSN), grossSales(userSales), commissionRate(userRate)
{

}

int CommissionEmployee::GetGrossSales() {
    return grossSales;
}

double CommissionEmployee::GetRate() {
    return commissionRate;
}

double CommissionEmployee::earnings() {
    return GetGrossSales() * GetRate();
}

void CommissionEmployee::print() {
    cout << "Commission Employee: " << getFirstName() << " " << getLastName() << endl;
    cout << "Gross Sales: " << GetGrossSales() << endl;
    cout << "Commission Rate: " << GetRate();
}