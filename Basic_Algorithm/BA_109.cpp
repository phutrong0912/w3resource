/*Write a C++ program to check a given array of integers. Then,
return true if the given array contains two 5's next to each other, or two 5's separated by one element.
Sample Input:
{ 5, 5, 1, 5, 5 }
{ 1, 2, 3, 4 }
{ 3, 3, 5, 5, 5, 5}
{ 1, 5, 5, 7, 8, 10}
Sample Output:
1
0
1
1*/
#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 5 && a[i + 1] == 5)
            return true;
        if (i + 2 < n && a[i] == 5 && a[i + 2] == 5)
            return true;
    }

    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    int a[100];
    cout << "Input size: ";
    cin >> n;
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << checkArray(a, n) << endl;
    return 0;
}