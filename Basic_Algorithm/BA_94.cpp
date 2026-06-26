/* Write a C++ program to create an array taking two middle elements from a given array of integers of length even.
Sample Input:
{ 1, 5, 7, 9, 11, 13 }
Sample Output:
New array:
7 9*/
#include <iostream>
using namespace std;

void createArray(int a[], int n, int b[])
{
    int mid = n / 2;
    b[0] = a[mid - 1];
    b[1] = a[mid];
}
int main(int argc, char const *argv[])
{
    int n, a[100], b[2];
    cout << "Input size : ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    createArray(a, n, b);
    cout << "New array: " << b[0] << " " << b[1] << endl;
    return 0;
}
