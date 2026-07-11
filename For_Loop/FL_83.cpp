/*Write a C++ program to compute the sum of the digits of an integer.

Sample Output:
Input any number: 25
The sum of the digits of the number 25 is: 7*/

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Input any number: ";
    cin >> n;
    int temp = n;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    cout << "The sum of the digits of the number "<< n<< " is: "<< sum << endl;
    return 0;
}