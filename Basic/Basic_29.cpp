/*Write a C++ program to compute the quotient and remainder.

Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1 */
#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;
    cin >> dividend>> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout <<quotient << endl;
    cout << remainder << endl;
    return 0;
}