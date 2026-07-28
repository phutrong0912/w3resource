/*Write a C++ program to find the second largest element in an array of integers.*/
#include <iostream>
#include <climits>
using namespace std;

bool maxElements(int a[], int n, int first, int second)
{
    if (n < 2)
        return false;
    first = INT_MIN;
    second = INT_MIN;
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
    if (second == INT_MIN)
        return false; 
    return true;
}

int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int first, second;
    if (maxElements(a, n, first, second))
        cout << "The two largest elements are: "
             << first << " " << second << endl;
    else
        cout << "Array must contain at least two distinct elements.\n";

    return 0;
}
