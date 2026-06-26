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

void sumArray(int a[], int b[], int n)
{
    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < n; i++)
    {
        sumA += a[i];
        sumB += b[i];
    }
    if (sumA > sumB)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    int a[5], b[5], n = 3;
    cout << "Input elements array 1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Input elements array 2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sumArray(a, b, n);
    return 0;
}
