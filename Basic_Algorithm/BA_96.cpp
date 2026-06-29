/*Write a C++ program to create an array length 3 from a given array (length at least 3)
using the elements from the middle of the array.
Sample Input:
{ 1, 5, 7, 9, 11, 13 }
Sample Output:
New array:
7 9 11*/

#include <iostream>
using namespace std;

void middleArray(int a[], int n, int b[])
{
    int mid = n / 2;
    b[0] = a[mid - 1];
    b[1] = a[mid];
    b[2] = a[mid + 1];
}

int main(int argc, char const *argv[])
{
    int n, a[5], b[3];
    cout << "Input size: ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    middleArray(a, n, b);
    cout << "New array: " << b[0] << " " << b[1] << " " << b[2] << endl;
    return 0;
}
