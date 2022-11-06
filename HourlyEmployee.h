//
// Created by Kasey Hogeboom on 11/29/21.
//

#ifndef PAYROLL_HOURLYEMPLOYEE_H
#define PAYROLL_HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
    private:
        double hourlyWage;
        int hours;
    public:
        HourlyEmployee(string, string, string, double, int);
        double GetHourlyWage();
        int GetHours();
        double earnings();
        void print();
};


#endif //PAYROLL_HOURLYEMPLOYEE_H
