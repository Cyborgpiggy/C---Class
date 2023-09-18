//Ryan DeHaan
//Lab 4 Problem 2
#include <iostream>

using namespace std;

int main(){
    int num,og_num, remainder,result = 0;
    cout<<"Enter a 3 digit integer: ";
    cin >> num;
    og_num = num;
    while(og_num != 0 ){
        remainder = og_num % 10;
        result += remainder * remainder * remainder;

        og_num /= 10;

    }
    if (result == num){
        cout << num << " is an armstrong number.";
    }
    else{
        cout << num << " is not an armstrong number.";
    }
}