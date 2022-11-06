// Created by Kasey Hogeboom on 10/4/21.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[50], stringReverse[50];

    cout << "Enter a string of no more than 50 characters: " << endl;
    cin >> string;

    int length = strlen(string);
    int j = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        stringReverse[j] = string[i];
        j++;
    }
    stringReverse[j] = '\0';    // because strcmp() compares up until last null character
    // cout << string << endl;
    // cout << stringReverse << endl;

    if (strcmp(string, stringReverse) == 0)
        cout << "Your string is a palindrome." << endl;
    else {
        cout << "Your string is NOT a palindrome." << endl;
        // cout << strcmp(string, stringReverse) << endl;
    }

    return 0;
}

