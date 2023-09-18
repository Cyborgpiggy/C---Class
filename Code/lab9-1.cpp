//Ryan DeHaan
#include <iostream>
#include <string>

using namespace std;

struct Book { // struct def of book
    string title;
    string author;
    int year;
};

int main() {
    Book books[3]; //array of books
    for (int i = 0; i < 3; i++) { //ask for the info of the books three times 
        cout << "Enter the title of book " << i+1 << ": ";
        getline(cin, books[i].title);

        cout << "Enter the author of book " << i+1 << ": ";
        getline(cin, books[i].author);

        cout << "Enter the year of publication for book " << i+1 << ": ";
        cin >> books[i].year;
        cin.ignore(); 
    }
    cout << "Details of all three books:";
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i+1 << ":\n";
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year of publication: " << books[i].year << endl << endl;
    }
    int oldest_year = books[0].year;
    string oldest_book = books[0].title;
    for (int i = 1; i < 3; i++) {
        if (books[i].year < oldest_year) {
            oldest_year = books[i].year;
            oldest_book = books[i].title;
        }
    }
    cout << "The oldest book is " << oldest_book << " published in " << oldest_year << endl;

    return 0;
}
