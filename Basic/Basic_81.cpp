/*Write a C++ program that replaces all the words "dog" with "cat".

Sample Text: The quick brown fox jumps over the lazy dog.
You can assume that the number of characters in a text is less than or equal to 1000.*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cout << "Sample Text: ";
    getline(cin, s);
    string A = "dog";
    string B = "cat";
    int str_pos = 0;
    int index = s.find(A, str_pos);
    while (index != -1)
    {
        s.replace(index, A.length(), B);
        str_pos += B.length();
        index = s.find(A, str_pos);
    }
    cout << s;
    return 0;
}
