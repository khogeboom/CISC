#include <iostream>
#include "Set.h"
using namespace std;

int main() {
    int arr1[6] = {2, 1, 4, 3, 5, 4};
    cout<<"int arr1[] = {2, 1, 4, 3, 5, 4}"<<endl;
    Set set1(arr1,6);
    cout << "Set1(arr1): ";
    set1.display();
    cout << endl;

    cout<<"adding 1, 3, 5 again then 6 and 7"<<endl;
    set1.add(1);
    set1.add(3);
    set1.add(5);
    set1.add(6);
    set1.add(7);

    cout << "Set1: ";
    set1.display();

    // remove an existing element and a non-existing element
    cout<<"Remove(7); Remove(9)"<<endl;
    set1.Remove(7);
    set1.Remove(9);
    cout << "Set1: ";
    set1.display();
    cout<<endl;

    cout << endl;
    cout << "Creating set2, copying the former set. (Testing copy constructor)" << endl;
    Set set2(set1);
    cout << "Set2: ";
    set2.display();
    cout << endl;

    int arr3[4] = {0, 1, 4, 9};
    Set set3(arr3, 4);
    cout << "Set3: ";
    set3.display();
    cout << endl;

    cout << "The union of set1 and set3 is: " << endl;
    Set unionSet = set1.Union(set3);
    unionSet.display();
    cout << endl;

    cout << "intersectSet = set1.Intersection(set3)" << endl;
    Set intersectSet = set1.Intersection(set3);
    intersectSet.display();
    cout << endl;

    // Test - the difference between two sets
    cout << "diffSet = unionSet.Difference(intersectSet)" << endl;
    Set diffSet = unionSet.Difference(intersectSet);
    diffSet.display();
    cout << endl;

    // Test == if two sets are equal
    Set set4(set1);
    cout << "Set4(set1): ";
    set4.display();
    cout << endl;

    cout << "set1: ";
    set1.display();
    cout << "set4: ";
    set4.display();
    if (set1.Equal(set4))
        cout<<"set1 is equal to set4"<<endl;
    else
        cout<<"set1.Equal(set4) failed"<<endl;
    cout << endl;

    // Test != if two sets are not equal
    cout << "set1: ";
    set1.display();
    cout << "set3: ";
    set3.display();
    if (!(set1.Equal(set3)))
        cout<<"set1 is not equal to set3"<<endl;
    else
        cout<<"!(set1.Equal(set3 ) failed"<<endl;
    cout << endl;

    return 0;
}
