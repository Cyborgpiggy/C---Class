//Ryan DeHaan
#include <iostream>
#include "functions.h"

using namespace std;
int main() {
    int intArr[] = { 5, 2, 9, 1, 7 };
    double doubleArr[] = { 3.14, 2.71, 1.618, 0.577, 1.414 };

    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);

    cout << "Original int array: ";
    for (int i = 0; i < intSize; ++i)
        cout << intArr[i] << " ";
    cout << endl;

    insertionSort(intArr, intSize);

    cout << "Sorted int array: ";
    for (int i = 0; i < intSize; ++i)
        cout << intArr[i] << " ";
    cout << endl;

    cout << "Original double array: ";
    for (int i = 0; i < doubleSize; ++i)
        cout << doubleArr[i] << " ";
    cout << endl;

    insertionSort(doubleArr, doubleSize);

    cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i)
        cout << doubleArr[i] << " ";
    cout << endl;

    return 0;
}
