//Programmer: Ryan DeHaan
//Date 3/22/23
//File: main.cpp
//Asisgnment: HW6
//Purpose: A game show to determine if you are smarter than a comp sci.
#include "header.h"
#include <random>
#include <iostream> //import libraries
#include "functions.cpp"

using namespace std;

int main(){
    srand(11);
    static int questionNumber = 0;
    player p1;
    string choice;
    int result;
    greet();
    do
    {    
        printQuestion(questionNumber);
        do
        {
            getline(cin, choice);
            isCorrect(questionNumber, p1, result, choice);

            if(choice == "lifeline"){
                p1.m_lifelines--;
            }

        } while (choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "" && choice != "leave");
        questionNumber++;


        if(result == 1){
            updateMoney(p1.m_earnings, result);
            cout<<"correct"<<endl;
        }
        else if(result == 0){
            updateMoney(p1.m_earnings, result);
            p1.m_incorrect++;
            cout<<"incorrect"<<endl;
        }

        if(result == 2 || p1.m_incorrect == 3 || questionNumber > 9){
            exitMessage(p1, questionNumber);
            result = 2;
        }
        


    } while (result != 2);
     
    return 0;//ends main
}