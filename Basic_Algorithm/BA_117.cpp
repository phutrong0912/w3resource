/*Write a C++ program to check if there are two values 15, 15 adjacent to each other in a given array (length should be at least 2) of integers. Return true otherwise false.
Test Data:
({ 5, 5, 1, 15, 15 }) -> 1
({ 15, 2, 3, 4, 15 }) -> 0
({ 3, 3, 15, 15, 5, 5}) -> 1
({ 1, 5, 15, 7, 8, 15})-> 0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 15 && a[i + 1] == 15)
            return true;
    }
    return false;
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
    cout << checkArray(a, n) << endl;
    return 0;
}
