/*Write a C++ program to find and print all common elements in three sorted arrays of integers.*/
#include <iostream>
using namespace std;

void commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    cout << "Common elements: ";
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    cout << "Input number of elements in first array: ";
    cin >> n1;
    int a[n1];
    cout << "Input first array: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];
    cout << "Input number of elements in second array: ";
    cin >> n2;
    int b[n2];
    cout << "Input second array: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];
    cout << "Input number of elements in third array: ";
    cin >> n3;
    int c[n3];
    cout << "Input third array: ";
    for (int i = 0; i < n3; i++)
        cin >> c[i];
    commonElements(a, b, c, n1, n2, n3);
    return 0;
}