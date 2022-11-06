//
// Created by Kasey Hogeboom on 11/29/21.
//

#ifndef PAYROLL_BASEPLUSCOMMISSIONEMPLOYEE_H
#define PAYROLL_BASEPLUSCOMMISSIONEMPLOYEE_H

#include "CommissionEmployee.h"
#include <iostream>
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee {

    private:
        double baseSalary;
    public:
        BasePlusCommissionEmployee(string, string, string, int, double, double);
        double GetSalary();
        double earnings();
        void print();
};


#endif //PAYROLL_BASEPLUSCOMMISSIONEMPLOYEE_H
