/*Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.

Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126*/

#include <iostream>
#include <cmath>
using namespace std;

double sum(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double t = 1.0 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << t << endl;
        sum += t;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input the value : ";
    cin >> n;
    double result = sum(n);
    cout << "The sum of the above series is: " << result << endl;
    return 0;
}