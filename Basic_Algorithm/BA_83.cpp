/*Write a C++ program to check two given arrays of integers of length 1 or more. This will return true if they have the same first element or if they have the same last element.
Sample Input:
{ 10, 20, 40, 50 }, { 10, 20, 40, 50 }
{ 10, 20, 40, 50 }, { 10, 20, 40, 5 }
{ 10, 20, 40, 50 }, { 1, 20, 40, 5 }
Sample Output:
1
1
0*/
#include <iostream>
using namespace std;

bool test(int a[], int n, int b[], int m)
{
    if (n == 0 || m == 0)
        return false;
    return a[0] == b[0] || a[n - 1] == b[m - 1];
}

int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Input size array 1: ";
    cin >> n;
    cout << "Input size array 2: ";
    cin >> m;

    int a[100], b[100];
    cout << "Input elements array 1: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Input elements array 2: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << (test(a, n, b, m)) << endl;
    return 0;
}
