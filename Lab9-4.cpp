#include <iostream>
using namespace std;

bool SearchIdNum(int*, int*, int);

int main() {
    int numOfIds;
    int *idNum = nullptr;
    int *searchNum;

    cout << "Please input the number of id numbers to be read: " << endl;
    cin >> numOfIds;

    idNum = new int;
    searchNum = new int;

    for (int i = 0; i < numOfIds; i++)
    {
        cout << "Please enter an id number: " << endl;
        cin >> *(idNum + i);
    }

    cout << endl;
    cout << "Please input an id number to be searched: " << endl;
    cin >> *searchNum;

    bool isFound = SearchIdNum(idNum, searchNum, numOfIds);

    if (isFound)
        cout << *searchNum << " is in the array" << endl;
    else
        cout << *searchNum << " is not in the array" << endl;

    return 0;
}

bool SearchIdNum(int* idNum, int* searchNum, int numOfIds)
{
    for(int i = 0; i < numOfIds; i++)
    {
        if (*searchNum == *(idNum + i))
            return true;
    }
    return false;
}
