//
// Created by Kasey Hogeboom on 12/16/21.
//

#include "Vehicle.h"

Vehicle::Vehicle()
{
    vin = " ";
}

Vehicle::Vehicle(std::string newVin) // Constructor
{
    vin = newVin;
}
