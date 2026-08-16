/*Write a C++ program to find and print all distinct elements of a given array of integers.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int distinctElements(int arr[], int n, int result[])
{
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
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
    int size = distinctElements(arr, n, result);
    cout << "Distinct elements: ";
    for (int i = 0; i < size; i++)
        cout << result[i] << " ";

    return 0;
}
