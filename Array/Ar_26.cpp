/*Write a C++ program to find and print all distinct elements of a given array of integers.*/

#include <iostream>
#include <unordered_map>
using namespace std;

void distinctElements(int arr[], int n)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    cout << "Distinct elements: ";
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
            cout << arr[i] << " ";
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
    distinctElements(arr, n);
    return 0;
}