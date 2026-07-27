/*Write a C++ program to find the second largest element in an array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

void MaxElements(int a[], int n)
{
    if (n < 2)
    {
        cout << "array must contain at least 2 elements.\n";
        return;
    }
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];

        if (t > first)
        {
            second = first;
            first = t;
        }
        else if (t > second && t != first)
        {
            second = t;
        }
    }
    cout << "The two largest elements are: "
         << first << " " << second << endl;
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