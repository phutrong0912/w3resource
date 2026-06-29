/*Write a C++ program that checks if the sum of all 5' in the array is exactly 15.
Sample Input:
{ 1, 5, 6, 9, 10, 17 }
{ 1, 5, 5, 5, 10, 17 }
{ 1, 1, 5, 5, 5, 5}
Sample Output:
0
1
0*/

#include <iostream>
using namespace std;

bool checkSum(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5)
        {
            count++;
        }
    }
    return count == 3;  
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
    cout << checkSum(a, n) << endl;
    return 0;
}