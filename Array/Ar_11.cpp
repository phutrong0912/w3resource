/*Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.*/

#include <iostream>
using namespace std;
void updateArray(int a[], int n)
{
    int prev = a[0];
    a[0] = a[0] * a[1];
    for (int i = 1; i < n - 1; i++)
    {
        int curr = a[i];
        a[i] = prev * a[i + 1];
        prev = curr;
    }

    a[n - 1] = prev * a[n - 1];
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    updateArray(a, n);
    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}