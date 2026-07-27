/*Write a C++ program to find the largest three elements in an array.*/

#include <iostream>
#include <climits>
using namespace std;

void MaxElements(int a[], int n)
{
    if (n < 3)
    {
        cout << "array must contain at least 3 elements.\n";
        return;
    }
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];

        if (t > first)
        {
            third = second;
            second = first;
            first = t;
        }
        else if (t > second && t != first)
        {
            third = second;
            second = t;
        }
        else if (t > third && t != second)
        {
            third = t;
        }
    }
    cout << "The three largest elements are: "
         << first << " " << second << " " << third << endl;
}

int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    MatElements(a, n);
    return 0;
}