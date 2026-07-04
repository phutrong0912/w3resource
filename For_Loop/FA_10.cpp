/*Write a program in C++ to find the sum of the digits of a given number.

Sample Output:
Input a number: 1234
The sum of digits of 1234 is: 10*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cout << "Input a number: ";
    cin >> n;
    for (int i = n; i > 0; i /= 10)
    {
        sum += i % 10;
    }
    cout << "The sum of digits of " << n << " is: " << sum;
    return 0;
}
