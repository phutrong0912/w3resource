/*Write a C++ program to find the k largest elements in a given array of integers.*/
#include <iostream>
using namespace std;

void kLargestElements(int a[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[maxIndex])
                maxIndex = j;
        }
        swap(a[i], a[maxIndex]);
    }
    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int n, k, a[100];
    cout << "Input number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Input k: ";
    cin >> k;
    kLargestElements(a, n, k);
    return 0;
}