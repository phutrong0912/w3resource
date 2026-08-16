/*Write a C++ program to rearrange the elements of a given array of integers in a zig-zag pattern.
Note: The format zig-zag array in form a < b > c < d > e < f.*/

#include <iostream>
using namespace std;
void zigZag(int arr[], int n)
{
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (flag)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        else
        {
            if (arr[i] < arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        flag = !flag;
    }
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
    zigZag(arr, n);
    cout << "Zig-zag array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
