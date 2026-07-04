/*Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

Sample Output:
Input the value of x: 3
Input number of terms: 5
The sum is : 16.375*/

#include <iostream>
using namespace std;

double sum(int x, int n)
{
    double s = 1;
    double t = 1;
    for (int i = 1; i < n; i++)
    {
        t = t * x / i;
        s += t;
    }

    return s;
}

int main()
{
    int x, n;
    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input number of terms: ";
    cin >> n;
    cout << "The sum is : " << sum(x, n) << endl;

    return 0;
}