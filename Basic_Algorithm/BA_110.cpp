/*Write a C++ program to check a given array of integers and return true if there is a 3 with a 5 somewhere later in the given array.
Sample Input:
{ 3, 5, 1, 3, 7 }
{ 1, 2, 3, 4 }
{ 3, 3, 5, 5, 5, 5}
{ 2, 5, 5, 7, 8, 10}
Sample Output:
1
0
1
0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 3)
            found = true;
        if (found && a[i] == 5)
            return true;
    }

    return false;
}
int main()
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << checkArray(a, n) << endl;
    return 0;
}