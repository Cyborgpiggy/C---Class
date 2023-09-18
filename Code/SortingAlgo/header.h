#ifndef HEADER_H
#define HEADER_H

#include <string> 

using namespace std;
struct Developer{
    string DevName;
    string DevCountry;
};

struct VideoGame{
    int GameID;
    string GameTitle;
    string Genre;
    string Platform;
    int ReleaseYear;
    Developer developer;
};



#endif 