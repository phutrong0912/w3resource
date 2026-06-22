/*Write a C++ program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.
Sample Input:
{1,1,2,3,1}
{1,1,2,4,1}
{1,1,2,1,2,3}
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;
bool check(int arr[], int size)
{
    for (int i = 0; i < size - 2; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 2 && arr[i + 2] == 3)
        {
            return true;
        }
    }
    return false;
}
int main(int argc, char const *argv[])
{
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << check(arr, n) << endl;
    return 0;
}