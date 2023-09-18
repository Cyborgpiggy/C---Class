// Programmer: Ryan DeHaan 
// Date: 2/22/2023. 
// File: pa03.cpp
// Assignment: HW3
//Purpose: Ceaser Cipher 

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char e_d;
    string userinput;
    string message = "Eqpitcvwncvkqpu! Vjg Quect Cecfgoa qh Ocike ku vjtknngf vq kphqto aqw vjcv aqw jcxg dggp cfokvvgf vq qwt rtguvkikqwu kpuvkvwvkqp. Aqwt jctf yqtm, vcngpv, cpf rcuukqp hqt ocike jcxg gctpgf aqw c rnceg coqpi vjg pgzv igpgtcvkqp qh vjg yqtnf'u itgcvguv ykbctfu. Kp cffkvkqp vq vjg 8 ycpfu tgswktgf hqt vjg qrgpkpi yggm, yg yqwnf nkmg vq tgokpf aqw vq cnuq dtkpi c ecogn ykvj aqw cu c ocikecn etgcvwtg rgv. Vjku ku c pgy tgswktgogpv hqt cnn uvwfgpvu, cu ecognu ctg mpqyp hqt vjgkt cdknkva vq vtcxgtug gxgp vjg jctujguv qh vgttckpu, ocmkpi vjgo rgthgev eqorcpkqpu hqt cpa aqwpi ykbctf qp vjg iq. Rngcug pqvg vjcv vjg vwkvkqp hgg ku pqy hkzgf cv $50,000 rgt ugoguvgt hqt cnn uvwfgpvu fwg vq kphncvkqp. Vjku kpxguvogpv kp aqwt gfwecvkqp cpf vtckpkpi yknn ugv aqw wr hqt c nkhgvkog qh ocikecn uweeguu. Yg nqqm hqtyctf vq ygneqokpi aqw vq vjg cecfgoa cpf jgnrkpi aqw wpnqem aqwt hwnn rqvgpvkcn. Ygnn fqpg!";
    string decript = "";
    int shiftValue = 2;
    cout<<"Welcome to the Oscar Academy of Magic Caesar Cipher Progrom!"<< endl;
    cout<<"Unraveling the secret acceptance decision letter from the Oscar Academy of Magic…"<< endl;
    cout <<"Using a shift value of 2…"<< endl;
    cout<<"Drumroll please..."<<endl;
    cout<<"The acceptance letter says:"<< endl;
    userinput = 'y';
    char ch;
    for (int i = 0; i<message.length(); i++){
        ch = message[i];
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - shiftValue;
            if (ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - shiftValue;
            if(ch < 'A') {
               ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
         }
        }
        cout << "Decrypted message: " << message;

    
    while(userinput == "y" or userinput == "Y"){
        cout<<"Now, let's start encoding and decoding some messages!"<< endl;
        cout<<"Do you want to encrypt or decrypt a message? (e/d)";
        cin >> e_d;
        if(e_d == 'e' or e_d == 'E'){
            cout<<"Enter message to be encoded: "<<endl;
            cin>>message;
            cout<<"Enter the shift value(0-200): ";
            cin>>shiftValue;
            for(int i = 0; i<message.length(); ++i){
                ch = message[i];
            if(ch >= 'a' && ch <= 'z'){
                ch = ch + shiftValue;
                if (ch < 'a'){
                    ch = ch - 'z' + 'a' - 1;
                }
                message[i] = ch;
            }
            else if(ch >= 'A' && ch <= 'Z'){
                ch = ch + shiftValue;
                if(ch < 'A') {
                ch = ch - 'Z' + 'A' - 1;
                }
                message[i] = ch;
            }
            }
            cout<<"Encrypted Message: " << message << endl;
        }
        else if(e_d == 'd' or e_d == 'D'){
            cout<<"Enter message to be encoded: ";
            cin>>message;
            cout<<"Enter the shift value(0-200): ";
            cin >> shiftValue;
            for (int i = 0; i<message.length(); i++){
                ch = message[i];
                if(ch >= 'a' && ch <= 'z'){
                    ch = ch - shiftValue;
                    if (ch < 'a'){
                        ch = ch + 'z' - 'a' + 1;
                    }
                    message[i] = ch;
                }
                else if(ch >= 'A' && ch <= 'Z'){
                    ch = ch - shiftValue;
                    if(ch < 'A') {
                    ch = ch + 'Z' - 'A' + 1;
                    }
                    message[i] = ch;
                }
                }
                cout << "Decrypted message: " << message;
        }
        cout<<"Would you like to continue the program? (y/n): ";
        cin >> userinput;
    }

    }


