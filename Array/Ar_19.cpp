/*Write a C++ program to find a number that occurs an odd number of times in a given array of positive integers. 
In the array, all numbers occur an even number of times.*/

#include <iostream>
using namespace std;

int oddOccurrence(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
        result ^= arr[i];
    return result;
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
    cout << "Number that occurs odd number of times: " << oddOccurrence(arr, n) << endl;
    return 0;
}