/*Write a C++ program to check a given array of integers, length 3 and create an array.
If there is a 5 in the given array immediately followed by a 7 then set 7 to 1.
Sample Input:
{ 1, 5, 7 }
{ 1, 5, 3, 7 }
Sample Output:
New array:
1 5 1
New array:
1 5 3 7*/

#include <iostream>
using namespace std;

void Replace(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 5 && a[i + 1] == 7)
        {
            a[i + 1] = 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n = 3, a[5];
    cout<<"Input elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Replace(a,n);
    cout<<"New array: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
