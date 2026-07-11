/*Write a C++ program to count the letters, spaces, numbers and other characters in an input string.

Sample Output:
Enter a string: This is w3resource.com
The number of characters in the string is: 22
The number of alphabets are: 18
The number of digits are: 1
The number of spaces are: 2
The number of other characters are: 1*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            letters++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (str[i] == ' ')
            spaces++;
        else
            others++;
    }
    cout << "The number of characters in the string is: " << str.length() << endl;
    cout << "The number of alphabets are: " << letters << endl;
    cout << "The number of digits are: " << digits << endl;
    cout << "The number of spaces are: " << spaces << endl;
    cout << "The number of other characters are: " << others << endl;
    return 0;
}