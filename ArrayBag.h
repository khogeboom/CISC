#ifndef BAG_ARRAYBAG_H
#define BAG_ARRAYBAG_H

#include "Bag.h"
#include <iostream>
#include <vector>
using namespace std;


class ArrayBag: public Bag {
    private:
        int bagSize = 0;
        vector<int> data;
        int numItems = 0;

    public:
        ArrayBag(int);
        bool add(bag_type);
        bool remove(bag_type);
        int getItems();
        void clear();
        bool contains(bag_type);
        int howmany(bag_type);
        void printBag();
        bool containsAll(ArrayBag&);
};


#endif //BAG_ARRAYBAG_H
