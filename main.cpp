#include "ArrayBag.h"
#include <iostream>
using namespace std;

int main()
{
    typedef  int bag_type;
    bag_type value;
    int initSize = 15;
    ArrayBag bag(initSize);

    cout<<"Capacity (No. of items the bag can hold): "<<initSize<<endl;

    cout << "\nAdding 4 elements" <<endl;
    bag.add(12);
    bag.add(212);
    bag.add(1);
    bag.add(123);
    bag.printBag();

    cout <<"\nAdding 4 elements"<<endl;
    bag.add(142);
    bag.add(12);
    bag.add(19);
    bag.add(131);
    bag.printBag();

    // Remove element
    int key=17;
    cout << "\nRemoving "<<key<<endl;
    bag.remove(key);

    key=12;
    cout << "\nRemoving "<<key<<endl;
    bag.remove(key);
    bag.printBag();

    cout << "\nNew bag" <<endl;
    ArrayBag newBag(initSize);
    newBag.add(1);
    newBag.add(19);
    newBag.add(12);
    newBag.printBag();

    if (bag.containsAll(newBag))
        cout<< "\nBag contains all elements of newBag"<<endl;
    else
        cout<< "\nBag does not contain all elements of newBag"<<endl;

    cout<<"\nAdding 24 to newBag"<<endl;
    newBag.add(24);
    newBag.printBag();

    if (bag.containsAll(newBag))
        cout<< "\nBag contains all elements of newBag"<<endl;
    else
        cout<< "\nBag does not contain all elements of newBag"<<endl;
}
