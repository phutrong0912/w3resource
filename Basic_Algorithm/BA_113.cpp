/*Write a C++ program to check a given array of integers and return true if every 5 that appears in the given array is next to another 5.
Sample Input:
{ 3, 5, 5, 3, 7 }
{ 3, 5, 5, 4, 1, 5, 7}
{ 3, 5, 5, 5, 5, 5}
{ 2, 4, 5, 5, 6, 7, 5}
Sample Output:
1
0
1
0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // If the current element is 5,
        // check whether it has another 5 next to it.
        // - At begin of the array, there is no left neighbor.
        // - At end of the array, there is no right neighbor.
        // If neither neighbor is 5, return false.
        if (a[i] == 5 && (i == 0 || a[i - 1] != 5) && (i == n - 1 || a[i + 1] != 5))
        {
            return false;
        }
    }
    return true;
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
    cout << checkArray(a, n) << endl;
    return 0;
}
