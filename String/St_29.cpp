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
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        result += s[i];
        if ((len - i - 1) % 3 == 0 && i != len - 1)
            result += ',';
    }
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
