/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.7 Floating-point numbers (double)

CHALLENGE ACTIVITY 2.7.1: Sphere volume.
Given sphereRadius, compute the volume of a sphere and assign sphereVolume with the result. Use
(4.0 / 3.0) to perform floating-point division, instead of (4 / 3) which performs integer division.

Volume of sphere = (4.0 / 3.0) π r^3 (Hint: r^3 can be computed using *)
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double sphereVolume;
    double sphereRadius;

    cin >> sphereRadius;

    /* Your solution goes here  */
    sphereVolume = (4.0 / 3.0) * (3.14) * (sphereRadius * sphereRadius * sphereRadius);

   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}