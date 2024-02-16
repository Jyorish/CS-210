/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repository is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

Figure 2.5.1: Expression examples: Leasing cost.

Computes the total cost of leasing a car given the down payment, monthly rate, and number
of months.
*/
#include<iostream>
using namespace std;

int main(){
    int downPayment;
    int paymentPerMonth;
    int numMonths;
    int totalCost;

    cout << "Enter down payment: ";
    cin >> downPayment;

    cout << "Enter monthly payment: ";
    cin >> paymentPerMonth;

    cout << "Enter number of months: ";
    cin >> numMonths;

    totalCost = downPayment + (paymentPerMonth * numMonths);

    cout << "Total cost: " << totalCost << endl;

    return 0;
}
