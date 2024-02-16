/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repository is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

CHALLENGE ACTIVITY 2.2.4: Adding a number to a variable.

Write a statement that increases numPeople by 5. Ex: If numPeople is initially 10, the output
is: There are 15 people.
*/
#include<iostream>
using namespace std;

int main(){
    int numPeople;          // declaring an integer variable

    cin >> numPeople;       // reads user input and stores in variable numPeople

    /* Your solution goes here */
    numPeople = numPeople + 5;      // increase numPeople by 5

    cout << "There are " << numPeople << " people." << endl;    // basic output

    return 0;
}
