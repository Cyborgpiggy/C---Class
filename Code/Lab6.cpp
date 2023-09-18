//Ryan DeHaan
//Lab 6 Problem 1
#include <iostream>

using namespace std;

void greeting(){
    cout << "Hello. "<< endl;
}
int sumOfDigits(int num1){
    int sum = 0;
    while(num1 != 0){
        sum += num1 % 10;
        num1 /= 10;
    }
    return sum;
}
int max(int num1, int num2){
    if(num1 > num2){
        cout<< "The max of two integers is " << num1 << endl;
    }
    else{
        cout<< "The max of two integers is " << num2 << endl;
    }
    return 0;
}

int main(){
    int user_num1,user_num2;
    greeting();
    cout<<"Enter two Five digit intergers: ";
    cin >> user_num1 >> user_num2;
    sumOfDigits(user_num1);
    sumOfDigits(user_num2);
    max(user_num1, user_num2);
    return 0;
}