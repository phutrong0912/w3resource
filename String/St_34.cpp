/*Write a C++ program that removes a specific word from a given string. Return the updated string.
Test Data:
("Exercises Practice Solution", "Solution") -> "Exercises Practice"
("Exercises Practice Solution", "Practice ") -> "Exercises Solution"
("Exercises Practice Solution", " Solution") -> " Practice Solution"*/

#include <iostream>
#include <string>
using namespace std;

string removeWord(string s, string word)
{
    int pos = s.find(word);
    if (pos != string::npos)
        s.erase(pos, word.length());
    return s;
}

int main(int argc, char const *argv[])
{
    string s, word;
    cout << "Input a string: ";
    getline(cin, s);
    cout << "Input the word to remove: ";
    getline(cin, word);
    cout << removeWord(s, word) << endl;
    return 0;
}
