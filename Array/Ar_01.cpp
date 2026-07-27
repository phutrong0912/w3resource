/*Write a C++ program to find the largest element of a given array of integers.*/

#include <iostream> 
using namespace std;

int maxElement(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Largest element: " << maxElement(a, n) << endl;
    return 0;
}