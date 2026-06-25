/*Write a C++ program to compute the sum of the elements of an array of integers.
Sample Input:
{ 10, 20, 30, 40, 50 }
{ 10, 20, -30, -40, 50 }
Sample Output:
150
10*/

#include <iostream>
using namespace std;

int sumArray(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << sumArray(a, n) << endl;
    return 0;
}