/*Write a C++ program to update every array element by multiplication of the next and previous values of a given array of integers.*/

#include <iostream>
using namespace std;
void updateArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            a[i] = a[i] * a[i + 1];
        else if (i == n - 1)
            a[i] = a[i] * a[i - 1];
        else
            a[i] = a[i - 1] * a[i + 1];
    }
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