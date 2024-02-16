/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repository is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

Figure 2.6.1: Health data: Calculating user's age in days.
*/
#include<iostream>
using namespace std;

int main(){
    int userAgeYears;       // declaring integer variable to store user age in years
    int userAgeDays;        // declaring integer variable to store user age in days

    cout << "Enter your age in years: ";    // basic output
    cin >> userAgeYears;                    // reads user input and stores in integer variable

    userAgeDays = userAgeYears * 365;       // computes to get user age in days

    cout << "You are " << userAgeDays << " days old." << endl;  // basic output

    return 0;
}
