/*Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
Sample Output:

Input the value of x: 2
Input number of terms: 5
The values of series:
2
-8
32
-128
512*/

#include <iostream>
using namespace std;

void sum(int x, int n)
{
    long long t = x;
    cout << "The values of series: ";
    for (int i = 1; i <= n; i++)
    {
        cout << t << endl;
        t *= -x * x;
    }
}

int main(int argc, char const *argv[])
{
    int x, n;
    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> n;
    sum(x, n);
    return 0;
}