/*Write a C++ program to find all elements in an array of integers that have at least two significant elements.*/
#include <iostream>
#include <climits>
using namespace std;

int findElements(int a[], int n, int result[])
{
    int first = INT_MIN, second = INT_MIN;

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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < second)
            result[count++] = a[i];
    }
    return count;
}

int main(int argc, char const *argv[])
{
     int n, a[100], result[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int size = findElements(a, n, result);
    cout << "Elements having at least two greater elements: ";
    for (int i = 0; i < size; i++)
        cout << result[i] << " ";

    return 0;
}
