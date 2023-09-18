// Programmer: Ryan DeHaan
// Date: 3/3/2023
// File: pa04.cpp
// Assignment: HW4
//Purpose: Worlde with friends
#include <iostream>
#include <string.h>
using namespace std;
string word,player1,player2;
string guessed_word;
char letterx, lettery;
int friendship_level, times = 0, totalfriendship;
void printGameSummary(string player1 , string player2, int oldLevel, int newLevel){
    cout<<"End-of-Round Game Summary" << endl;
    cout << "Player 1: " << player1 << endl;
    cout << "Player 2: " << player2 << endl;
    cout << "Intial Friendship Level: "<< oldLevel << endl;
    cout << "Current Friendship Level: " << newLevel << endl;
}
void player2turn(){
    for(int x=0; x<6; x++){
        cout << "Enter a word:";
    cin >> guessed_word;
    if (word == guessed_word){
        cout << "Congrats!!!"<< endl;
        x = 6;
        totalfriendship = friendship_level + times;
    }
    else{
        cout << "You entered " << guessed_word << ". Nice try, keep going!" << endl; 
        for(int i=0; i<word.length(); i++){
            letterx = word[i];
            lettery = guessed_word[i];
                if(letterx == lettery){
                    cout << lettery << ": ^o^" << endl;
                }
                else if(word.find(lettery) < word.length()){
                    cout << lettery << ": ^-^" << endl;
                }
                else{
                    cout << lettery << ": @.@"<< endl;
                }
        
                
        }
    times = times + 1;
    }
    }
    printGameSummary(player1, player2, friendship_level, totalfriendship);
}

void start(){
    cout << "Enter Player 1 Name:";
    cin >> player1;
    cout << "Enter Player 2 Name:";
    cin >> player2;
    cout << "Enter a word to guess:";
    cin >> word;
    cout << "Enter Friend Ship level:";
    cin >> friendship_level;
    player2turn();
}
void greet(){
    cout << "Welcome to Worlde For Friends!" << endl;
}

int main(){
    greet();
    start();
}