#include <iostream>

using namespace std;
int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    (num == 0) ? cout << "The number is zero" :
        (num > 0) ? cout << "The number is positive" : 
        cout << "The number is negative";

    return 0;
}