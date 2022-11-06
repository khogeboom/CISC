#include <iostream>
using namespace std;

int *Merge(int A[], int B[], int sizeA, int sizeB) {
    int sizeC = sizeA + sizeB;
    int *C = new int(sizeC);
    int i = 0;
    // merge A and B to create C
    for (int j = 0; j < sizeA; j++) {
        C[i] = A[j];
        i++;
    }
    for (int k = 0; k < sizeB; k++) {
        C[i] = B[k];
        i++;
    }

    // sort C
    int temp;
    int j = 0;
    for (int i = 0; i < sizeC; i++) {
        j = i;
        while (j > 0 && C[j] < C[j-1]) {
            temp = C[j-1];
            C[j-1] = C[j];
            C[j] = temp;
            j--;
        }
    }
    return C;
}

int main() {
    // PART 1 * * * * * * * * * * * *
    cout << "PART 1" << endl;
    // get sizes a and b (no larger than 10)
    int a, b;
    do {
        cout << "a = ";
        cin >> a;
    } while (a > 10);
    do {
        cout << "b = ";
        cin >> b;
    } while (b > 10);

    // input random elements into array A and B
    int A[a];
    int B[b];
    for (int i = 0; i < a; i++) {
        A[i] = (rand() % 100);
    }
    for (int j = 0; j < b; j++) {
        B[j] = (rand() % 100);
    }

    // sort A
    int temp;
    int j = 0;
    for (int i = 0; i < a; i++) {
        j = i;
        while (j > 0 && A[j] < A[j-1]) {
            temp = A[j-1];
            A[j-1] = A[j];
            A[j] = temp;
            j--;
        }
    }
    // sort B
    j = 0;
    for (int i = 0; i < b; i++) {
        j = i;
        while (j > 0 && B[j] < B[j-1]) {
            temp = B[j-1];
            B[j-1] = B[j];
            B[j] = temp;
            j--;
        }
    }

    // merge/swap loop
    int index = 0;
    while (index < a) {
        if (B[0] < A[index]) {
            temp = A[index];
            A[index] = B[0];
            B[0] = temp;
        }
        // re-sort B
        int j = 0;
        for (int i = 0; i < b; i++) {
            j = i;
            while (j > 0 && B[j] < B[j-1]) {
                temp = B[j-1];
                B[j-1] = B[j];
                B[j] = temp;
                j--;
            }
        }
        index++;
    }

    // display arrays
    cout << "A[] = { ";
    for (int i = 0; i < a; i++) {
        if (i != a-1)
            cout << A[i] << ", ";
        else
            cout << A[i] << " }" << endl;
    }
    cout << "B[] = { ";
    for (int j = 0; j < b; j++) {
        if (j != b-1)
            cout << B[j] << ", ";
        else
            cout << B[j] << " }" << endl;
    }
    cout << endl;



    // PART 2 * * * * * * * * * * *
    cout << "PART 2" << endl;
    // get size a and b (no larger than 10)
    do {
        cout << "a = ";
        cin >> a;
    } while (a > 10);
    do {
        cout << "b = ";
        cin >> b;
    } while (b > 10);

    // input elements into arrays A and B
    A[a] = {};
    B[b] = {};
    for (int i = 0; i < a; i++) {
        A[i] = (rand() % 100);
    }
    for (int j = 0; j < b; j++) {
        B[j] = (rand() % 100);
    }

    int *C = Merge(A, B, a, b);

    // display arrays A, B, and C
    cout << "A[] = { ";
    for (int i = 0; i < a; i++) {
        if (i != a-1)
            cout << A[i] << ", ";
        else
            cout << A[i] << " }" << endl;
    }
    cout << "B[] = { ";
    for (int j = 0; j < b; j++) {
        if (j != b-1)
            cout << B[j] << ", ";
        else
            cout << B[j] << " }" << endl;
    }
    cout << "C[] = { ";
    for (int k = 0; k < (a+b); k++) {
        if (k != (a+b)-1)
            cout << C[k] << ", ";
        else
            cout << C[k] << " }" << endl;
    }

    return 0;
}
