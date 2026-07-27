/*Write a C++ program to find the second smallest elements in a given array of integers.*/

#include <iostream>
#include <climits>
using namespace std;
void MinElements(int a[], int n)
{
    if (n < 2)
    {
        cout << "array must contain at least 2 elements.\n";
        return;
    }
    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];
        if (t < first)
        {
            second = first;
            first = t;
        }
        else if (t < second && t != first)
        {
            second = t;
        }
    }
    cout << "The two smallest elements are: "<< first << " " << second << endl;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    MinElements(a, n);
    return 0;
}