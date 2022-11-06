#ifndef BAG_H_INCLUDED
#define BAG_H_INCLUDED

using namespace std;

class Bag {
    public:
        typedef int     bag_type;
        virtual bool    add(bag_type)=0;  // Put a member in the bag
        virtual bool    remove(bag_type)=0;  // remove a member from the bag
        virtual int     getItems()=0;            // number of members in bag
        virtual void    clear()=0;           // remove all members from bag
        virtual bool    contains(bag_type)=0;   // is a member in the bag?
        virtual int     howmany(bag_type)=0; // how many member in bag.
        virtual void    printBag()=0;

};

#endif // BAG_H_INCLUDED
