/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.8 Scientific notation for floatinng-point literals

Figure 2.8.1: Calculating atoms of gold.
*/
#include<iostream>
using namespace std;

int main(){
    double avogradrosNumber = 6.02e23;      // Approximation of atoms per mole
    double gramsPerMoleGold = 196.9665;
    double gramsGold;                       // declaring double variables
    double atomsGold;

    cout << "Enter grams of gold: ";        // basic output
    cin >> gramsGold;                       // reads user input

    atomsGold = gramsGold / gramsPerMoleGold * avogradrosNumber;    // compute

    cout << gramsGold << " grams of gold contains ";        // basic output
    cout << atomsGold << " atoms" << endl;                  // basic output

    return 0;
}