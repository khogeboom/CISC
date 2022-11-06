// Kasey Hogeboom
// 11-8-2021

#ifndef SET1_SET_H
#define SET1_SET_H


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
        bool isElement(int);
        void extendSet();
        int showSize();
        int countElements();
};

#endif //SET1_SET_H
