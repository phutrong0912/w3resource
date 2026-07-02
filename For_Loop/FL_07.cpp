/*Write a program in C++ to find the factorial of a number.

Sample output:
Input a number to find the factorial: 5
The factorial of the given number is: 120*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, f = 1;
    cout << "Input a number to find the factorial: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "The factorial of the given number is: " << f;
    return 0;
}