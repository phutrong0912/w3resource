/*Write a C++ program to create a list of the rightmost digits from a given list of positive integers.
Test Data:
({ 12, 20, 351, 4449}) -> {2, 0, 1, 9}*/

#include <iostream>
using namespace std;

void create(int arr[], int n, int result[])
{
    for (int i = 0; i < n; i++)
    {
        result[i] = arr[i] % 10;
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

    create(arr, n, result);

    cout << "New array: ";
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}