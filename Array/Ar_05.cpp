/*Write a C++ program to find the second smallest elements in a given array of integers.*/

#include <iostream>
#include <climits>
using namespace std;

bool minElements(int a[], int n, int first, int second)
{
    if (n < 2)
        return false;
    first = INT_MAX;
    second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        if (t < first)
        {
            second = first;
            first = t;
        }
        else if (t < second && t != first)
        {
            second = t;
        }
    }
    if (second == INT_MAX)
        return false;  

    return true;
}

int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int first, second;
    if (minElements(a, n, first, second))
    {
        cout << "The two smallest elements are: "
             << first << " " << second << endl;
    }
    else
    {
        cout << "Array must contain at least two distinct elements.\n";
    }
    return 0;
}
