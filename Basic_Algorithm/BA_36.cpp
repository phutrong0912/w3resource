/*Write a C++ program to check if a triple is present in an array of integers or not. If a value appears three times in a row in an array it is called a triple.
Sample Input:
{ 1, 1, 2, 2, 1 }
{ 1, 1, 2, 1, 2, 3 }
{ 1, 1, 1, 2, 2, 2, 1 }
Sample Output:
0
0
1*/

#include <iostream>
using namespace std;

bool Triple(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << (Triple(a, n)) << endl;
    return 0;
}