//
// Created by Kasey Hogeboom on 12/16/21.
//

#include <iostream>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
protected:
    string vin;

public:
    Vehicle();
    Vehicle(string newVin);

    virtual void print() = 0;
};
#endif // VEHICLE_H_INCLUDED
