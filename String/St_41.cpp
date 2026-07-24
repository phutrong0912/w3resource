/*Write a C++ program that finds the position of the second occurrence of a string in another string. If the substring does not appear at least twice return -1.
Test Data:
("the qu qu", "qu") -> 7
("theququ", "qu") -> 5
("thequ", "qu") -> -1*/

#include <iostream>
#include <string>
using namespace std;
int findSecondOccurrence(string s, string sub)
{
    int firstPos = s.find(sub);
    if (firstPos == string::npos)
        return -1;
    int secondPos = s.find(sub, firstPos + sub.length());
    return secondPos;
}
int main(int argc, char const *argv[])
{
    string s, sub;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Input a substring: ";
    getline(cin, sub);
    int pos = findSecondOccurrence(s, sub);
    cout << pos << endl;
    return 0;
}