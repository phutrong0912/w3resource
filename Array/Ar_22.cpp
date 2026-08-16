/*Write a C++ program to find the missing element from two given arrays of integers except one element.*/

#include <iostream>
using namespace std;
int findMissing(int a[], int b[], int n, int m)
{
    int missing = 0;
    for (int i = 0; i < n; i++)
        missing ^= a[i];
    for (int i = 0; i < m; i++)
        missing ^= b[i];
    return missing;
}
int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Input number of elements in first array: ";
    cin >> n;
    int a[n];
    cout << "Input first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Input number of elements in second array: ";
    cin >> m;
    int b[m];
    cout << "Input second array: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << "Missing element: " << findMissing(a, b, n, m)<< endl;
    return 0;
}