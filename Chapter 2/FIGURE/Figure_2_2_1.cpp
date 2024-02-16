/*
FIGURE 2.2.1: Assigning a variable.
*/
#include<iostream>
using namespace std;

int main() {
    int litterSize;                 // declaring an integer litterSize
    int yearlyLitters;              // declaring an integer
    int annualMice;                 // declaring an integer

    litterSize = 3;                 // assigning a value to an integer litterSize
    yearlyLitters = 5;              // assigning a valur to an integer

    cout << "One female mouse may give birth to ";  // outputs the text inside double quotes
    annualMice = litterSize * yearlyLitters;        // computing the value and assigning to an int
    cout << annualMice << " mice," << endl;         // output the value of int followed by text

    litterSize = 14;                // assigning new value to an integer litterSize
    yearlyLitters = 10;             // assigning a new value

    cout << "and up to ";
    annualMice = litterSize * yearlyLitters;        // computing the value and assigning to an int
    
    // display the new value of integer annualMice followed by the text inside double quote 
    cout << annualMice << " mice, in a year." << endl;

    return 0;
}