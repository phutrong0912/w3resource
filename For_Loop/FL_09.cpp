/*Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

Sample Output:
Input the first number: 25
Input the second number: 15
The Greatest Common Divisor is: 5*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, gcd;
    cout << "Input the first number: ";
    cin >> a;
    cout << "Input the second number: ";
    cin >> b;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << "The Greatest Common Divisor is: " << gcd;
    return 0;
}