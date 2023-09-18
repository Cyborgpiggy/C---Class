#include <iostream>
using namespace std;

int main(){
    char operator_;
    int x1,x2,x3;
    cout<<"Enter a operator(+,-,*,/): ";
    cin>> operator_;
    cout<<"Enter two values: ";
    cin >> x1 >> x2;
    switch(operator_){
        case '+':
        x3 = x1 + x2;
        cout<< x1 << operator_ << x2 << "=" << x3;
        break;
        case '-':
        x3 = x1 - x2;
        cout<< x1 << operator_ << x2 << "=" << x3;
        break;
        case '*':
        x3 = x1 * x2;
        cout<< x1 << operator_ << x2 << "=" << x3;
        break;
        case '/':
        x3 = x1 / x2;
        cout<< x1 << operator_ << x2 << "=" << x3;
        break;
        default:
        cout << "Invalid input";
        
    }
}