#include <iostream>

using namespace std;
void swapByValue(int x, int y){ //Swaps the values of two ints, aruguments must be ints
    int temp;
    cout<< "Before swap: x="<< x << " y ="<< y <<endl;
    temp = x;
    x = y;
    y = temp;
     cout << "inside SwapByValue: x="<< x << " y ="<< y << endl;

}
void swapByReference(int* x, int* y){ //Swaps the address of two ints, aruguments must be ints
    int temp;
    cout<< "Before swap: x="<< x << " y ="<< y <<endl;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "inside SwapByReference: x="<< x << " y ="<< y << endl;
}
int main(){
    int n1, n2;
    cout << "Enter two ints:";
    cin >> n1 >> n2;
    swapByValue(n1,n2);
    swapByReference(&n1,&n2);
}