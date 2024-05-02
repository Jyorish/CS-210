/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.10 Using math functions

PARTICIPATION ACTIVITY 2.10.1: Using a math function.

This program is to illustrate the use of math library and its functions. A statement #include<cmath>
is used to include the math library.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double sideSquare;          // declaring double variable
    double areaSquare = 49.0;   // declaring and initializing double variable

    sideSquare = sqrt(areaSquare);      // compute

    cout << "Square root of " << areaSquare << " is " << sideSquare << endl;    // basic output

    return 0;
}