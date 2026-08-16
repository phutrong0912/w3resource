/*Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.*/
#include <iostream>
using namespace std;

int findSingle(int arr[], int n)
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
    cout << "Element that appears once: " << findSingle(arr, n) << endl;
    return 0;
}