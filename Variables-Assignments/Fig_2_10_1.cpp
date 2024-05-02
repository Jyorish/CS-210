/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.10 Using math functions

Figure 2.10.1: Math fuction example: Mass growth

This program computes the growth of a biological mass, such as a tree. Ig the growth rate is 5% per
year, the program computes 1.05 raised to the number of years.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double initMass;                    // initial mass of substance
    double growthRate;                  // annual growth rate
    double yearsGrow;                   // years of growth
    double finalMass;                   // final mass after those years

    cout << "Enter initial mass: ";
    cin >> initMass;

    cout << "Enter growth rate (Ex: 0.05 is 5%/year): ";
    cin >> growthRate;

    cout << "Enter years of growth: ";
    cin >> yearsGrow;

    // Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow
    finalMass = initMass * pow(1.0 + growthRate, yearsGrow);

    cout << "Final mass after " << yearsGrow << " year is: " << finalMass << endl;

    return 0;
}