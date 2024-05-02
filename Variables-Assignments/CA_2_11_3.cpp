/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. 
No copyright infringement intended. 
This repositery is part of my learning journey.
2. Variables/Assignments - C++
2.11 Integer division and modulo

CHALLENGE ACTVITY 2.11.3: Integer division and modulo.
*/
/*
LEVEL 1

Integer variable totalFlowers and numFlowers are read from input. Assign numBouquets with the
maximum number of bouquets that can be made with totalFlowers flowers, if each bouquet consists of
numFlowers flowers.

Ex: If the input is 13 4, then the output is:
Maximum number of bouquets: 3

#include<iostream>
using namespace std;

int main()
{
    int totalFlowers;
    int numFlowers;
    int numBouquets;

    cin >> totalFlowers;
    cin >> numFlowers;

    // Your code goes here
    numBouquets = totalFlowers / numFlowers;

    cout << "Maximum number of bouquets: " << numBouquets << endl;

    return 0;
}
*/
/*
LEVEL 2

Integer userValue is read from user input. Assume userValue is greater than 1000 and less then
99999. Assign tensDigit with userValue's ten place value.
Ex: If the input is 35974, then the output is:

The value in the tens place is: 7

#include<iostream>
using namespace std;

int main()
{
    int userValue, tensDigit, tempVal;

    cin >> userValue;

    // Your code goes here
    tempVal = userValue / 10;
    tensDigit = tempVal % 10;

    cout << "The value in the tens place is: " << tensDigit << endl;

    return 0;
}
*/
/*
LEVEL 3

Convert totalDollars to 100-dollar bills, 10-dollar bills, finding the maximum number of
100-dollar bills then 10-dollar bills, then one-dollar bills.
Ex: If the input is 713, then the output is:

100-dollar bills: 7
10-dollar bills: 1
One-dollar bills: 3

#include<iostream>
using namespace std;

int main()
{
    int totalDollars, numHundreds, numTens, numOnes;

    cin >> totalDollars;

    // Your code goes here
    numHundreds = totalDollars / 100;
     
    int tempVal;

    tempVal = totalDollars % 100;
    numTens = tempVal / 10;

    numOnes = tempVal % 10;

    cout << "100-dollar bills: " << numHundreds << endl;
    cout << "10-dollar bills: " << numTens << endl;
    cout << "One-dollar bills: " << numOnes << endl;

    return 0;
}
*/