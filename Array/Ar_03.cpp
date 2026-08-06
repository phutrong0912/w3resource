/*Write a C++ program to find the second largest element in an array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

bool secondLargest(int a[], int n, int &second)
{
    if (n < 2)
        return false;
    int first = INT_MIN;
    second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }

    return second != INT_MIN;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int second;
    if (secondLargest(a, n, second))
        cout << "Second largest element: " << second << endl;
    else
        cout << "Array must contain at least two distinct elements.";

    return 0;
}
