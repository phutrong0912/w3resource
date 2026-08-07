/*Write a C++ program to find the second largest element in an array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int a[], int n)
{
    if (n < 2)
        return INT_MIN;
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }
    return second;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int a[100];
    cout << "Input array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int second = secondLargest(a, n);
    if (second == INT_MIN)
        cout << "Array must contain at least 2 distinct elements.";
    else
        cout << "The second largest element is: " << second;

    return 0;
}

