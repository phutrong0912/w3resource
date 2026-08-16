/*Write a C++ program to rearrange a given sorted array of positive integers .
Note: In final array, first element should be maximum value, second minimum value, third second maximum value , 
fourth second minimum value, fifth third maximum and so on.*/

#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int temp[100];
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            temp[i] = arr[right--];
        else
            temp[i] = arr[left++];
    }

    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Input sorted array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    rearrange(arr, n);
    cout << "Result: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
