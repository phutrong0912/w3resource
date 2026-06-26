/*Write a C++ program to compute the sum of values in a given array of integers except the number 17.
Return 0 if the given array has no integers.
Sample Input:
{ 1, 5, 7, 9, 10, 17 }
Sample Output:
Sum of values in the array of integers except the number 17:
32*/

#include <iostream>
using namespace std;

int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 17)
            sum += a[i];
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int n;
    int a[100];
    cout << "Input size: ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << sum(a, n) << endl;
    return 0;
}