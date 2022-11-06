#include <iostream>
#include <iomanip>
using namespace std;

// This program demonstrates how to use an array of structures

// KASEY HOGEBOOM

// Fill in code to declare a structure called taxPayer that has three
// members:	taxRate, income, and taxes � each of type float
struct taxPayer {
    float taxRate;
    float income;
    float taxes;
};

int main()
{
	// Fill in code to define an array named citizen which holds
	// 5 taxPayers structures
    taxPayer citizen[5];

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for (int count = 0; count < 5; count++)
	{
		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";

		// Fill in code to assign random number to income in the appropriate place
        citizen[count].income = (rand() % 90000) + 10000;
        cout << citizen[count].income << endl;

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";

		// Fill in code to assign random number to tax rate in the appropriate place
        citizen[count].taxRate = ((rand() % 9) + 1) / 100.0;
        cout << citizen[count].taxRate << endl;

		// Fill in code to compute the taxes for the citizen and store it
		// in the appropriate place
        citizen[count].taxes = citizen[count].income * citizen[count].taxRate;

		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// Fill in code for the first line of a loop that will output the
	// tax information
    for (int index = 0; index < 5; index++)
	{
		cout << "Tax Payer # " << (index + 1) << ": " << "$ "
		     << citizen[index].taxes << endl;
	}

	return 0;
}