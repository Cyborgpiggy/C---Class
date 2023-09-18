#include <iostream>
#include <string>
using namespace std;
//Studen class, Decleares the student name,major, and gpa
class Student {
private:
    string name;
    string major;
    double GPA;

public:
    Student() {
        name = "";
        major = "";
        GPA = 0.0;
    }

    Student(string name, string major, double GPA) {
        this->name = name;
        this->major = major;
        this->GPA = GPA;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Major: " << major << endl;
        cout << "GPA: " << GPA << endl;
    }

    friend void changeDetails(Student& s);
};
//Change details about student 
void changeDetails(Student& s) {
    int choice;
    cout << "Enter choice 1 to change major or 2 to change GPA: ";
    cin >> choice;

    if (choice == 1) {
        string newMajor;
        cout << "Enter new major: ";
        cin.ignore();  
        getline(cin, newMajor);
        s.major = newMajor;
    }
    else if (choice == 2) {
        double newGPA;
        cout << "Enter new GPA: ";
        cin >> newGPA;
        s.GPA = newGPA;
    }
    else {
        cout << "Invalid choice!" << endl;
        return;
    }

    cout << "Updated details:" << endl;
    s.display();
}

int main() {
    Student S1; // Using default constructor
    string name, major;
    double GPA;

    cout << "Enter name for S2: ";
    getline(cin, name);
    cout << "Enter major for S2: ";
    getline(cin, major);
    cout << "Enter GPA for S2: ";
    cin >> GPA;

    Student S2(name, major, GPA); // Using parameterized constructor

    cout << "Details of S1:" << endl;
    S1.display();

    cout << "Details of S2:" << endl;
    S2.display();

    int choice;
    cout << "Enter choice 1 for S1 or 2 for S2: ";
    cin >> choice;

    if (choice == 1) {
        changeDetails(S1);
    }
    else if (choice == 2) {
        changeDetails(S2);
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
