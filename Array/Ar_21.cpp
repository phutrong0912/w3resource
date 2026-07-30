/*Write a C++ program to find the two repeating elements in a given array of integers.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int findRepeating(int arr[], int n, int result[])
{
    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2)
            result[count++] = arr[i];
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[100];
    int result[100];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int size = findRepeating(arr, n, result);
    cout << "Repeating elements: ";
    for (int i = 0; i < size; i++)
        cout << result[i] << " ";

    return 0;
}