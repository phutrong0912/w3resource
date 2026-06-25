/*Write a C++ program to create another string using two given strings s1, s2,
the format of the new string will be s1s2s2s1.
Sample Input:
"Hi", "Hello"
"whats", "app"
Sample Output:
HiHelloHelloHi
whatsappappwhats*/

#include <iostream>
#include <string>
using namespace std;

string test(string s1, string s2)
{
    return s1 + s2 + s2 + s1;
}

int main()
{
    string s1, s2;
    cout << "Input string 1: ";
    getline(cin,s1);
    cout << "Input string 2: ";
    getline(cin,s2);
    cout << test(s1, s2) << endl;
    return 0;
}