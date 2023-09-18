#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
#include "header.h"
#include "functions.cpp"
using namespace std;
const int MaxCompetitors = 10;
const int MaxDuelingPairs = 5;
void displayMenu();
void addJediParticpant(Jedi competitors[], int numCompetitors);
void calculatePairings(Jedi competitors[], int numCompetitors, Jedi duelPairs[][2], int& numDuelPairs);
int calculateScore(Jedi& jedi1, Jedi& jedi2);
Jedi competitors[MaxCompetitors];
int numCompetitors = 0;
Jedi duelPairs[MaxDuelingPairs][2];
int numDuelPairs = 0;
void displayMenu(){
    int user_choice;
    cout << "1. Add a Jedi paricpants\n2. Calculate and display pairings\n3. Exit Program\n:";
    cin >> user_choice;
    switch(user_choice){
        case 1:
            addJediParticpant(competitors, numCompetitors);
            break;
        case 2:
            if (numCompetitors < 2 || numCompetitors % 2 == 1){
                cout << "Error: there must me at least 2 Jedi";
            }
            else{
                calculatePairings(competitors, numCompetitors, duelPairs, numDuelPairs);
                for (int i = 0; i < numDuelPairs; i++){
                    cout << "Duel pair " << i+1 << ": " << duelPairs[i][0].name << " vs. " << duelPairs[i][1].name << endl;
                    int score = calculateScore(duelPairs[i][0], duelPairs[i][1]);
                    cout << "Pairing score between " << duelPairs[i][0].name << " and " << duelPairs[i][1].name << " is " << score << endl;
                }
            }
        case 3:
            break;
    }
}
void addJediParticpant(Jedi competitors[], int numCompetitors){
    if(numCompetitors >= MaxCompetitors){
        cout << "Error: The tournament is already full." << endl;
        return;
    }
    Jedi newJedi;
    cout << "Enter Jedi Lightsaber color: ";
    cin >> newJedi.LS_color;
    cin.ignore();
    cout << "Enter Jedi Name: ";
    getline(cin, newJedi.name);
    cout << "Enter Jedi Skill Level: ";
    cin >> newJedi.SkillLevel;
    cin.ignore();
    cout << "Enter Jedi Force Strength: ";
    cin >> newJedi.ForceStrength;
    cin.ignore();

    competitors[numCompetitors] = newJedi;
    numCompetitors++;
    main();

}
void calculatePairings(Jedi competitors[], int numCompetitors, Jedi duelPairs[][2], int& numDuelPairs){
    numDuelPairs = numCompetitors / 2;
    for(int i =0; i < numDuelPairs; i++){
        duelPairs[i][0] = competitors[2*i];
        duelPairs[i][1] = competitors[2*i+1];
    }
    return;
}
int calculateScore(Jedi& jedi1, Jedi& jedi2) {
    int score = abs(jedi1.SkillLevel - jedi2.SkillLevel) + abs(jedi1.ForceStrength - jedi2.ForceStrength);
    return score;
};
int main(){
    displayMenu();
    return 0;
};