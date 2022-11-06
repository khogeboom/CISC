//
// Created by Kasey Hogeboom on 12/16/21.
//

#include "Tanker.h"
#include "Truck.h"

Tanker::Tanker(string userVin, int userWeight) : Truck(userVin, userWeight) {

}

void Tanker::print() {
    cout << "Tanker";
    cout << "   Vin: " << getVin();
    cout << "   Weight: " << getWeight();
    cout << "   Tax: " << getTax() * 0.8 << endl;
}