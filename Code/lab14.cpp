//Ryan DeHaan
//Lab 14
//05/05/23
#include <iostream>

using namespace std;
//Template class 
template<typename T>
class Arithmetic {
    private:
        T a, b;
    public:
        Arithmetic(T a, T b) {
            this->a = a;
            this->b = b;
        }

        T operator+ (const Arithmetic& obj) {
            T sum = a + b + obj.a + obj.b;
            return sum;
        }

        T operator- (const Arithmetic& obj) {
            T diff = a - b - obj.a - obj.b;
            return diff;
        }

        T operator* (const Arithmetic& obj) {
            T product = a * b * obj.a * obj.b;
            return product;
        }
};

int main() {
    Arithmetic<int> intObj1(2, 3);
    Arithmetic<int> intObj2(4, 5);
    Arithmetic<float> floatObj1(2.5, 3.5);
    Arithmetic<float> floatObj2(4.5, 5.5);

    cout << "Sum (int): " << intObj1 + intObj2 << endl;
    cout << "Difference (int): " << intObj1 - intObj2 << endl;
    cout << "Product (int): " << intObj1 * intObj2 << endl;

    cout << "Sum (float): " << floatObj1 + floatObj2 << endl;
    cout << "Difference (float): " << floatObj1 - floatObj2 << endl;
    cout << "Product (float): " << floatObj1 * floatObj2 << endl;

    return 0;
}