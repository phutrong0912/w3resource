/*Write a C++ program to create a list from a given list of integers where each element is multiplied by 5.
Test Data:
({ 1, 2, 3}) -> {5, 10, 15}
({2, 4, 7, 8}) -> {10, 20, 35, 40})*/

#include <iostream>
using namespace std;

void create(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] * 5 << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Input number: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    create(a, n);
    return 0;
}