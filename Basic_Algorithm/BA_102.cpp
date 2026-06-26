/*Write a C++ program to check if a given array of integers contains 5 next to a 5 somewhere.
Sample Input:
{ 1, 5, 6, 9, 10, 17 }
{ 1, 5, 5, 9, 10, 17 }
{ 1, 5, 5, 9, 10, 17, 5, 5 }
Sample Output:
0
1
1*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5 && a[i + 1] == 5)
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
