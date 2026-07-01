/*Write a C++ program to check a given array of integers. The program will return true if the value 5 appears 5 times and there are no 5 next to each other.
Sample Input:
{ 3, 5, 1, 5, 3, 5, 7, 5, 1, 5 }
{ 3, 5, 5, 5, 5, 5, 5}
{ 3, 5, 2, 5, 4, 5, 7, 5, 8, 5}
{ 2, 4, 5, 5, 5, 5}
Sample Output:
1
0
1
0*/

#include <iostream>
using namespace std;

bool count5(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            if (i > 0 && a[i - 1] == 5)
                return false;
            count++;
        }
    }
    return count == 5;
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
    cout << count5(a, n) << endl;
    return 0;
}
