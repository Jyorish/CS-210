/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

Figure 2.2.2: Variable initialization: Example program.
*/

#include<iostream>
using namespace std;

int main() {
    int avgLifespan = 70;   // declaing a variable and assigning initial value
    int userAge;            // declaing a variable

    cout << "Enter your age: ";     // basic output
    cin >> userAge;                 // getting user input and storing in variable userAge
    cout << userAge << " is a great age" << endl;   // basic output

    cout << "Average lifespan is " << avgLifespan << endl;  // basic output

    return 0;
}