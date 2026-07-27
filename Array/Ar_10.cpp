/*Write a C++ program to find the smallest element missing from a sorted array.*/
#include <iostream>
using namespace std;

int smallestMissing(int a[], int n)
{
    int missing = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == missing)
            missing++;
        else if (a[i] > missing)
            break;
    }
    return missing;
}
int main(int argc, char const *argv[])
{
    int n, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Smallest missing element: " << smallestMissing(a, n) << endl;
    return 0;
}