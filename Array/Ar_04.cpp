/*Write a C++ program to find the k largest elements in a given array of integers.*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> kLargestElements(int a[], int n, int k)
{
    vector<int> result;
    if (k > n || k <= 0)
        return result;
    for (int i = 0; i < k; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[maxIndex])
                maxIndex = j;
        }
        swap(a[i], a[maxIndex]);
        result.push_back(a[i]);
    }
    return result;
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
    vector<int> ans = kLargestElements(a, n, k);
    if (ans.empty())
    {
        cout << "Invalid value of k.\n";
    }
    else
    {
        cout << "The " << k << " largest elements are: ";
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}
