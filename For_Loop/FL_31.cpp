/*Write a C++ program to find the sum of an A.P. series.
Sample Output:
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 8
Input the common difference of A.P. series: 5
The Sum of the A.P. series are :
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148*/

#include <iostream>
using namespace std;

int sumAP(int start, int n, int d)
{
    int s = 0;
    int t = start;
    for (int i = 1; i <= n; i++)
    {
        cout << t;
        if (i < n)
            cout << " + ";
        else
            cout << " = ";
        s += t;
        t += d;
    }
    return s;
}

int main(int argc, char const *argv[])
{
    int start, n, d;
    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> d;
    cout << "The Sum of the A.P. series are :" << endl;
    cout << sumAP(start, n, d) << endl;
    return 0;
}