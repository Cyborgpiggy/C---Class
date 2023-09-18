#include "header.h"

#include <random>
#include <iostream>
using namespace std;



//Struct Declarations//
static const question q[10] = {
"Question 1:Which of these is not a numeric data type? ", "\n1 - integer\n 2 - double\n 3 - boolean\n 4 - float\n", "3", 3,
"Question 2:Which of the following is a reserved c++ keyword? ", "\n1 - buddy\n 2 - friend\n 3 - pal\n 4 - homeslice\n", "2", 2,
"Question 3:What does the & symbol mean in C++?", "\n1 - address of\n 2 - and\n 3 - not\n 4 - value of\n", "1", 1,
"Question 4:You do not need to document your functions in CS1570 ", "\n1 - true\n 2 - false\n 3 - sometimes\n 4 - I don't know\n", "2", 2,
"Question 5:What is “OOP”?", "\n1 - Only Once Programming\n 2 - Object Oriented Programming\n 3 - What I say when I stub my toe\n 4 - Ope, oh peanuts\n", "2", 2,
"Question 6:How many significant digits can a float have? ", "\n1 - 9\n 2 - 8\n 3 - 7\n 4 - 6\n", "4", 4,
"Question 7:If C is 3, then C++ is: ", "\n1 - An object oriented programming language\n 2 - 4\n 3 - Amazing\n 4 - All of the above\n", "4", 4,
"Question 8:What is the maximum value of a signed integer in C++? ", "\n1 - 81\n 2 - 2147483647\n 3 - 11\n 4 - 12\n", "2", 2,
"Question 9:What does == do in C++? ", "\n1 - Sets the left variable equal to the right value\n 2 - Checks the validity of a data type in C++\n 3 - Checks if 2 values are equal to each other\n 4 -All of the above\n", "3", 3,
"Question 10:Can you lose money in this game show? ", "\n1 - Yes\n 2 - No\n 3 - Don’t pick this one\n 4 - Don’t pick this one either\n", "1", 1};

//Function Definitions//
void greet(){
    cout<<"Welcome"<<endl;
    return;
}

void printQuestion(int questionNumber){
    cout<<q[questionNumber].m_prompt<<q[questionNumber].m_choices<<endl;
    return;
}

void isCorrect(const int questionNumber, player p1, int & value, const string playerAnswer){
    cout<<"Checking response"<<endl;
    if(playerAnswer == "random"){
        answerRandomly(p1, questionNumber);
    }
    else if(playerAnswer == "lifeline"){
        lifeLine(questionNumber, p1);
    }
    else if(playerAnswer == "leave"){
        value = leave();
    }
    else if(playerAnswer == "1" || playerAnswer == "2" || playerAnswer == "3" || playerAnswer == "4"){
        if(playerAnswer == q[questionNumber].m_correctAnswer){
            value = 1;
        }
        else{
            value = 0;
        }
    }
    else{
        cout<<"Bad input"<<endl;
    }
}

void lifeLine(const int questionNumber, player p1){
    if(p1.m_lifelines > 0){
        int value = rand() % 100;
        
        if(value >= 20){
            cout<<"States: "<<q[questionNumber].m_correctAnswer<<" is the answer."<<endl;
        }
        else{
            value = 1 + (rand() % 3);

            if(q[questionNumber].m_correctAnswerInt == value){
                
                value = 4;
            }
            cout<<"Your sheep bestie thinks : "<<value<<" is the answer."<<endl;
        }
    }
    else{
    }
    return;
}

void answerRandomly(const player p1, const int questionNumber){
    int value = rand() % 100;
    if(p1.m_lifelines == 3){
        if(value < 21){
            value = 5 + (rand() % 2);
        }
        else{
            value = 1 + (rand() % 4);
            
        }
    }
    else if(p1.m_lifelines > 0){
        if(value < 29){
            value = absoluteDifference(2, q[questionNumber].m_correctAnswerInt);
        }
        else{
            value = 1 + (rand() % 4);
        }
    }
    else{
        if(value < 62){
            value = q[questionNumber].m_correctAnswerInt;
        }
        else{
            value = 1 + (rand() % 4);
        }
    }
    cout<<"The sheeps lord has chosen "<<value<<". MEHHHHHHH"<<endl;
    return;
}

int leave(){
    return 2;
}

void exitMessage(player p1, const int questionNumber){
    cout<<"This game of ARE YOU SMARTER THAN A COMPSCI??? Has concluded.\n You answered "<<questionNumber<<" questions, and missed "<<p1.m_incorrect<<" questions."<<endl;
    cout<<"Your total earnings are $"<<p1.m_earnings<<". Congragulations, and see you next time."<<endl;
}
