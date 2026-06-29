/*Write a C++ program to find the largest average value between the first and second halves of a given array of integers. Ensure that the minimum length is at least 2. Assume that the second half begins at index (array length)/2.
Test Data:
({ 1, 2, 3, 4, 6, 8 }) -> 6
({ 15, 2, 3, 4, 15, 11 }) -> 10*/

#include <iostream>
using namespace std;

int Average(int a[], int n)
{
    int mid = n / 2;
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < mid; i++)
        sum1 += a[i];

    for (int i = mid; i < n; i++)
        sum2 += a[i];

    int avg1 = sum1 / mid;
    int avg2 = sum2 / (n - mid);

    return (avg1 > avg2) ? avg1 : avg2;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << Average(a, n) << endl;
    return 0;
}