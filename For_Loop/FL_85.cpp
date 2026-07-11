/*Write a program in C++ to reverse a string.

Sample Output:
Enter a string: w3resource 
The string in reverse are: ecruoser3w*/

#include<iostream>
#include<string>
using namespace std;

string reverseString(string str)
{
    string s;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s += str[i];
    }
    return s;
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"The string in reverse are: "<<reverseString(s);
    return 0;
}
