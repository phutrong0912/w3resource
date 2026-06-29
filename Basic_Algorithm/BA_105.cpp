/*Write a C++ program to check if the number of 3's is greater than the number of 5's.
Sample Input:
{ 1, 5, 6, 9, 3, 3 }
{ 1, 5, 5, 5, 10, 17 }
{ 1, 3, 3, 5, 5, 5}
Sample Output:
1
0
0*/

#include <iostream>
using namespace std;

bool checkArray(int a[], int n)
{
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 3)
        {
            count1++;
        }
        if (a[i] == 5)
        {
            count2++;
        }
    }
    return (count1 > count2);
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
