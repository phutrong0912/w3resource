/*Write a C++ program to create a new string without the first and last characters 
of a given string of length at least two.
Sample Input:
"Hello"
"Hi"
"Python"
Sample Output:
ell

ytho*/
#include <iostream>
using namespace std;

string test(string str)
{
    return str.substr(1).substr(0, str.length() - 2);
}

int main(int argc, char const *argv[])
{
    string s;
    cout<<"Input string: ";
    getline(cin,s);
    cout<<test(s)<<endl;
    return 0;
}
