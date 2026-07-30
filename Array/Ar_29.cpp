/*Write a C++ program to find the second lowest and highest numbers in a given array.*/
#include <iostream>
#include <climits>
using namespace std;

bool secondLowestHighest(int arr[], int n, int &secondMin, int &secondMax)
{
    if (n < 2)
        return false;

    int min1 = INT_MAX;
    secondMin = INT_MAX;

    int max1 = INT_MIN;
    secondMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min1)
        {
            secondMin = min1;
            min1 = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min1)
        {
            secondMin = arr[i];
        }
        if (arr[i] > max1)
        {
            secondMax = max1;
            max1 = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max1)
        {
            secondMax = arr[i];
        }
    }
    return !(secondMin == INT_MAX || secondMax == INT_MIN);
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int secondMin, secondMax;
    if (secondLowestHighest(arr, n, secondMin, secondMax))
    {
        cout << "Second lowest: " << secondMin << endl;
        cout << "Second highest: " << secondMax << endl;
    }
    else
    {
        cout << "Second lowest or second highest does not exist.";
    }

    return 0;
}
