/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.11 Integer division and modulo

Figure 2.11.2: Division and modulo example: Minutes to hours/minutes.

The modulo operator (%) evaluates the reaminder of the division of two integer operands.
Ex: 23 % 10 is 3.
*/
#include<iostream>
using namespace std;

int main()
{
    int userMinutes;        // user input: Minutes
    int outHours;           // output hours
    int outMinutes;         // output minutes

    cout << "Enter minutes: ";
    cin >> userMinutes;

    outHours = userMinutes / 60;
    outMinutes = userMinutes % 60;

    cout << userMinutes << " minutes is " << outHours << " hours and " << outMinutes <<
    " minutes." << endl;

    return 0;
}