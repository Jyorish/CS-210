/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.10 Using math functions

PARTICIPATION ACTIVITY 2.10.5: Function call in an argument.

This program is to illustrate a function call's argument itself includes a function call. Below
x^y is computed via pow(x, y). The resule is used in an expression that is an argument to another
call, in this case to pow() again: pow(2.0, pow(x, y) +1).
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x;                       // declaring double variable x, y, z.
    double y;
    double z;

    x = 3.0;                        // initializing a double varialbe
    y = 2.0;

    // a function's argument can be an expression, including a call to another function. 2^(x^(y+1))
    z = pow(2.0, pow(x, y) + 1);

    cout << z;

    return 0;
}