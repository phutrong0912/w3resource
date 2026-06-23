/*Write a C++ program to count the number of times a substring of length 2 appears
 in a given string as well as its last two characters. Do not count the end substring.
Sample Input:
"abcdsab"
"abcdabab"
"abcabdabab"
"abcabd"
Sample Output:
1
2
3
0 */

#include <iostream>
#include <string>
using namespace std;

int countSubstring(string str)
{
    if (str.length() < 2)
        return 0;

    string last2 = str.substr(str.length() - 2);
    int count = 0;

    for (int i = 0; i < str.length() - 2; i++)
    {
        if (str.substr(i, 2) == last2)
            count++;
    }

    return count;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << countSubstring(s) << endl;
    return 0;
}