//
// Created by Kasey Hogeboom on 12/16/21.
//

#include "Vehicle.h"
#include "Car.h"

Car::Car(string userVin, int userAge) : Vehicle(userVin){
    age = userAge;
    if (userAge <= 3)
        tax = 100;
    else
        tax = 50;
}

string Car::getVin() {
    return vin;
}

int Car::getAge() {
    return age;
}

double Car::getTax() {
    return tax;
}

void Car::print() {
    cout << "Car   ";
    cout << "   Vin: " << getVin();
    cout << "   Age: " << getAge();
    cout << "   Tax: " << getTax() << endl;
}