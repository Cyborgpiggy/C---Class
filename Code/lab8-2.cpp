#include <iostream>

using namespace std;

// Function to add two numbers of the same type
template <typename T>
T add(T num1, T num2) {
    return num1 + num2;
}

// Function to add three numbers of the same type
template <typename T>
T add(T num1, T num2, T num3) {
    return num1 + num2 + num3;
}

int main() {
    int a, b, c;
    double x, y, z;
    cout<<"Enter two ints: ";
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " is " << add(a, b) << endl;
    cout<<"Enter two doubles: ";
    cin >> z >> y;
    cout << "Sum of " << x << " and " << y << " is " << add(x, y) << endl;
    cout<<"Enter three ints: ";
    cin >> a >> b >> c;
    cout << "Sum of " << a << ", " << b << " and " << c << " is " << add(a, b, c) << endl;
    cout<<"Enter three doubles: ";
    cin >> x >> y >> z;
    cout << "Sum of " << x << ", " << y << " and " << z << " is " << add(x, y, z) << endl;

    return 0;
}






