#include "functions.h"
//Takes two variables and swap there values
template<typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void insertionSort(T arr[], int size) {
    for (int i = 1; i < size; ++i) {
        T key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            mySwap(arr[j], arr[j + 1]);
            --j;
        }

        arr[j + 1] = key;
    }
}
