/*Write a C++ program to determine whether a given array of integers of length 2 contains 15 or 20.
Sample Input:
{ 12, 20 }
{ 14, 15 }
{ 11, 21 }
Sample Output:
1
1
0*/

#include <iostream>
using namespace std;

bool test(int a[], int n)
{
    return n == 2 && (a[0] == 15 || a[0] == 20 || a[1] == 15 || a[1] == 20);
}

int main(int argc, char const *argv[])
{
    int arr[2];
    cout << "Input elements: ";
    cin >> arr[0] >> arr[1];
    cout << test(arr, 2) << endl;
    return 0;
}
