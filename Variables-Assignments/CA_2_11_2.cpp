/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.11 Integer division and modulo

CHALLENGE ACTVITY 2.11.2: Compute change

A cashier districutes change using the maximum number of five dollar bills, followed by one dollar
bills. For example, 19 yields 3 fives an 4 ones. Write a single statement that assigns the number of
1 dollar bills to variable numOnes, given anoutnToChange.
*/
#include<iostream>
using namespace std;

int main()
{
    int amountToChange, numFives, numOnes;

    cin >> amountToChange;
    numFives = amountToChange / 5;

    numOnes = amountToChange % 5;

    cout << "numFives: " << numFives << endl;
    cout << "numOnes: " << numOnes << endl;

    return 0;
}