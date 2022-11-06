//
// Created by Kasey Hogeboom on 12/9/21.
//

#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

#ifndef EMPLOYEE_MANAGER_SUPERVISOR_H
#define EMPLOYEE_MANAGER_SUPERVISOR_H


class Supervisor : public Employee {
    private:
        string departmentName;
        bool Salaried = true;

    public:
        Supervisor(string theName, float thePayRate, string userName, float userPayRate, string userDeptName,
                   bool Salaried);
        void setDept(string);
        string getDept() const;

};


#endif //EMPLOYEE_MANAGER_SUPERVISOR_H
