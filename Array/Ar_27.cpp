/*Write a C++ program to find the number of pairs of integers in a given array of integers whose sum is equal to a specified number.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int countPairs(int arr[], int n, int target)
{
    unordered_map<int, int> freq;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int t = target - arr[i];
        if (freq.find(t) != freq.end())
            count += freq[t];

        freq[arr[i]]++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n, target;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Input target sum: ";
    cin >> target;
    int pairCount = countPairs(arr, n, target);
    cout << "Number of pairs with sum " << target << ": " << pairCount << endl;
    return 0;
}