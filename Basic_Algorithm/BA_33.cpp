/*Write a C++ program to create a new string from a given string 
where a specified character is removed except at the beginning and end.
Sample Input:
"xxHxix", "x"
"abxdddca", "a"
"xabjbhtrb", "b"
Sample Output:
xHix
abxdddca
xajhtrb*/

#include<iostream>
#include<string>
using namespace std;

string RemoveChar(string str, char c) {
    if (str.length() <= 2) return str;
    string result = "";
    result += str[0];
    for (size_t i = 1; i < str.length() - 1; i++) {
        if (str[i] != c) result += str[i];
    }
    result += str.back();
    return result;
}

int main(int argc, char const *argv[])
{
    string s;
    char a;
    cout<<"Input a string:";
    getline(cin,s);
    cout<<"Input character to remove: ";
    cin>>a;
    cout<<RemoveChar(s,a)<<endl;
    return 0;
}

