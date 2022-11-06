// Kasey Hogeboom
// 11-8-2021

#include "Set.h"
#include <iostream>
using namespace std;


Set::Set(int userSize) {
    arp = new int[userSize];
    pSize = userSize;
    numElements = 0;
}

Set::Set(int userArray[], int userSize) {
    arp = new int[userSize];
    numElements = 0;
    pSize = userSize;

    for (int i = 0; i < userSize; i++) {
        add(userArray[i]);
    }
}

Set::~Set() {
    delete[] arp;
    cout << "The destructor was called." << endl;
}

void Set::display() {
    cout << "{ ";
    for (int i = 0; i < numElements; i++) {
        if (i < numElements - 1)
            cout << arp[i] << ", ";
        else
            cout << arp[i];
    }
    cout << " }" << endl;
}

bool Set::add(int userInt) {
    bool found = true;

    if (numElements != 0) {
        for (int i = 0; i < numElements; i++) {
            if (userInt == arp[i]) {
                found = false;
                break;
            }
        }
        if (found == true) {
            if (numElements == pSize) {
                extendSet();
                pSize = DEFAULT_SIZE + DEFAULT_SIZE;
                arp[numElements] = userInt;
                numElements++;
            }
            else {
                arp[numElements] = userInt;
                numElements++;
            }
        }
    }
    else {
        arp[numElements] = userInt;
        numElements++;
    }
    return found;
}

bool Set::isElement(int findInt) {
    bool found = false;
    for (int i = 0; i < pSize; i++) {
        if (findInt == arp[i])
            found = true;
    }
    return found;
}

void Set::extendSet() {
    int *tempArray;
    tempArray = new int[pSize + DEFAULT_SIZE];

    for (int i = 0; i < pSize; i++) {
        tempArray[i] = arp[i];
    }

    arp = tempArray;
    pSize += DEFAULT_SIZE;
}

int Set::showSize() {
    cout << "Size of array: " << pSize << endl;
    return pSize;
}

int Set::countElements() {
    cout << "Number of elements: " << numElements << endl;
    return numElements;
}
