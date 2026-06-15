/* Write a C++ program to replace all the lower-case letters in a given string with the corresponding capital letters.*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Input a string: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<"The string after replace all the lowercase with uppercase: "<<s;
}