// Kasey Hogeboom
// 11-8-2021

#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
    Set a;		// creates a set using the default constructor
    a.display();	// displays {}
    a.showSize();	// displays 5
    a.add(1);
    a.add(2);
    a.add(3);
    a.add(4);
    a.add(5);
    a.add(7);
    a.add(1);
    a.add(3);
    a.add(5);
    a.add(6);
    a.display();	// displays {1,2,3,4,5,6} in any order
    a.showSize();	// displays 10
    a.countElements();

    cout<<endl;

    int arr[] = {1, 2, 3, 4, 5, 1, 3, 5, 6 };
    Set b(arr,9);
    b.display();	// displays {1,2,3,4,5,6} in any order
    b.showSize();	// displays 10
    b.countElements();

    return 0;	// should display destructor messages
}