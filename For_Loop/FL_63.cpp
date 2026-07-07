/*Write a program in C++ to enter any number and print all factors of the number.

Sample Output:
Input a number: 63
The factors are: 1 3 7 9 21 63*/

#include <iostream>
using namespace std;

void factors(int n)
{
    cout << "The factors are: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    factors(n);
    return 0;
}
