/*Write a C++ program to count the number of occurrences of a given number in a sorted array of integers.*/

#include <iostream>
using namespace std;
int countOccurrences(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    int n, x;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Input number to count occurrences: ";
    cin >> x;
    int count = countOccurrences(arr, n, x);
    cout << "Number of occurrences of " << x << ": " << count << endl;
    return 0;
}