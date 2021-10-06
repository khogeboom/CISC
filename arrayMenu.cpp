// Kasey Hogeboom
// 9-20-21
// Project 1 - Array Menu

#include <iostream>
using namespace;

void DisplayMenu();
void FillArray(int[], int&);
void FindHighLowSum(int[], int&);
void AddToEnd(int[], int&);
void FindIndex(int[], int&);
void InsertAtIndex(int[], int&);
void RemoveAtIndex(int[], int&);
void RemoveNumber(int[], int&);
void Histogram(int[], int&);

int main() {
    const int size = 10;
    int array[size], items = 0;
    int input;

    do
    {
        DisplayMenu();
        cin >> input;

        if (input == 0)
            FillArray(array, items);
        else if (input == 1)
            FindHighLowSum(array, items);
        else if (input == 2)
            AddToEnd(array, items);
        else if (input == 3)
            FindIndex(array, items);
        else if (input == 4)
            InsertAtIndex(array, items);
        else if (input == 5)
            RemoveAtIndex(array, items);
        else if (input == 6)
            RemoveNumber(array, items);
        else if (input == 7)
            Histogram(array, items);
        else if (input == 8)
            cout << "Goodbye." << endl;
        else
            cout << "ERROR. Invalid input." << endl;
    } while (input != 8);
    cout << endl;

    return 0;
}

void DisplayMenu()
{
    cout << "0. Fill array" << endl;
    cout << "1. Find high, low, sum average" << endl;
    cout << "2. All a number to the end" << endl;
    cout << "3. Find the index of a number" << endl;
    cout << "4. Insert the number at index" << endl;
    cout << "5. Remove number" << endl;
    cout << "6. Remove number at index" << endl;
    cout << "7. Histogram" << endl;
    cout << "8. Quit" << endl;
}

void FillArray(int array[], int& items)
{
    bool isValid = true;

    do
    {
        cout << "Enter the length of the array: ";
        cin >> items;
        if (items < 1 || items > 10)
            cout << "ERROR. Enter number between 1 and 10." << endl;
    } while (items < 1 || items > 10);

    do
    {
        for (int i = 0; i < items; i++)
        {
            cin >> array[i];
        }
        for (int j = 0; j < items; j++)
        {
            if (array[j] < 1 || array[j] > 99)
            {
                isValid = false;
                cout << "ERROR. Only enter numbers between 1 and 99." << endl;
            }
        }
    } while (isValid == false);

    cout << endl;
}

void FindHighLowSum(int array[], int& items)
{
    int highest, lowest, sum = 0;
    float avg;

    highest = array[0];
    lowest = array[0];

    if (items == 0)
        cout << "Array not yet created." << endl;
    else
    {
        for (int i = 1; i < items; i++)
        {
            if (array[i] > highest)
                highest = array[i];

            if (array[i] < items)
                lowest = array[i];
        }

        for (int j = 0; j < items; j++)
        {
            sum += array[j];
        }

        avg = sum / items;

        cout << "Highest: " << highest << endl;
        cout << "Lowest: " << lowest << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << avg << endl;
    }

    cout << endl;
}


void AddToEnd(int array[], int& items)
{
    int input;

    cout << "Enter a number to add: ";
    cin >> input;

    array[items] = input;
    items++;

    for (int i = 0; i < items; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << endl;
}


void FindIndex(int array[], int& items)
{
    int input, index;
    bool found = false;

    cout << "Enter the number to find: ";
    cin >> input;

    for (int i = 0; i < items; i++)
    {
        if (array[i] == input)
        {
            index = i;
            found = true;
        }
    }

    if (found == false)
        cout << input << " does not exist" << endl;
    else
        cout << input << " is at index " << index << endl;

    for (int j = 0; j < items; j++)
        cout << array[j] << " ";
    cout << endl;
    cout << endl;
}


void InsertAtIndex(int array[], int& items)
{
    int input, index;

    cout << "Enter the number to insert: ";
    cin >> input;
    cout << "Enter the index to insert: ";
    cin >> index;

    if (index >= items)
        cout << "The specified index is outside the array" << endl;
    else
    {
        items++;
        for (int i = items - 1; i > index; i--)
            array[i] = array[i - 1];

        array[index] = input;
    }

    for (int j = 0; j < items; j++)
        cout << array[j] << " ";
    cout << endl;
    cout << endl;
}


void RemoveAtIndex(int array[], int& items)
{
    int input, index;
    bool found = false;

    cout << "Enter the number to remove: ";
    cin >> input;

    for (int i = 0; i < items; i++)
    {
        if (array[i] == input)
        {
            found = true;
            index = i;
        }
    }

    if (found == false)
        cout << input << " does not exist" << endl;
    else
    {
        for (int j = index; j < items; j++)
            array[j] = array[j + 1];
        items--;
    }

    for (int k = 0; k < items; k++)
        cout << array[k] << " ";
    cout << endl;
    cout << endl;


}


void RemoveNumber(int array[], int& items)
{
    int index;

    cout << "Enter the index to remove: ";
    cin >> index;

    if (index >= items)
        cout << index << " is outside the array" << endl;
    else
    {
        for (int i = index; i < items; i++)
            array[i] = array[i + 1];
        items--;
    }

    for (int j = 0; j < items; j++)
        cout << array[j] << " ";
    cout << endl;
    cout << endl;
}

void Histogram(int array[], int& items)
{
    int rem, stars, dollars;

    for (int a = 0; a < items; a++)
        cout << array[a] << " ";
    cout << endl;

    for (int i = 0; i < items; i++)
    {
        if (array[i] >= 10)
        {
            rem = array[i] % 10;
            dollars = (array[i] - rem) / 10;
            stars = rem;
        }
        else
            stars = array[i];

        for (int j = 0; j < dollars; j++)
            cout << "$";
        for (int k = 0; k < stars; k++)
            cout << "*";
        cout << endl;
    }
    cout << endl;
}