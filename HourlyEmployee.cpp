//
// Created by Kasey Hogeboom on 11/29/21.
//

#include "HourlyEmployee.h"
#include <iostream>
using namespace std;

HourlyEmployee::HourlyEmployee(string userFirst, string userLast, string userSSN, double userHourlyPay, int userHours) :
Employee(userFirst, userLast, userSSN), hourlyWage(userHourlyPay), hours(userHours)
{

}

double HourlyEmployee::GetHourlyWage() {
    return hourlyWage;
}

int HourlyEmployee::GetHours() {
    return hours;
}

double HourlyEmployee::earnings() {
    int hours = GetHours();
    double wage = GetHourlyWage();
    double earnings;
    if (hours > 40) {
        earnings = wage * 40;
        double overtime = wage * 1.5;
        earnings += overtime * (hours - 40);
        return earnings;
    }
    else
        return hours * wage;
}

void HourlyEmployee::print() {
    cout << "Hourly Employee: " << getFirstName() << " " << getLastName() << endl;
    cout << "Hourly Wage: " << GetHourlyWage() << endl;
    cout << "Hours Worked: " << GetHours();
}