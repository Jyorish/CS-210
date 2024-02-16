/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repository is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

Figure 2.6.3: Health data: Calculating total heartbeats lifetime.
*/
#include<iostream>
using namespace std;

int main(){
    int userAgeYears;               // declaring an integer variable
    int userAgeDays;
    int userAgeMinutes;
    int totalHeartbeats;
    int avgBeatsPerMinute = 72;     // declaring an integer variable and assigning a value

    cout << "Enter your age in years: ";    // output statement
    cin >> userAgeYears;                    // reads user input and stores in the variable

    userAgeDays = userAgeYears * 365;                   // computes userAgeDays
    userAgeDays = userAgeDays + (userAgeYears / 4);     // computes days for leap year

    cout << "You are " << userAgeDays << " days old." << endl;      // output statement

    userAgeMinutes = userAgeDays * 24 * 60;             // computes userAgeMinutes
    cout << "You are " << userAgeMinutes << " minutes old." << endl;    // output statement

    totalHeartbeats = userAgeMinutes * avgBeatsPerMinute;           // computes totalHeartBeats
    cout << "Your heart has beat " << totalHeartbeats << " times." << endl; // output statement

    return 0;
}
