//
// Created by Kasey Hogeboom on 12/16/21.
//

#include "Vehicle.h"
#include "Truck.h"

Truck::Truck(string userVin, int userWeight) : Vehicle(userVin){
    weight = userWeight;
    taxRate2000 = 0.12;
    taxRateOver2000 = 0.17;
}

double Truck::setTaxRate(double txr1, double txr2) {
    taxRate2000 = txr1;
    taxRateOver2000 = txr2;
}

string Truck::getVin() {
    return vin;
}

int Truck::getWeight() {
    return weight;
}

double Truck::getTax() {
    double tax;
    if (weight <= 2000) {
        tax = weight * taxRate2000;
    }
    else {
        tax = 2000 * taxRate2000;
        tax += (weight - 2000) * taxRateOver2000;
    }
    return tax;
}
void Truck::print() {
    cout << "Truck ";
    cout << "   Vin: " << getVin();
    cout << "   Weight: " << getWeight();
    cout << "   Tax: " << getTax() << endl;
}

