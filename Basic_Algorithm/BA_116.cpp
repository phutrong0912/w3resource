/*Write a C++ program to check if the value of each element is equal or greater than the value of the previous element of a given array of integers.
Sample Input:
{ 5, 5, 1, 5, 5 }
{ 1, 2, 3, 4 }
{ 3, 3, 5, 5, 5, 5}
{ 1, 5, 5, 7, 8, 10}
Sample Output:
0
1
1
1*/
#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            return false;

    return true;
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
