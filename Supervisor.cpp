//
// Created by Kasey Hogeboom on 12/9/21.
//

#include "Supervisor.h"

Supervisor::Supervisor(string theName, float thePayRate, string userName, float userPayRate, string userDeptName,
                       bool Salaried) : Employee(userName, userPayRate) {
    departmentName = userDeptName;
    Salaried = true;
}

void Supervisor::setDept(string userDeptName) {
    departmentName = userDeptName;
}

string Supervisor::getDept() const {
    return departmentName;
}