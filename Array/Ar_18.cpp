/*Write a C++ program to move all negative elements of an array of integers to the end of the array. This is done without changing the order of the positive and negative elements of the array.*/
#include <iostream>
using namespace std;

void moveNegatives(int a[], int n)
{
    int temp[100];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            temp[index++] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
            temp[index++] = a[i];
    }

    for (int i = 0; i < n; i++)
        a[i] = temp[i];
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
    moveNegatives(a, n);
    cout << "Array after moving negative elements to the end: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}