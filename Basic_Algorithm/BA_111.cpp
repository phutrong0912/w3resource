/*Write a C++ program to check a given array of integers. The program will return true if the given array contains either 2 even or 2 odd values all next to each other.
Sample Input:
{ 3, 5, 1, 3, 7 }
{ 1, 2, 3, 4 }
{ 3, 3, 5, 5, 5, 5}
{ 2, 4, 5, 6}
Sample Output:
1
0
1
1*/

#include <iostream>
using namespace std;

bool checkArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) || (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1))
        {
            return true;
        }
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