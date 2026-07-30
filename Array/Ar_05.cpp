/*Write a C++ program to find the second smallest elements in a given array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

bool secondSmallest(int a[], int n, int second)
{
    if (n < 2)
        return false;
    int first = INT_MAX;
    second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] < second && a[i] != first)
        {
            second = a[i];
        }
    }
    return second;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int second;
    if (secondSmallest(a, n, second))
        cout << "Second smallest element: " << second << endl;
    else
        cout << "Array must contain at least two distinct elements.\n";

    return 0;
}
