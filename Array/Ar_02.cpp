/*Write a C++ program to find the largest three elements in an array.*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> maxElements(int a[], int n)
{
    vector<int> result;

    if (n < 3)
        return result;
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int t = a[i];

        if (t > first)
        {
            third = second;
            second = first;
            first = t;
        }
        else if (t > second && t != first)
        {
            third = second;
            second = t;
        }
        else if (t > third && t != second && t != first)
        {
            third = t;
        }
    }
    result.push_back(first);
    result.push_back(second);
    result.push_back(third);
    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number: ";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> s = maxElements(a, n);
    if (ans.empty())
    {
        cout << "Array must contain at least 3 distinct elements.";
    }
    else
    {
        cout << "The three largest elements are: ";
        for (int x : s)
            cout << x << " ";
    }
    return 0;
}
