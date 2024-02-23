/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.7 Floating-point numbers (double)
Figure 2.7.2: Floating-point division by zero example.

NOTE: Dividing a nonzero floating-point number by zero is undefined in regular arithmetic. 
Many programming languages produce an error when performing floating-point division by 0, but 
C++ does not. C++ handles this operation by producing infinity or -infinity, depending on the 
signs of the operands. Printing a floating-point variable that holds infinity or -infinity 
outputs inf or -inf.

If the dividend and divisor in floating-point division are both 0, the division results in a 
"not a number". Not a number (NaN) indicates an unrepresentable or undefined value. Printing a 
floating-point variable that is not a number outputs nan.
*/
#include<iostream>
using namespace std;

int main() {
    double gasVolume;       // declaing a double variable
    double oilVolume;
    double mixRatio;

    cout << "Enter gas volume: ";
    cin >> gasVolume;

    cout << "Enter oil volume: ";
    cin >> oilVolume;

    mixRatio = gasVolume / oilVolume;

    cout << "Gas to oil mix ratio is " << mixRatio << ":1" << endl;

    return 0;
}