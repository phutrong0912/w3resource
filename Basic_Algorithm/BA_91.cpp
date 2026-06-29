/*Write a C++ program to check a given array of integers and return true if the array contains 10 or 20 twice.
The length of the array will be 0, 1, or 2.
Sample Input:
{ 12, 20 }
{ 20, 20 }
{ 10, 10 }
{ 10 }
Sample Output:
0
1
1
0*/

#include <iostream>
using namespace std;

bool test(int arr[], int n)
{
    return n == 2 && arr[0] == arr[1] && (arr[0] == 10 || arr[0] == 20);
}

int main()
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int a[2];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << test(a, n) << endl;

    return 0;
}