/*Write a C++ program to create an array taking the first and last elements of a given array of integers
and length 1 or more.
Sample Input:
{ 10, 20, -30, -40, 30 }
Sample Output:
New array:
10 30*/

#include <iostream>
using namespace std;

void test(int arr[], int n, int result[])
{
    if (n < 1)
        return ;
    result[0] = arr[0];
    result[1] = arr[n - 1];
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int arr[100], result[2];
    cout << "Input elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    test(arr, n, result);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}