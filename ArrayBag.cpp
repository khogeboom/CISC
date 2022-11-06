#include "ArrayBag.h"

ArrayBag::ArrayBag(int initSize) {
    bagSize = initSize;
    vector<bag_type> data;
    numItems = 0;
}

bool ArrayBag::add(bag_type value) {
    if (numItems >= bagSize)
        return false;
    else {
        data.push_back(value);
        numItems++;
        return true;
    }
}

bool ArrayBag::remove(bag_type value) {
    bool found = false;
    int index;
    for (int i = 0; i < numItems; i++) {
        if (data[i] == value) {
            found = true;
            index = i;
            break;
        }
    }
    if (found) {
        for (int j = index; j < numItems - 1; j++) {
            data[j] = data[j + 1];
        }
        numItems--;
        return true;
    }
    else {
        cout << value << " not found!" << endl;
        return false;
    }
}

int ArrayBag::getItems() {
    return numItems;
}

void ArrayBag::clear() {
    data.clear();
}

bool ArrayBag::contains(bag_type value) {
    for (int i = 0; i < numItems; i++) {
        if (data[i] == value)
            return true;
    }
    return false;
}

int ArrayBag::howmany(bag_type value) {
    int count = 0;
    for (int i = 0; i < numItems; i++) {
        if (data[i] == value)
            count++;
    }
    return count;
}

void ArrayBag::printBag() {
    cout << "Number of elements in the bag: " << getItems() << endl;
    for (int i = 0; i < numItems; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

bool ArrayBag::containsAll(ArrayBag &b) {
    int count = 0;
    for (int i = 0; i < numItems; i++) {
        if (b.contains(data[i]))
            count++;
        }
    if (count == b.getItems())
        return true;
    else
        return false;
}