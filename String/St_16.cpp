/*Write a C++ program to find the longest common prefix from a given array of strings.
Example:
The longest common prefix is: Pa
The longest common prefix is: J
The longest common prefix is:*/

#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string arr[], int n)
{
    if (n == 0)
        return "";
    string prefix = arr[0];
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        while (j < prefix.length() && j < arr[i].length() && prefix[j] == arr[i][j])
        {
            j++;
        }
        prefix = prefix.substr(0, j);
        if (prefix.empty())
            break;
    }
    return prefix;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number of strings: ";
    cin >> n;
    string arr[100];
    cout << "Input strings:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The longest common prefix is: " << longestCommonPrefix(arr, n) << endl;
    return 0;
}
