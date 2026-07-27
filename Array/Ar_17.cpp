/*Write a C++ program to sort (in descending order) an array of distinct elements according to the absolute difference of array elements and with a given value.*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int x;

bool compare(int a, int b)
{
    return abs(a - x) > abs(b - x);
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
    cout << "Input value x: ";
    cin >> x;
    sort(arr, arr + n, compare);
    cout << "Sorted array according to absolute difference with " << x << ": ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}