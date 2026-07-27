/*Write a C++ program to separate 0s and 1s from a given array of values 0 and 1.*/
#include <iostream>
using namespace std;

void separate01(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        while (left < right && arr[left] == 0)
            left++;

        while (left < right && arr[right] == 1)
            right--;

        if (left < right)
            swap(arr[left], arr[right]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input array (0s and 1s): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    separate01(arr, n);
    cout << "Result: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
