/*Write a C++ program to find the two repeating elements in a given array of integers.*/
#include <iostream>
#include <unordered_map>
using namespace std;

void findRepeating(int arr[], int n)
{
    unordered_map<int, int> freq;

    cout << "Repeating elements: ";
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;

        if (freq[arr[i]] == 2)
            cout << arr[i] << " ";
    }
    cout << endl;
}

main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    findRepeating(arr, n);
    return 0;
}