//
// Created by Kasey Hogeboom on 11/8/21.
//

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

bool Set::Remove(int userInt) {
/*    bool found = false;
    for (int i = 0; i < numElements; i++) {
        if (arp[i] == userInt) {
            found = true;
            for (int j = i; j < numElements; j++) {
                arp[j] = arp[j+1];
            }
        }
    }
    return found;*/

    Set *newSet = new Set;
    bool found = false;
    int index;
    for (int i = 0; i < numElements; i++) {
        if (arp[i] == userInt) {
            found = true;
            index = i;
        }
    }
    if (found) {
        for (int j = 0; j < numElements; j++) {
            if (j != index)
                newSet->add(arp[j]);
        }
        arp->fill_n();
        for (int k = 0; k < numElements; )
    }
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

Set::Set(const Set &obj) {
    arp = new int[obj.numElements];
    for (int i = 0; i < obj.numElements; i++) {
        add(obj.arp[i]);
    }
}

Set Set::Union(Set obj) {
    Set* unionSet = new Set;
    for (int i = 0; i < numElements; i++) {
        unionSet->add(arp[i]);
    }

    for (int j = 0; j < obj.numElements; j++) {
        if (unionSet->isElement(obj.arp[j]) == false) {
            unionSet->add(obj.arp[j]);
        }
    }
    return *unionSet;
}

Set Set::Intersection(Set obj) {
    Set* interSet = new Set;
    for (int i = 0; i < numElements; i++) {
        for (int j = 0; j < obj.numElements; j++) {
            if (arp[i] == obj.arp[j]) {
                interSet->add(arp[i]);
            }
        }
    }
    return *interSet;
}

Set Set::Difference(Set obj) {
    Set* diffSet = new Set;
    for (int i = 0; i < numElements; i++) {
        if (obj.isElement(arp[i]) == false) {
            diffSet->add(arp[i]);
        }
    }
    return *diffSet;
}

bool Set::Equal(Set obj) {
    bool sameLength = false;
    bool equal = true;
    if (numElements == obj.numElements) {
        sameLength = true;
    }
    for (int i = 0; i < numElements; i++) {
        if (isElement(obj.arp[i]) == false)
            equal = false;
    }
    if (sameLength == true && equal == true)
            return true;
    else
        return false;
}