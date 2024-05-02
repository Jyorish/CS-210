/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

Figure 2.6.2: Health data: Caluclating user's age in days and minutes.
*/
#include<iostream>
using namespace std;

int main(){
    int userAgeYears;       // declating an integer variables
    int userAgeDays;
    int userAgeMinutes;

    cout << "Enter your age in years: ";    // basic output
    cin >> userAgeYears;                    // reads user input

    userAgeDays = userAgeYears * 365;       // computes user age in days
    userAgeDays = userAgeDays + (userAgeYears / 4);                 // add days for leapyear

    cout << "You are " << userAgeDays << " days old." << endl;          // basic output

    userAgeMinutes = userAgeDays * 24 * 60; // computes user age in minutes
    cout << "You are " << userAgeMinutes << " minutes old." << endl;    // basic output

    return 0;
}