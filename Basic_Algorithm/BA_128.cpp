/*Write a C++ program to create a list from a given list of integers. In this program, each integer value is added to 3 and the result value is multiplied by 4.
Test Data:
({ 1, 2, 3 , 4 }) -> {16 20 24 28}*/

#include <iostream>
using namespace std;

void Array(int arr[], int n, int result[])
{
    for (int i = 0; i < n; i++)
    {
        result[i] = (arr[i] + 3) * 4;
    }
}

int main()
{
    int n;
    cout << "Input size: ";
    cin >> n;

    int arr[100], result[100];

    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Array(arr, n, result);

    cout << "New array: ";
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}