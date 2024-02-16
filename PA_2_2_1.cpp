/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)
Participation Activity 2.2.1: A variable refers to a memory location.
*/
#include<iostream>
using namespace std;

int main() {
    /* A variable decleration is a statement that declares a new variable, specifying the
    variable's name and type. */
    int userAge;                    // declaring an integer variable

    cout << "Enter your age: ";     // outputs text inside the double quotes
    cin >> userAge;                 // reads user input
    cout << userAge << " is a great age." << endl;      // outputs user input and text.

    return 0;
}

/*
Enter your age: 23
23 is a great age.
*/

/*
Compiler allocates a memory location for userAge.
First cout statement executes.
user types 23, cin assigns userAge with 23.
cout prints userAge's value to screen.
*/