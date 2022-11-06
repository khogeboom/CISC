#include <iostream>
#include <vector>
using namespace std;

void DisplayMenu();
void FillVector(vector<int>&);
void FindHighLowSum(vector<int>&);
void AddToEnd(vector<int>&);
int FindIndex(vector<int>&, int);
void InsertAtIndex(vector<int>&, int, int);
void RemoveAtIndex(vector<int>&, int);
void RemoveNumber(vector<int>&, int);

int main() {
    vector<int> vect;
    int input, index, number;
    do {
        DisplayMenu();
        cin >> input;
        switch(input) {
            case 0:
                FillVector(vect);
                break;
            case 1:
                FindHighLowSum(vect);
                break;
            case 2:
                AddToEnd(vect);
                break;
            case 3:
                FindIndex(vect, number);
                break;
            case 4:
                InsertAtIndex(vect, index, number);
                break;
            case 5:
                RemoveAtIndex(vect, index);
                break;
            case 6:
                RemoveNumber(vect, number);
                break;
            case 7:
                cout << "Goodbye" << endl;
                break;
        }
    } while (input != 7);

    return 0;
}

void DisplayMenu()
{
    cout << "0. Fill Vector" << endl;
    cout << "1. Find high, low, sum, and average" << endl;
    cout << "2. Add a number to the end" << endl;
    cout << "3. Find the index of a number" << endl;
    cout << "4. Insert number at index" << endl;
    cout << "5. Remove number at Index" << endl;
    cout << "6. Remove a number" << endl;
    cout << "7. Quit" << endl;
}

void FillVector(vector<int> &vect)
{
    int length, input;
    cout << "Enter the length of the vector: ";
    cin >> length;

    vect.clear();
    for (int i = 0; i < length; i++) {
        input = rand() % 100;
        vect.push_back(input);
    }
    for (int j = 0; j < vect.size(); j++) {
        cout << vect.at(j) << " ";
    }
    cout << endl;
    cout << endl;
}

void FindHighLowSum(vector<int> &vect)
{
    if (vect.size() == 0) {
        cout << "Vector not yet created" << endl;
    }
    else {
        int max = vect.at(0), min = vect.at(0);
        for (int i = 0; i < vect.size(); i++) {
            if (vect.at(i) > max)
                max = vect.at(i);
            if (vect.at(i) < min)
                min = vect.at(i);
        }

        int sum = 0;
        for (int j = 0; j < vect.size(); j++) {
            sum += vect.at(j);
        }
        double average = sum / vect.size();

        cout << "Max: " << max << endl;
        cout << "Min: " << min << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
    }
    cout << endl;
}

void AddToEnd(vector<int> &vect)
{
    int input = rand() % 100;
    vect.push_back(input);
    for (int i = 0; i < vect.size(); i++) {
        cout << vect.at(i) << " ";
    }
    cout << endl;
    cout << endl;
}

int FindIndex(vector<int> &vect, int number)
{
    cout << "Enter the number to find: ";
    cin >> number;
    bool found = false;
    int index;
    for (int i = 0; i < vect.size(); i++) {
        if (vect.at(i) == number) {
            found = true;
            index = i;
        }
    }
    if (found == false)
        cout << number << " does not exist" << endl;
    else {
        cout << number << " is at index " << index << endl;
    }
    for (int j = 0; j < vect.size(); j++) {
        cout << vect.at(j) << " ";
    }
    cout << endl;
    cout << endl;
}

void InsertAtIndex(vector<int> &vect, int index, int number)
{
    cout << "Enter the number to insert: ";
    cin >> number;
    cout << "Enter the index to insert: ";
    cin >> index;

    vect.resize(vect.size() + 1);
    if (index >= vect.size())
        cout << "The specified index is outside the vector" << endl;
    else {
        for (int i = vect.size() - 1; i > index; i--) {
            vect.at(i) = vect.at(i - 1);
        }
        vect.at(index) = number;
    }

    for (int j = 0; j < vect.size(); j++) {
        cout << vect.at(j) << " ";
    }
    cout << endl;
    cout << endl;
}

void RemoveAtIndex(vector<int> &vect, int index)
{
    cout << "Enter the index to remove: ";
    cin >> index;

    if (index >= vect.size())
        cout << index << " is outside the vector" << endl;
    else {
        for (int i = index; i < vect.size() - 1; i++) {
            vect.at(i) = vect.at(i + 1);
        }
        vect.pop_back();
    }

    for (int j = 0; j < vect.size(); j++) {
        cout << vect.at(j) << " ";
    }
    cout << endl;
    cout << endl;
}

void RemoveNumber(vector<int> &vect, int number)
{
    cout << "Enter the number to remove: ";
    cin >> number;

    bool found = false;
    int index;
    for (int i = 0; i < vect.size(); i++) {
        if (vect.at(i) == number) {
            found = true;
            index = i;
        }
    }
    if (found == false)
        cout << number << " does not exist" << endl;
    else {
        for (int j = index; j < vect.size() - 1; j++) {
            vect.at(j) = vect.at(j + 1);
        }
        vect.pop_back();
    }

    for (int k = 0; k < vect.size(); k++) {
        cout << vect.at(k) << " ";
    }
    cout << endl;
    cout << endl;
}