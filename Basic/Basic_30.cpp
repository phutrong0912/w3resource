/*  Write a C++ program to compute the total and average of four numbers.

Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25 */

#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, s, average;
    cin >> a >> b;
    cin >> c >> d;
    
    s = a + b + c + d;
    average = s / 4;

    cout << s << endl;
    cout << average << endl;
    return 0;
}