/*Write a C++ program to find the largest value from the first, last,
and middle elements of a given array of integers of odd length (at least 1).
Sample Input:
{1}
{1,2,9}
{1,2,9,3,3}
{1,2,3,4,5,6,7}
{1,2,2,3,7,8,9,10,6,5,4}
Sample Output:
1
9
9
7
8*/

#include <iostream>
using namespace std;

int MaxEle(int a[], int n)
{
    int mid = n / 2;
    int first = a[0];
    int last = a[n - 1];
    int max = first;
    if (mid > max)
    {
        max = mid;
    }
    if (last > max)
    {
        max = last;
    }
    return max;
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
    if (n%2==0){
        n--;
    }
    cout << MaxEle(a, n) << endl;
    return 0;
}
