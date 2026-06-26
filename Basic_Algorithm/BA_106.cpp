/*Write a C++ program to check if a given array of integers contains a 3 or a 5.
Sample Input:
{ 5, 5, 5, 5, 5 }
{ 3, 3, 3, 3 }
{ 3, 3, 3, 5, 5, 5}
{ 1, 6, 8, 10}
Sample Output:
1
1
1
0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 3 || a[i] == 5)
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
