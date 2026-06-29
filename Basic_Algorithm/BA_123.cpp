/*Write a C++ program that creates a new array of odd numbers with specific lengths from a given array of positive integers.
Test Data:
({1,2,3,5,7,9,10},3) -> {1,3,5}*/

#include <iostream>
using namespace std;

int create(int a[], int n, int k, int result[])
{
    int count = 0;

    for (int i = 0; i < n && count < k; i++)
    {
        if (a[i] % 2 != 0)
        {
            result[count] = a[i];
            count++;
        }
    }

    return count;
}

int main()
{
    int a[100], n, k;
    cout << "Input number: ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Input k: ";
    cin >> k;
    int result[7];

    int m = create(a, n, k, result);

    cout << "New array: ";
    for (int i = 0; i < m; i++)
        cout << result[i] << " ";

    cout << endl;

    return 0;
}