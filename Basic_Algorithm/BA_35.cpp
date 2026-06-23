/*Write a C++ program to count the number of 5's next to each other in an array of integers. Count the situation where the second 5 is actually a 6.
Sample Input:
{ 5, 5, 2 }
{ 5, 5, 2, 5, 5 }
{ 5, 6, 2, 9}
Sample Output:
1
2
1*/

#include <iostream>
using namespace std;

int count5(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == 5 && (arr[i + 1] == 5 || arr[i + 1] == 6))
            count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Input size: ";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<< count5(a, n) << endl;
    return 0;
}