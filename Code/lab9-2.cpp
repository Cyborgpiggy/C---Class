#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

int main() {
    Person people[3]; // Array for people

    // iterates 3 times to ask info of each person
    for (int i = 0; i < 3; i++) {
        cout << "Enter the name of person " << i+1 << ": ";
        getline(cin, people[i].name);

        cout << "Enter the age of person " << i+1 << ": ";
        cin >> people[i].age;
        cin.ignore(); 

        cout << "Enter the address of person " << i+1 << ": ";
        getline(cin, people[i].address);
    }
    cout << "Details of all three people:";
    for (int i = 0; i < 3; i++) {
        cout << "Person " << i+1 << ":\n";
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Address: " << people[i].address << endl << endl;
    }
    int oldest_age = people[0].age;
    string oldest_person = people[0].name;
    int youngest_age = people[0].age;
    string youngest_person = people[0].name;
    for (int i = 1; i < 3; i++) {
        if (people[i].age > oldest_age) {
            oldest_age = people[i].age;
            oldest_person = people[i].name;
        }
        if (people[i].age < youngest_age) {
            youngest_age = people[i].age;
            youngest_person = people[i].name;
        }
    }
    cout << "The oldest person is " << oldest_person << " who is " << oldest_age << " years old." << endl;
    cout << "The youngest person is " << youngest_person << " who is " << youngest_age << " years old." << endl;

    return 0;
}
