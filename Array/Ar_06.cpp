/*Write a C++ program to find all elements in an array of integers that have at least two significant elements.*/
#include <iostream>
#include <climits>
using namespace std;
void findElements(int a[], int n)
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
    cout << "Elements having at least two greater elements: ";

    for (int i = 0; i < n; i++)
    {
        if (a[i] < second)
            cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    findElements(a, n);
    return 0;
}