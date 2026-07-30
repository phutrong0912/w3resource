/*Write a C++ program to find the first repeating element in an array of integers.*/
#include <iostream>
#include <unordered_map>
using namespace std;
int firstRepeating(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] > 1)
            return arr[i];
    }
    return -1;
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
    int ans = firstRepeating(arr, n);
    if (ans == -1)
        cout << "No repeating element";
    else
        cout << "First repeating element: " << ans;

    return 0;
}