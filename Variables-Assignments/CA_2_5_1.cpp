/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repository is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

CHALLENGE ACTIVITY 2.5.1: Calculate the values of the integer expressions.
*/
/*
--------------------
Level 1

#include<iostream>
using namespace std;

int main(){
    int x;
    int y;

    x = 10;
    y = x + 4;

    cout << y << endl;
    
    return 0;
}

OUTPUT
14
--------------------
*/
/*
--------------------
Level 2
#include<iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;

    x = 9;
    y = 5;
    z = (8 * (x -7) + y);

    cout << z << endl;

    return 0;
}

OUTPUT
21
EXPLANATION: 
z = (8 * (x -7) + y)
z = (8 * (9 - 7) + 5)
z = (8 * (2) + 5)
z = (16 + 5)
z = 21
--------------------
*/
/*
--------------------
Level 3
#incude<iostream>
using namespace std;

int main() {
    int x;
    
    x = 8;
    x += 2;

    cout << x << endl;

    return 0;
}

OUTPUT
10
--------------------
*/
/*
--------------------
Level 4
#include<iostream>
using namespace std;

int main(){
    int x;
    int y;

    x = 4;
    y = 5;
    x += (2 - y);
    y = 9;

    cout << x << endl;
    cout << y << endl;

    return 0;
}

OUTPUT
1
9
EXPLANATION:
x += (2 - y)
x += -3 this is usually computed as x = x + -3 which is x = 4 - 3
x = 1
y is reassigned value 9, so y = 9.
--------------------
*/
