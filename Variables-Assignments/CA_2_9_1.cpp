/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.9 Constant variables

CHALLENGE ACTIVITY 2.9.1: Using constants in expressions.

The cost to ship a package is a flat fee of 75 cents plus 25 cents per pound.
1. Declare a const named CENTS_PER_POUND and initialize with 25.
2. Get the shipping weight from user input storing the weight into shipWeightPounds.
3. Using FLAT_FEE_CENTS and CENTS_PER_POUND constants, assign shipCostCents with the cost of
shipping a package weighing shipWeightPounds.
*/

#include<iostream>
using namespace std;

int main(){
    int shipWeightPounds;
    int shipCostCents = 0;
    const int FLAT_FEE_CENTS = 75;

    /* Your solution goes here */
    const int CENTS_PER_POUND = 25;         // declaring const variable and initializing
    
    cout << "Enter shipping weight: ";      // basic output (not required for this activity)
    cin >> shipWeightPounds;                // reads user input

    shipCostCents = FLAT_FEE_CENTS + (CENTS_PER_POUND * shipWeightPounds);  // compute

    cout << "Weight(lb): " << shipWeightPounds;
    cout << " , Flat fee(cents): " << FLAT_FEE_CENTS;
    cout << " , Cents per lb: " << CENTS_PER_POUND << endl;
    cout << "Shipping cost(cents): " << shipCostCents << endl;

    return 0;
}