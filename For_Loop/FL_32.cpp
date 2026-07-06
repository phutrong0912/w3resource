/*Write a C++ program to find the sum of the GP series.
Sample Output:
Input the starting number of the G.P. series: 3
Input the number of items for the G.P. series: 5
Input the common ratio of G.P. series: 2
The numbers for the G.P. series:
3 6 12 24 48
The Sum of the G.P. series: 93*/

#include <iostream>
using namespace std;

int sumGP(int start, int n, int ratio)
{
    int t = start;
    int s = 0;
    cout << "The numbers for the G.P. series:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << t << " ";
        s += t;
        t *= ratio;
    }
    cout << endl;
    return s;
}

int main(int argc, char const *argv[])
{
    int start, n, ratio;
    cout << "Input the starting number of the G.P. series: ";
    cin >> start;
    cout << "Input the number of items for the G.P. series: ";
    cin >> n;
    cout << "Input the common ratio of G.P. series: ";
    cin >> ratio;
    int result = sumGP(start, n, ratio);
    cout << "The Sum of the G.P. series: " << result << endl;

    return 0;
}