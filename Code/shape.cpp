#include <iostream>
#include "header.h"

using namespace std;

double computeArea(const double length, const double width){
    return length * width;
}
double computeVolume(const double radius, const double height){
    const double pi = 3.1416;
    return pi * radius * radius * height;
}