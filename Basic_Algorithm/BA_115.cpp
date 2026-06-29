/*Write a C++ program to check a given array of integers and return true if the array contains three increasing adjacent numbers.
Sample Input:
{ 1, 2, 3, 5, 3, 7 }
{ 3, 7, 5, 5, 3, 7 }
{ 3, 7, 5, 5, 6, 7, 5 }
Sample Output:
1
0
1*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i + 1] == a[i] + 1 && a[i + 2] == a[i] + 2)
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
