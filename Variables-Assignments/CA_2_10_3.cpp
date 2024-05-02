/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.10 Using math functions

CHALLENGE ACTIVITY 2.10.3: Using math functions to calculate the distance between two points.

Determine the distance between point(x1, y1) and point(x2, y2), and assign the result to
pointsDistance. The calculation is:

Distance = sqrt((pow(x2 -x1), 2) + pow((y2 + y1), 2))

Ex: For points (1.0, 2.0) and (1.0, 5.0), pointsDistance is 3.0.
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, xDist = 0.0, yDist = 0.0, pointsDistance = 0.0;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    // Your solution goes here
    xDist = x2 - x1;
    yDist = y2 - y1;
    pointsDistance = sqrt(pow(xDist, 2) + pow(yDist, 2));

    //pointsDistance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << pointsDistance << endl;

    return 0;
}