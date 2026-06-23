/*Write a C++ program to check if a given string contains between 2 and 4 'z' characters.
Sample Input:
"frizz"
"zane"
"Zazz"
"false"
Sample Output:
1
0
1
0*/

#include <iostream>
#include <string>
using namespace std;

bool check(string str)
{
    int count = 0;
    for (char c : str)
    {
        if (c == 'z' || c == 'Z')
            count++;
    }
    return count >= 2 && count <= 4;
}
int main(int argc, char const *argv[])
{
    string s;
    cout << "Input string: ";
    getline(cin, s);
    cout << check(s) << endl;
    return 0;
}
