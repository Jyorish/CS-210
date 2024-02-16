/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

CHALLENGE ACTIVITY 2.2.1: Enter the output of the variable assignment.
--------------------------------------------------------------------------------
NOTE : This is to explain how program in each level is operating. To run each level copy
and paste the code and run.
--------------------------------------------------------------------------------
*/

/*
--------------------
Level 1
--------------------

#include<iostream>
using namespace std;

int main() {
    int x;      // declaring an integer x
    int y;      // declaring an integer y

    x = 7;      // assigning a value to an integer x
    y = 5;      // assigning a value to an integer y

    cout << x << " " << y;      // display the value of an integer x " " y

    return 0;
}

--------------------
OUTPUT
--------------------
7 5
*/

/*
--------------------
Level 2
--------------------
#include<iostream>
using namespace std;

int main() {
    int x;      // declaring an integer
    int y;      // declaring an integer

    x = 7;      // assigning a value
    y = 2;      // assigning a value

    cout << x << " " << y;      // display the value of x " " y on the screen

    return 0;
}
--------------------
OUTPUT
--------------------
7 2
*/

/*
--------------------
Level 3
--------------------
#include<iostream>
using namespace std;

int main() {
    int x;      // declaing an integer
    int y;      // declaing an integer

    x = 5;      // assigning a value
    y = 2;      // assigning a value
    x = 9;      // assigning a new value

    cout << x << " " y;     // prints the output on the screen

    return 0;
}
--------------------
OUTPUT
--------------------
9 2

EXPLANATION: Intially the variable x is assigne with the value 5 and variable y with the value 2.
Again the variable x is assigned with the value 9. Machine recognize the later assigned value only.
Thus the machine outputs 9 2.
*/

/*
--------------------
Level 4
--------------------
#include<iostream>
using namespace std;

int man() {
    int x;          // declaring an integer x
    int y;          // declaring an integer y

    y = 3;          // assigning a value to an integer y
    x = y;          // assigning a value to an integer x

    cout << x << " " << y;      // print the value of x  " " y

    return 0;
}
--------------------
OUTPUT
--------------------
3 3

EXPLANATION: Integer y is assiging a value 3 and x is assigned y. Which means the value of integer
x equals to the value of integer y, whihc is 3. Thus the final output is 3 3.
*/

/*
--------------------
Level 5
--------------------
#include<iostream>
using namespace std;

int main() {
    int x;      // declaring an integer x
    int y;      // declaring an integer y

    y = 7;          // assigning a value to an integer y
    x = y + 2;      // assigning a value to an integer x

    cout << x << " " << y;

    return 0;
}
--------------------
OUTPUT
--------------------
9 7

EXPLANATION: Integer y is assigned a value 7. Integer x is assigned a value of y + 2. This means
whatever the value of y is, x is y + 2. Thus the final output 9 7.
*/

/*
--------------------
Level 6
--------------------
#include<iostream>
using namespace std;

int main() {
    int x;
    int y;

    y = 6;
    x = y + 2;
    y = 12;

    cout << x << " " << y;

    return 0; 
}
--------------------
OUTPUT
--------------------
8 12

EXPLANATION:  Initially integer is assinged a value 6 and ineger x is assigned y + 2. Whihc makes
the value of integer x is 8, then again integer y is reassigned the value 12. Thus the final 
output is 8 12. 
*/