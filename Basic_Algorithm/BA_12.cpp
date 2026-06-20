/*Write a C++ program to check if a given string starts with 'C#' or not.
Sample Input:
"C++ Sharp"
"C#"
"C++"
Sample Output:
1
1
0*/

#include <iostream>
#include <string>
using namespace std;

bool check(string str)
{
    if (str.substr(0, 2) == "C#")
        return true;
    else
        return false;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    cin >> s;
    cout << check(s) << endl;
    return 0;
}