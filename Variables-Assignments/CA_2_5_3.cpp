/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

CHALLENGE ACTIVITY 2.5.3: Total Cost.

A drink costs 2 dollars. A taco costs 4 dollars. Given the number of each, compute total cost and
assign totalCost with the result. Ex: 4 drink and 6 tacos yield totalCost of 32.
*/
#include<iostream>
using namespace std;

int main(){
    int numDrinks;      // declaring an integer variables
    int numTacos;
    int totalCosts;

    cin >> numDrinks;   // reads user intput for number of drinks
    cin >> numTacos;    // reads user input for number of tacos

    /* Your solution goes here */
    // computes for totalCosts = drinks costs 2 dollars and taco costs 4 dollars
    // () are not required here since * have precedence over +
    totalCosts = numDrinks * 2 + numTacos * 4;

    cout << "Total cost: " << totalCosts << endl;

    return 0;
}