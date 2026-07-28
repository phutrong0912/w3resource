/*Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.*/

#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            ans = mid;
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int x)
{
    int left = 0, right = n - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            ans = mid;
            left = mid + 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return ans;
}

int countOccurrences(int arr[], int n, int x)
{
    int first = firstOccurrence(arr, n, x);
    if (first == -1)
        return 0;
    int last = lastOccurrence(arr, n, x);
    return last - first + 1;
}

int main(int argc, char const *argv[])
{
     int n, x;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Input sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Input number to count occurrences: ";
    cin >> x;
    cout << "Number of occurrences of " << x << ": "<< countOccurrences(arr, n, x);
    return 0;
}
