#include <iostream>
using namespace std;

int maxOf(int A[], int size) {
    int maxVal = A[0];
    for(int i = 1; i < size; i++) {
        if(A[i] > maxVal) {
            maxVal = A[i];
        }
    }
    return maxVal;
}

void counts(int A[], int size, int max) {
    int freq[max+1] = {0}; // Initialize all elements to zero
    for(int i = 0; i < size; i++) {
        freq[A[i]]++; // Increment the frequency of A[i]
    }
    for(int i = 0; i <= max; i++) {
        cout << freq[i] << " "; // cout the frequency of each element
    }
    cout << endl;
}

int main() {
    int A[8] = {5, 4, 2, 0, 0, 2, 2, 4};
    int maxVal = maxOf(A, 8);
    cout << "Max value in A: " << maxVal << endl;
    cout << "Frequency of each element in A: ";
    counts(A, 8, maxVal);
    return 0;
}
