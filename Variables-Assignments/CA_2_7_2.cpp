/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.7 Floating-point numbers (double)

CHALLENGE ACTIVITY 2.7.2: Floating-point numbers(double).
*/
/*
Level 1

The inverse of inputVelocity is 1 / inputVelocity. The following program intends to read a
floating-point value from input, compute the inverse of the value, and output the inverse, but
the code contains errors. Find and fix the errors.

Ex: If the input is 0.170, then the output is:

The inverse of velocity = 1 / 0.170 = 5.882

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // Modify the following code
    // int inputVelocity;
    // int velocityInverse;
    double inputVelocity;       // declare double variable
    double velocityInverse;     // declare double variable

    cin >> inputVelocity;       // read user input

    velocityInverse = 1 / inputVelocity;        // compute velocityInverse

    cout << "The inverse of velocity = 1 / " << fixed << setprecision(3) << inputVelocity;
    cout << " = " << velocityInverse << endl;

    return 0;
}
*/
/*
Level 2

The area of a circle is given by circleArea = pi * circleRadius ^ 2. Declare double variables
circleRadius and circleArea. Then, read circleRadius from input and compute circleArea using
the formula.

Ex: If the input is 2.90, then the output is:
26.42

NOTE:
* Use the constant M_PI for pi.
* circleRadius ^ 2 can be computed using *.

#include<cmath>
#include<iostream>
using namespace std;

int main() {
    // Your code goes here.
    double circleRadius, circleArea;        // declare double variable

    cin >> circleRadius;                    // read user input

    circleArea = M_PI * circleRadius * circleRadius;        // compute for circleArea

    cout << fixed << setprecision(2) << circleArea << endl;

    return 0;
}
*/
/*
Level 3

Complete the code to output "32 fluid ounces = 1 quart". On the next line, output the value of
volOunce to two digits after the decimal point, followed by "fluid ounces = " and then the value
of volQuarts to four digits after the decimal point, and lastly " quarts". End with a newline.

Ex: If the input is 64.00, then the output is:

32 fluid ounces = 1 quart
64.00 fluid ounce = 2.0000 quarts

Note: setprecision(X) can be used in an output statement to print a double to X digits after the
decimal point.

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double volOunces;
    double volQuarts;

    cin >> volOunces;

    volQuarts = volOunces / 32;

    // Your code goes here.
    cout << "32 fluid ounces = 1 quart" << endl;
    cout << fixed << setprecision(2) << volOunces << " fluid ounces = " << setprecision(4) << 
    volQuarts << " quarts" << endl;

    return 0;
}
*/
/*
Level 4

The pressure of gas is given by gasPressure = gasVolume / (gasTemperature * 8.314). Read double
variables gasVolume and gasTemperature from input, respectively. Then, compute gasPressure using
the formula. Finally, output "Gas pressure is " followed by the gasPressure to five digits after
the decimal point. End with a newline.

Ex: If the input is 6.0 10.0, then the output is:

Gas pressure is 0.07217

#include<iomanip>
#include<iostream>
using namespace std;

int main() {
    // Your code goes here
    double gasPressure, gasVolume, gasTemperature;

    cin >> gasVolume;
    cin >> gasTemperature;

    gasPressure = gasVolume / (gasTemperature * 8.314);

    cout << "Gas pressure is " << fixed << setprecision(5) << gasPressure << endl;

    return 0;
}
*/