/*Write a C++ program to find the second lowest and highest numbers in a given array.*/
#include <iostream>
#include <climits>
using namespace std;

void secondLowestHighest(int arr[], int n)
{
    if (n < 2)
    {
        cout << "Array must have at least two elements.";
        return;
    }

    int min1 = INT_MAX, min2 = INT_MAX;
    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }

        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    if (min2 == INT_MAX || max2 == INT_MIN)
    {
        cout << "Second lowest or second highest does not exist.";
    }
    else
    {
        cout << "Second lowest: " << min2 << endl;
        cout << "Second highest: " << max2 << endl;
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
    secondLowestHighest(arr, n);
    return 0;
}