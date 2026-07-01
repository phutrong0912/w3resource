/*Write a C++ program to check a given array of integers. 
The program will return true if the specified number of the same elements appears at the start and end of the given array.
Sample Input:
{ 3, 7, 5, 5, 3, 7 }, 2
{ 3, 7, 5, 5, 3, 7 }, 3
{ 3, 7, 5, 5, 3, 7, 5 }, 3
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n, int k)
{
    int last=n-k;

    for (int i = 0; i < k; i++)
    {
        if (a[i] != a[last + i])
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int n, k;
    cout << "Input size: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Input number: ";
    cin >> k;
    cout << checkArray(a, n, k) << endl;
    return 0;
}
