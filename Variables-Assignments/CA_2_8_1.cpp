/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.8 Scientific notation for floatinng-point literals

CHALLENGE ACTIVITY 2.8.1: Acceleration of gravity.

Compute the acceleration of gravity for a given from the earth's center, distCenter, assigning
the result to accelerateGravity. The expression for the acceleration of gravity is: (G * M) /
(d ^ 2), where G is the gravitional constant 6.673 x 10 ^ -11, M is the mass of the earth 5.98
x 10 ^ 24 (in kg) and d is the distance in meters from the earth's center (stored in variable
distCenter). Note: Assume distance is at least the raduis of the earth.
*/

#include <iostream>
using namespace std;

int main() {
    double G = 6.673e-11;
    double M = 5.98e24;
    double accelGravity;
    double distCenter;

    cin >> distCenter;

    /* Your solution goes here  */
    accelGravity = (G * M) / (distCenter * distCenter);

    cout << accelGravity << endl;

    return 0;
}