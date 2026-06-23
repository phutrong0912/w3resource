/*Write a C++ program to check whether a given string begins with "F" or ends with "B". 
If the string starts with "F" return "Fizz" and return "Buzz" if it finishes with "B". 
If the string starts with "F" and ends with "B" return "FizzBuzz". 
In other cases return the original string.
Sample Input:
"FB"
"Fsafs"
"AuzzB"
"founder"
Sample Output:
FizzBuzz
Fizz
Buzz
founder*/

#include <iostream>
#include <string>
using namespace std;

string fizzBuzzString(string s)
{
    if (s.empty())
        return "";
    if (s[0] == 'F' && s.back() == 'B')
        return "FizzBuzz";
    if (s[0] == 'F')
        return "Fizz";
    if (s.back() == 'B')
        return "Buzz";
    return s;
}

int main()
{
    string s;
    cout << "Input a string: ";
    getline(cin, s);
    cout << fizzBuzzString(s) << endl;
    return 0;
}