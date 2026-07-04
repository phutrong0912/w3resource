/*Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

Sample Output:
Input number of terms: 5
9 99 999 9999 99999
The sum of the sarise = 111105*/

#include <iostream>
using namespace std;

int sum(int n)
{
    int t = 0;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        t = t * 10 + 9;
        cout << t << " ";
        s += t;
    }

    cout << endl;
    return s;
}

int main()
{
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    int result = sum(n);
    cout << "The sum of the series = " << result << endl;

    return 0;
}