// Programmer: Ryan DeHaan 
// Date: 2/17/2023. 
// File: fahr2celc.cpp
// Assignment: HW2
// Purpose: this file contains the main function of the
//   program which will input Fahrenheit temps from the user,
//   then convert and output Celsius.

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int casted,wands,pet,money,tutition,final_tutition;
    float score, total_score;
    int donation_percentage = 1;
    tutition = rand() % 1000000 + 50000 ;
    int og_tutition = tutition ;
    cout<<"How many different spells the applicant has casted successfully";
    cin >> casted;
    score = score + casted * 10;
    cout<<"How many wands the applicant owns";
    cin >> wands;
    score = score + wands * 2;
    cout<<"Does the applicant have a pet named Moraine? (1 for yes/0 for no) ";
    cin >> pet;
    tutition = tutition  - score * 100;
    tutition = tutition - 5000 * casted;
    if (pet == 1){
        donation_percentage = donation_percentage + 10;
        tutition = tutition - 20000;
    }
    cout<<"How much money has the applicant donated to the academy’s magical director? ";
    cin >> money;
    if (money > 0){
        donation_percentage = donation_percentage + 5;
        if(money > 99999){
            final_tutition = tutition + (money / 100000) * 20000;
        }
    }
    cout<< donation_percentage;
    total_score = score + score * (donation_percentage / 100);
    cout<<"Thank you for your input." << endl;
    cout<<"The following information will be used to determine if the applicant is to be accepted to the academy: " << endl;
    tutition = round(tutition);
    cout <<"The applicant’s total score is: " << total_score << endl;
    cout <<"The applicant’s donation percentage is: " << donation_percentage << endl;
    cout <<"The applicant’s original tuition cost is: " << og_tutition << endl;
    cout <<"The applicant’s reduced tuition cost with scholarships is: " << tutition << endl;
    cout <<"The applicant’s final tuition cost after the donation adjustment is: " << final_tutition << endl;
    return 0;
}

