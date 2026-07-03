/*Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.

Sample Output:
Input the value of X: 3
Input the value for nth term: 4
term 1 value is: 1
term 2 value is: -4.5
term 3 value is: 3.375
term 4 value is: -1.0125
The sum of the above series is: -1.1375*/

#include <iostream>
#include <cmath>
using namespace std;

double sum(int x, int n)
{
    double sum = 0;
    double t = 1; 

    for (int i = 0; i < n; i++)
    {
        cout << "term " << i + 1 << " value is: " << t << endl;
        sum += t;
        t *= -1.0 * x * x / ((2 * i + 1) * (2 * i + 2));
    }
    return sum;
}

int main()
{
    int x, n;
    cout << "Input the value of X: ";
    cin >> x;
    cout << "Input the value for nth term: ";
    cin >> n;
    int result = sum(x, n);
    cout << "The sum of the above series is: " << result << endl;
    return 0;
}