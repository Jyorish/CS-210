/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.7 Floating-point numbers (double)
Figure 2.7.1: Variables of type double: Travel time example.
*/
#include<iostream>
using namespace std;

int main() {
    double milesTravel;         // declaring a double variable.
    double hoursFly;
    double hoursDrive;

    cout << "Enter miles to travel: ";
    cin >> milesTravel;

    hoursFly = milesTravel / 500.0;     // planes flies 500 mph
    hoursDrive = milesTravel / 60.0;    // car drives 60 mph

    cout << milesTravel << " miles would take: " << endl;
    cout << " " << hoursFly << " hours to fly." << endl;
    cout << " " << hoursDrive << " hours to drive." << endl;
    
    return 0;
}