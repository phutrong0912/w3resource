/*Write a C++ program to compute the sum of the numbers in a given array except the ones starting with 5
followed by at least one 6. Return 0 if the given array has no integers.
Sample Input:
{ 1, 5, 9, 10, 17 }
{ 1, 5, 6, 9, 10, 17 }
Sample Output:
Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6:
42
Sum of the numbers of the said array except those numbers starting with 5 followed by atleast one 6:
37*/

#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int sum = 0;
    bool st = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5)
            st = true;

        if (!st)
            sum += a[i];

        if (st && a[i] == 6)
            st = false;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    int a[100];
    cout << "Input size: ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sum(a,n) << endl;
    return 0;
}