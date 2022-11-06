//
// Created by Kasey Hogeboom on 11/8/21.
//

#ifndef SET2_SET_H
#define SET2_SET_H


class Set {
    private:
        int *arp;
        int pSize;
        int numElements;
        static const int DEFAULT_SIZE = 5;

    public:
        Set(int userSize = DEFAULT_SIZE);
        Set(int userArray[], int userSize);
        ~Set();
        void display();
        bool add(int);
        bool Remove(int);
        bool isElement(int);
        void extendSet();
        int showSize();
        int countElements();
        Set(const Set&);
        Set Union(Set);
        Set Intersection(Set);
        Set Difference(Set);
        bool Equal(Set);
};


#endif //SET2_SET_H
