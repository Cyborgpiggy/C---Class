//Ryan DeHaan
//Lab 4 Problem 1
#include <iostream>

using namespace std;

int main(){
    int num, i;
    cout << "Enter a integer: ";
    cin >> num;
    for(i = 1; i <= num; ++i){
        if(num % i == 0)
            cout << i << " ";
    }
    return 0;
}