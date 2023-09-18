#include <iostream>
#include <string>

using namespace std;
int total(int num){
    static int sum = 0;
    sum += num;
    return sum;
}

int main(){
    string choice;
    int n1;
    cout << "Enter your choice(Y/N): ";
    cin >> choice;
    while(choice == "Y"){
        cout << "Enter value to be added: ";
        cin >> n1;
        cout <<"The total value is: "<< total(n1) << endl;
        cout << "Enter your choice(Y/N): ";
        cin >> choice;
    }
}