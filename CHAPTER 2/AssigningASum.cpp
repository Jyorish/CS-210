/*
CHALLENGE ACTIVITY 2.2.2: Assigning a sum.

Write a statement that assigns numCoins with numNickles + numDimes. Ex: 5 nickles and 6 dimes
results in 11 coins.
*/
#include<iostream>
using namespace std;

int main() {
    int numCoins;       // declaring an integer numCoins
    int numNickles;     // declaring an integer numNickles
    int numDimes;       // declaring an integer numDimes

    numNickles = 5;     // assigning a value to an integer numNickles
    numDimes = 6;       // assigning a value to an integer numDimes

    /* Your soulution here */
    // computing the value of an integer numCoins, which is numNickles + numDimes
    numCoins = numNickles + numDimes;

    cout << "There are " << numCoins << " coins" << endl;

    return 0;
}