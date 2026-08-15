/*Write a C++ program to find the second smallest elements in a given array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

int secondSmallest(int arr[], int n)
{
    if (n < 2)
        return 0; 

    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > first && arr[i] < second)
        {
            second = arr[i];
        }
    }

    return second; 
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int second = secondSmallest(a, n);
    if (second == INT_MAX)
        cout << "Array must contain at least 2 distinct elements.";
    else
        cout << "The second smallest element is: " << second;
    return 0;
}
