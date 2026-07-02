/*Write a program in C++ to check whether a number is prime or not.

Sample Output:
Input a number to check prime or not: 13
The entered number is a prime number.*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    if (isPrime(n))
        cout << "The entered number is a prime number.\n";
    else
        cout << "The entered number is not a prime number.\n";
    return 0;
}