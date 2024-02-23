/*
This code is part of class CS 210: Programming Language offered by Southern New Hampshire
University. No copyright infringement intended. This repositery is part of my learning
journey.
2. Variables/Assignments - C++
2.2 Variables (int)

PARTICIPATION ACTIVITY 2.2.5: Variable assignment overwrite a variable's previous values:
People-lnown example.
*/
#include<iostream>
using namespace std;

int main() {
    int yourFriends;        // declaring an integer variable
    int totalFriends;       // declaring an integer variable

    cout << "Enter the number of people you know: ";
    cin >> yourFriends;
    totalFriends = yourFriends;
    cout << " You know " << totalFriends << " people.\n";
    totalFriends = totalFriends * yourFriends;
    cout << " Those people konw " << totalFriends << " people.\n";
    totalFriends = totalFriends * yourFriends;
    cout << " And they know " << totalFriends << " people.\n\n";

    return 0;
}