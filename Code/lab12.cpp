#include <iostream>

using namespace std;

class Complex {
private:
    float real;
    float imaginary;
public:
    void set(float real, float imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }
    void display() {
        cout << "(" << real << ", " << imaginary << "i)" << endl;
    }
    Complex sum(Complex C) {
        Complex result;
        result.real = real + C.real;
        result.imaginary = imaginary + C.imaginary;
        return result;
    }
};

int main() {
    float real, imaginary;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real >> imaginary;
    Complex C1;
    C1.set(real, imaginary);

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real >> imaginary;
    Complex C2;
    C2.set(real, imaginary);

    cout << "The two complex numbers are:" << endl;
    C1.display();
    C2.display();

    Complex C3 = C1.sum(C2);
    cout << "The sum of the two complex numbers is:" << endl;
    C3.display();

    return 0;
}
