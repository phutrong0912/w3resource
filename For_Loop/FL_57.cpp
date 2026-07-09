/*Write a program in C++ to find the sum of the first and last digits of a number.

Sample Output:
Input any number: 12345
The first digit of 12345 is: 1
The last digit of 12345 is: 5
The sum of first and last digit of 12345 is: 6*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, f, l;
    cout << "Input any number: ";
    cin >> n;
    f = n;
    l = n % 10;
    while (f >= 10)
    {
        f /= 10;
    }
    cout << "The first digit of " << n << " is: " << f << endl;
    cout << "The last digit of " << n << " is: " << l << endl;
    cout << "The sum of first and last digit of " << n<< " is: " << f + l << endl;
    return 0;
}
