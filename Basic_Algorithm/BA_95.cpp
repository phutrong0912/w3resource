/*Write a C++ program to create an array by swapping the first and last elements of a given array of integers with a length of at least 1.
Sample Input:
{ 1, 5, 7, 9, 11, 13 }
Sample Output:
New array (after swapping the first and last elements of the said array):
13 5 7 9 11 1*/

#include <iostream>
using namespace std;
void swapArray(int a[], int n)
{
    if (n > 1)
    {
        swap(a[0], a[n - 1]);
    }
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input size : ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swapArray(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
