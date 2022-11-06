#include <iostream>
using namespace std;

int ArraySum(int[]);
int RowSums(int[][5], int);
bool IsDiverse(int[][5]);

int main()
{
    // Part 1
    int array1[5];
    for (int i = 0; i < 5; i++)
        array1[i] = rand() % 10;
    for (int j = 0; j < 5; j++)
        cout << array1[j] << " ";
    cout << endl;
    int sum = ArraySum(array1);
    cout << "Sum = " << sum << endl;
    cout << endl;


    // Part 2
    int array2d[4][5];
    for (int k = 0; k < 4; k++) {
        for (int m = 0; m < 5; m++) {
            array2d[k][m] = rand() % 10;
        }
    }
    int sums[4];
    for (int r = 0; r < 4; r++) {
        sums[r] = RowSums(array2d, r);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2d[i][j] << " ";
        }
        cout << " = " << sums[i] << endl;
    }
    cout << endl;

    bool diversity = IsDiverse(array2d);
    if (diversity)
        cout << "array2d is diverse" << endl;
    else
        cout << "array2d is not diverse" << endl;

    return 0;
}

int ArraySum(int array1[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += array1[i];
    }
    return sum;
}

int RowSums(int array2d[][5], int r)
{
    int sums = 0;
    for (int i = 0; i < 5; i++) {
        sums += array2d[r][i];
    }
    return sums;
}

bool IsDiverse(int array2d[][5])
{
    int sums[4];
    for (int r = 0; r < 4; r++) {
        sums[r] = RowSums(array2d, r);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            if (sums[i] == sums[j]) {
                cout << sums[i] << " is a duplicate" << endl;
                return false;
            }
        }
    }
    return true;
}