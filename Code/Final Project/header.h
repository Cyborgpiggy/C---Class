#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;

class City{
    public:
        int array[10][10];
        int JewelCount;
};

class Jewel{
    public:
        int value;
        int cords;

};

class Robber{

    public:
        int id;
        int currentcords;
        int bag = 17;
        int counttotal;
        bool active;
        string robbertyper;

        void pickUpLoot(){

        }
        void move(){

        }
};



#endif