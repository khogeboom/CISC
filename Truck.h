//
// Created by Kasey Hogeboom on 12/16/21.
//

#ifndef FINALLAB_TRUCK_H
#define FINALLAB_TRUCK_H
#include "Vehicle.h"


class Truck : public Vehicle {
    protected:
        int weight;
        double taxRate2000;
        double taxRateOver2000;

    public:
        Truck(string, int);
        double setTaxRate(double, double);
        string getVin();
        int getWeight();
        double getTax();
        void print();

};


#endif //FINALLAB_TRUCK_H
