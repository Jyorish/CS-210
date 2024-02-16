/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

CHALLENGE ACTIVITY 2.5.2: Compute an expression.

Write a statement that assigns finalResult with the sum of num1 and num2, divided by 3. Ex: If
num1 is 4 and num2 is 5, finalResult is 3.
*/
#include<iostream>
using namespace std;

int main(){
    int num1;       // declaring an integer variables
    int num2;
    int finalResult;

    cin >> num1;    // reads user input for num1
    cin >> num2;    // reads user input for num2

    /* Your solution goes here */
    // computes for finalResult = sum of num1 and num2, divided by 3
    finalResult = (num1 + num2) / 3;

    cout << "Final result: " << finalResult << endl;    // basic output

    return 0;
}