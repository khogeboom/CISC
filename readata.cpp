// Created by Kasey Hogeboom on 10/4/21.

# include <iostream>
using namespace std;

int main()
{
    char last[10];
    cout << "Enter your last name up to 9 characters: " << endl;
    cin >> last;

    int length = strlen(last);
    if (length > 9)
        cout << "Error, too many characters entered" << endl;
    else {
        cout << "Your last name is: ";
        for (int i = 0; i < length; i++)
            cout << last[i];
        cout << endl;
    }

    return 0;
}

