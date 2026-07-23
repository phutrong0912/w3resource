/*Write a C++ program to print a given integer with commas separating the thousands.
Example:
Input a number:
Print the said integer with commas as thousands separators:
5,000*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addCommas(long long n)
{
    string s = to_string(n);
    string result;
    int count = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        result += s[i];
        count++;

        if (count % 3 == 0 && i != 0)
            result += ',';
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(int argc, char const *argv[])
{
    long long n;
    cout << "Input a number: ";
    cin >> n;
    cout << "Print the said integer with commas as thousands separators:\n";
    cout << addCommas(n) << endl;
    return 0;
}
