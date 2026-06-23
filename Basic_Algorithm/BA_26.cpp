/*Write a C++ program to count the string "aa" in a given string and assume "aaa" contains two "aa".
Sample Input:
"bbaaccaag"
"jjkiaaasew"
"JSaaakoiaa"
Sample Output:
2
2
3*/

#include <iostream>
#include <string>
using namespace std;

int countAA(string str)
{
    int count = 0;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str.substr(i, 2) == "aa")
            count++;
    }
    return count;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << countAA(s) << endl;
    return 0;
}