/*Write a C++ program to check a given array of integers of length 1 or more. The program will return true if the first element and the last element are equal in the given array.
Sample Input:
{ 10, 20, 40, 50 }
{ 10, 20, 40, 10 }
{ 12, 24, 35, 55 }
Sample Output:
0
1
0*/

#include <iostream>
using namespace std;

bool test(int arr[], int n)
{
    if (n == 0)
        return false;
    return arr[0] == arr[n - 1];
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int arr[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << (test(arr, n)) << endl;
    return 0;
}