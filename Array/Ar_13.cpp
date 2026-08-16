/*Write a C++ program to separate even and odd numbers in an array of integers. Put all even numbers first, and then odd numbers.*/
#include <iostream>
using namespace std;

void separateEvenOdd(int a[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (a[left] % 2 == 0 && left < right)
            left++;
        while (a[right] % 2 == 1 && left < right)
            right--;
        if (left < right)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    int a[n];
    cout << "Input array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    separateEvenOdd(a, n);
    cout << "Array after separating even and odd numbers: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
