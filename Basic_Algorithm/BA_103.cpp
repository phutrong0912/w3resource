/*Write a C++ program to check whether a given array of integers contains 5's and 7's.
Sample Input:
{ 1, 5, 6, 9, 10, 17 }
{ 1, 4, 7, 9, 10, 17 }
{ 1, 1, 2, 9, 10, 17}
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5 || a[i] == 7)
        {
            return true;
        }
    }
    return false;
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
    cout << checkArray(a, n) << endl;
    return 0;
}