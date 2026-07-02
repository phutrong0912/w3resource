/*Write a program in C++ to find the perfect numbers between 1 and 500.

The perfect numbers between 1 to 500 are:
6
28
496*/

#include <iostream>
using namespace std;

int Perfectnum(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main(int argc, char const *argv[])
{
    cout << "The perfect numbers between 1 to 500 are: " << endl;
    for (int i = 1; i <= 500; i++)
    {
        if (Perfectnum(i))
            cout << i << endl;
    }
    return 0;
}