/*Write a C++ program to rotate the elements of a given array of integers (length 4 ) in the left direction and
return the changed array.
Sample Input:
{ 10, 20, 30, 40 }
Sample Output:
Rotated array:
20 30 40 10*/

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n)
{
    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;
}

int main(int argc, char const *argv[])
{
     int arr[4];
    cout << "Input elements: ";
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    leftRotate(arr, 4);
    cout << "Array after rotate: ";
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}