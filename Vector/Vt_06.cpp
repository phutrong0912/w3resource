/*Write a C++ program that takes a vector of strings and returns only those strings that contain a number(s). Return an empty vector if none.

Example:
Original Vector elements:
red green23 1black white
Find strings that contain a number(s) from the said vector:
green23 1black*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> findStringsWithNumbers(vector<string> strings)
{
    vector<string> result;
    for (string s : strings)
    {
        for (char c : s)
        {
            if (isdigit(c))
            {
                result.push_back(s);
                break;
            }
        }
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    vector<string> strings(n);
    cout << "Input vector elements: ";
    for (int i = 0; i < n; i++)
        cin >> strings[i];
    vector<string> result = findStringsWithNumbers(strings);
    cout << "Find strings that contain a number(s) from the said vector: ";
    if (result.empty())
        cout << "None";
    else
    {
        for (const string s : result)
            cout << s << " ";
    }
    return 0;
}
