//Ryan DeHaan
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    string name;

   
    cout << "Enter name of the person(using cin): ";
    cin >> name;
    cout << "Name using cin: " << name << endl;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    
    cout << "Enter name of the person(using getline): ";
    getline(cin, name);
    cout << "Name using getline: " << name << endl;

   
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

   
    cout << "Enter name of the person(using get()): ";
    getline(cin, name);
    cout << "Name using get(): " << name << ", also known as " << name[0] << " with a T" << endl;

    return 0;
}
