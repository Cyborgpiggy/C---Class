#ifndef HEADER_H
#define HEADER_H

#include <string> 

using namespace std;

//Struct Definitions//
struct player{
    int m_earnings = 100;
    int m_lifelines = 3;
    int m_incorrect = 0;
    string m_name;
};

struct question{
    string m_prompt;
    string m_choices;
    string m_correctAnswer;
    int m_correctAnswerInt;
};

//function prototypes//
void greet();
void printQuestion(const int questionNumber);
void isCorrect(const int questionNumber, player p1, int & value, const string playerAnswer = "3");
void lifeLine(const int questionNumber, player p1);
void answerRandomly(const player p1, const int questionNumber);
int leave();
void exitMessage(player p1, const int questionNumber);
void checkInput();

//templated functions//
template <typename T>
T absoluteDifference(T var1, T var2){
    T diff = abs(var1 - var2);
    return diff;
}

template <typename C>
void updateMoney(C & currentMoney, const bool isCorrect){
    if(isCorrect == true){
        if(currentMoney != 0){
            currentMoney *= 2;
        }
        else{
            currentMoney = 100;
        }
    }
    else if(currentMoney != 0){
        currentMoney -= 100;
    }
    return;
}

#endif