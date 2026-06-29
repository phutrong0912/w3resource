/*Write a C++ program that multiplies each integer three times to create a list from a given list of integers.
Test Data:
({1, 2, 3, 4}-> (1 8 27 64}*/

#include <iostream>
using namespace std;

void Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] * arr[i] * arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    int a[100];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Array(a, n);

    return 0;
}
