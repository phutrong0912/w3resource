/*  Write a program in C++ to check whether a number is positive, negative or zero.

Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/

#include <iostream>
using namespace std;
int main() {
    double num;
    cin >> num;

    if (num > 0) {
        cout << "positive" << endl;
    } else if (num < 0) {
        cout << "negative" << endl;
    } else {
        cout << "zero" << endl;
    }
    return 0;
}