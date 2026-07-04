/*Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345*/

#include <iostream>
using namespace std;

int sum(int n)
{
    int t = 0;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        t = t * 10 + 1;
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