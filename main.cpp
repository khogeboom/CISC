#include <iostream>

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Tanker.h"
using namespace std;

void Print(Vehicle *);

int main()
{
    const int NUM_VEHICLES = 8;

    Car car_1("CAR1_123123123",2);
    Car car_2("CAR2_1231231234",4);

    Truck truck_1("TRK1_3123123123",2000);

    Truck truck_2("TRK2_4567890123",2100);

    Tanker tanktruck_1("TNKTRK1_3123456",2000);

    Tanker tanktruck_2("TNKTRK2_3456789", 2100);

    truck_1.setTaxRate(0.10,0.15);
    tanktruck_1.setTaxRate(0.10,0.15);

    // Pointer to array of vehicle objects
    Vehicle *vehiclePtr[NUM_VEHICLES] =
            {
                    &car_1,
                    &car_2,
                    &truck_1,
                    &truck_2,
                    &tanktruck_1,
                    &tanktruck_2
            };

    for (int count = 0; count < NUM_VEHICLES; count++)
    {
        Print(vehiclePtr[count]);
    }

    return 0;
}

void Print(Vehicle * vptr)
{
    vptr->print();
}
