#include <iostream>
#include "shape.cpp"
#include "header.h"

using namespace std;
int main(){
double length, width;
cout << "Enter length of rectangle: ";
cin >> length;
cout << "Enter width of rectangle: ";
cin >> width;
cout << "Area of rectangle = " << computeArea(length, width) << endl;


cout << "Volume of cylinder with default values = " << computeVolume() << endl;


double radius, height;
cout << "Enter radius of cylinder: ";
cin >> radius;
cout << "Enter height of cylinder: ";
cin >> height;
cout << "Volume of cylinder with user inputs = " << computeVolume(radius, height) << endl;

return 0;
}