//
// Created by Kasey Hogeboom on 12/16/21.
//

#ifndef FINALLAB_CAR_H
#define FINALLAB_CAR_H



class Car : public Vehicle {
    protected:
        int age;
        double tax;

    public:
        Car(string, int);
        string getVin();
        int getAge();
        double getTax();
        void print();

};


#endif //FINALLAB_CAR_H
