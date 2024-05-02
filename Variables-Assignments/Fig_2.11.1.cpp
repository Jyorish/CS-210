/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.11 Integer division and modulo

Figure 2.11.1: Divide-by-zero example: Compute salary per day.

For integer divison, the second operand of / or % must never be 0, because dicision by 0 is
mathematically undefined.
*/
#include<iostream>
using namespace std;

int main()
{
    int salaryPerYear;      // user input: Yearly salary
    int daysPerYear;        // user input: days worked per year
    int salaryPerDay;       // output: Salary per day

    cout << "Enter yearly salary: ";
    cin >> salaryPerYear;

    cout << "Enter days worked per year: ";
    cin >> daysPerYear;

    // If daysPerYear is 0, then divided-by-zero causes program termination.
    salaryPerDay = salaryPerYear / daysPerYear;

    cout << "Salary per day is: " << salaryPerDay << endl;

    return 0;
}