/*Write a C++ program to compute the difference between the largest and smallest values in a given array of integers
and length one or more.
Sample Input:
{ 1, 5, 7, 9, 10, 12}
{0, 2, 4, 6, 8, 10}
Sample Output:
11
10*/
#include <iostream>
using namespace std;

int diff(int a[], int n)
{
    int maxv = a[0];
    int minv = a[0];
    for (int i = 0; i < n; i++)
    {
        minv = min(minv, a[i]);
        maxv = max(maxv, a[i]);
    }
    return maxv - minv;
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
    cout << diff(a, n) << endl;
    return 0;
}
