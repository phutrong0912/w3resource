/*Write a C++ program to compute the sum of the two given arrays of integers, length 3
and find the array that has the largest sum.
Sample Input:
{ 1, 5, 7 }
{ 1, 5, 3 }
Sample Output:
New array:
1 5 7*/

#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    nt s = 0;

    for (int i = 0; i < n; i++)
        s += a[i];

    return s;
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int a[5], b[5], n = 3;
    cout << "Input elements array 1: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Input elements array 2: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (sum(a, n) >= sum(b, n))
        print(a, n);
    else
        print(b, n);

    return 0;
}
