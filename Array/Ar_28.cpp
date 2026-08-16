/*Write a C++ program to arrange the numbers in a given array in a way that the sum of some numbers equals the largest number in the array*/
#include <iostream>
#include <algorithm>
using namespace std;

bool checkSum(int arr[], int n)
{
    sort(arr, arr + n);
    int largest = arr[n - 1];
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
        if (sum == largest)
            return true;
    }
    return false;
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
    if (checkSum(arr, n))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
