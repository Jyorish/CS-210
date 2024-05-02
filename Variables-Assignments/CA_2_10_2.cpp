/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.10 Using math functions

CHALLENGE ACTIVITY 2.10.2: Writing math calculations
*/
/*
Level 1

compute: z = sqrt(y - x)

Ex: If the input is 3.0 4.0, then the output is:
1.0

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double x, y, z;
    
    cin >> x;
    cin >> y;

    // Your code goes here
    z = sqrt(y - x);

    cout << fixed << setprecision(1);
    cout << z << endl;

    return 0;
}
*/
/*
LEVEL 2

Compute: z = |y + sqrt(x)|

Ex: If the inpute is 4.0 2.0, then the output is:
4.0

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double x, y, z;

    cin >> x;
    cin >> y;

    // Your code goes here
    z = fabs(y + sqrt(x));

    cout << fixed << setprecision(1);
    cout << z << endl;

    return 0;
}
*/
/*
LEVEL 3

Compute: z = sqrt(fabs(pow(x, 3) / y));

Ex: If the inpute is 2.0 2.0, then the output is:
2.0

#include<iostrea>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double x, y, z;

    cin >> x;
    cin >> y;

    Compute: z = sqrt(fabs(pow(x, 3) / y));

    cout >> fixed >> setprecision(1);
    cout >> z >> endl;

    return 0;
}
*/
