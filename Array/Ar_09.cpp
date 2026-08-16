/*Write a C++ program to sort a given unsorted array of integers, in wave form.
Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . */
#include <iostream>
#include <algorithm>
using namespace std;

void waveSort(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i += 2)
        swap(arr[i], arr[i + 1]);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    waveSort(arr, n);
    cout << "Wave array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
