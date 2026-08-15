/*Write a C++ program to capitalize the first character of each element of a given string vector. Return the vector. C & C++

Example:
Original Vector elements:
red green black white Pink
Capitalize the first character of each vector element:
Red Green Black White Pink*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> capitalize(vector<string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i].empty())
            v[i][0] = toupper(v[i][0]);
    }
    return v;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of elements: ";
    cin >> n;
    vector<string> v(n);
    cout << "Input vector elements: ";
    for (int i = 0; i < n; i++)
        getline(cin >> ws, v[i]);
    vector<string> result = capitalize(v);
    cout << "Capitalize the first character of each vector element: ";
    for (const string &s : result)
        cout << s << " ";
    return 0;
}