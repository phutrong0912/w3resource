/*Write a C++ program to count the even number of elements in a given array of integers.
Sample Input:
{ 1, 5, 7, 9, 10, 12 }
{0, 2, 4, 6, 8, 10}
Sample Output:
2
6*/

#include <iostream>
using namespace std;

int countEven(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
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
    cout << countEven(a, n) << endl;
    return 0;
}
