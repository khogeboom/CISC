//
// Created by Kasey Hogeboom on 11/29/21.
//

#ifndef PAYROLL_COMMISSIONEMPLOYEE_H
#define PAYROLL_COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee {

    private:
        int grossSales;
        double commissionRate;
    public:
        CommissionEmployee(string, string, string, int, double);
        int GetGrossSales();
        double GetRate();
        double earnings();
        void print();
};


#endif //PAYROLL_COMMISSIONEMPLOYEE_H
