//
// Created by Kasey Hogeboom on 11/29/21.
//

#ifndef PAYROLL_SALARIEDEMPLOYEE_H
#define PAYROLL_SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
    private:
        double weeklySalary;
    public:
        SalariedEmployee(string, string, string, double);
        double GetSalary();
        double earnings();
        void print();


};


#endif //PAYROLL_SALARIEDEMPLOYEE_H
