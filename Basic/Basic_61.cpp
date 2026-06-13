/*  Write a C++ program to swap the first and last digits of any number.

Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cout<<"Input any number: ";
    cin>>a;

    string s = to_string(a);

    char temp = s[0];
    s[0] = s[s.length()-1];
    s[s.length()-1] = temp;

    int result = stoi(s);
    cout<<"The number after swapping the first and last digits are: "<<result;
}