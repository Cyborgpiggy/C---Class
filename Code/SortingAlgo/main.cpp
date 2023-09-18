#include <iostream>
#include <string>
#include "header.h"
using namespace std;
const int maxgames = 100;
int numGames;
void addGame(VideoGame games[], int& numGames){
    if (numGames >= maxgames){
        cout << "Cannot add more games. The collection is full." << endl;
        return;
    }
    VideoGame newGame;
    cout <<"Enter game title: " << endl;
    getline(cin, newGame.GameTitle);

    for (int i =0; i < numGames; i++){
        if(games[i].GameTitle == newGame.GameTitle){
            cout << "The game already exists in the collection." << endl;
            return;
        }
    }
    newGame.GameID = numGames + 1;
    cout << "Enter game genre: ";
    getline(cin, newGame.Genre);
    cout << "Enter game platform: ";
    getline(cin, newGame.Platform);
    cout << "Enter game release year: ";
    cin >> newGame.ReleaseYear;
    cin.ignore();
    cout << "Enter developer name: ";
    getline(cin, newGame.developer.DevName);
    cout << "Enter developer Country: ";
    getline(cin, newGame.developer.DevCountry);

    games[numGames] = newGame;
    numGames++;
    return;
}
void displayGames(VideoGame games[], int numGames){
    if (numGames == 0){
        cout << "There are no games ain the collection." << endl;
        return;
    }
    for (int i = 0; i < numGames; i++){
        cout << "Game ID:" << games[i].GameID << endl;
        cout << "Game Title:" << games[i].GameTitle << endl;
        cout << "Game Genre:" << games[i].Genre << endl;
        cout << "Game Platform:" << games[i].Platform << endl;
        cout << "Game Release Year:" << games[i].ReleaseYear << endl;
        cout << "Developer Name:" << games[i].developer.DevName << endl;
        cout << "Develope Country:" << games[i].developer.DevCountry << endl;
    }
}
void searchGames(VideoGame games[], int numGames){
    int searchChoice;
    string searchTerm;

    cout << "Enter search term: ";
    getline(cin, searchTerm);

    cout << "Search by:" << endl;
    cout << "1. ID" << endl;
    cout << "2. Title" << endl;
    cout << "3. Genre" << endl;
    cout << "4. Platform" << endl;
    cout << "5. Release Year" << endl;
    cout << "6. Developer Name" << endl;
    cout << "Enter choice: ";
    cin >> searchChoice;
    cin.ignore(); 
    
    bool found = false;

    for (int i = 0; i < numGames; i++){
        bool match = false;
        switch (searchChoice){
            case 1: 
                match = (games[i].GameID == searchChoice);
                break;
            case 2:
                match = (games[i].GameTitle == searchTerm);
                break;
            case 3:
                match = (games[i].Genre == searchTerm);
                break;
            case 4:
                match = (games[i].Platform == searchTerm);
                break;
            case 5:
                match = (games[i].ReleaseYear == stoi(searchTerm));
                break;
            case 6:
                match = (games[i].developer.DevName == searchTerm);
                break;
        }
    }
}
void sortGames(VideoGame games[], int numGames) {
    int i, j;
    bool swapped;
    VideoGame temp;
    string sort_criteria;

    cout << "Enter sort criteria (id/title): ";
    getline(cin, sort_criteria);

    for (i = 0; i < numGames - 1; i++) {
        swapped = false;
        for (j = 0; j < numGames - i - 1; j++) {
            if (sort_criteria == "id") {
                if (games[j].GameID > games[j + 1].GameID) {
                    temp = games[j];
                    games[j] = games[j + 1];
                    games[j + 1] = temp;
                    swapped = true;
                }
            }
            else if (sort_criteria == "title") {
                if (games[j].GameTitle > games[j + 1].GameTitle) {
                    temp = games[j];
                    games[j] = games[j + 1];
                    games[j + 1] = temp;
                    swapped = true;
                }
            }
        }
        if (swapped == false) {
            break;
        }
    }

    cout << "Sorted Games:" << endl;
    for (i = 0; i < numGames; i++) {
        cout << "Game ID: " << games[i].GameID << endl;
        cout << "Title: " << games[i].GameTitle << endl;
        cout << "Genre: " << games[i].Genre << endl;
        cout << "Platform: " << games[i].Platform << endl;
        cout << "Release Year: " << games[i].ReleaseYear << endl;
        cout << "Developer: " << games[i].developer.DevName << " "<< games[i].developer.DevCountry << endl;
        cout << endl;
    }
}
int main(){
    int userchoice;
    cout<< "Please chose an option \n 1. Add a game \n 2. display all games \n 3. search for a game \n 4. sort the collection \n 5.exit \n Enter your choice: ";
    cin >> userchoice;
    switch (userchoice)
    {
    case 1:
        addGame(new VideoGame, numGames);
    case 2: 
        displayGames(new VideoGame, numGames);
    case 3:
        searchGames(new VideoGame, numGames);
    case 4:
        sortGames(new VideoGame, numGames);
    case 5:
        break;
    
    }

}
