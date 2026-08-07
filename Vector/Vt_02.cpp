/*Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

Example:
Original Vector elements:
1 2 5 0 3 1 7
Vector elements that are smaller than its adjacent neighbours:
0
1*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> findElements(vector<int> v)
{
    vector<int> result;

    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
            result.push_back(v[i]);
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Input vector: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> result = findElements(v);
    cout << "Vector elements that are smaller than its adjacent neighbours: ";

    if (result.empty())
        cout << "None";
    else
    {
        for (int x : result)
            cout << x << " ";
    }
    return 0;
}
