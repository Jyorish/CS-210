/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.9 COnstant variables

Figure 2.9.1: Constant variable example: Lightning distance.

This program is to illustrate the use of an initialized variable whose value cannot change, this
type of variable is known as CONSTANT VARIABLE. For clarity and visibility, constant variables are named using
upper case letters with words seperated by underscores.
*/

#include<iostream>
using namespace std;

int main(){
    const double SPEED_OF_SOUND = 761.207;      // speed of sound mph on sea level
    const double SECONDS_PER_HOUR = 3600.0;     // sec / hr
    double secondsBetween, timeInHours, distInMiles;

    cout << "Enter seconds between lightning and thunder: ";
    cin >> secondsBetween;

    timeInHours = secondsBetween / SECONDS_PER_HOUR;
    distInMiles = SPEED_OF_SOUND * timeInHours;

    cout << "Lightning strike was approximately " << endl;
    cout << distInMiles << " miles away." << endl;

    return 0;
}