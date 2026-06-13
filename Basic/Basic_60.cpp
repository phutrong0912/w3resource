/*  Write a C++ program to add two binary numbers.

Sample Output:
Addition of two binary numbers:
-----------------------------------
Input the 1st binary number: 1010
Input the 2nd binary number: 0011
The sum of two binary numbers is: 1101*/

#include<iostream>
using namespace std;

int main(){
    string b1,b2,result="";
    int nho=0;
    cout<<"Input the 1st binary number: ";
    getline(cin,b1);
    cout<<"Input the 2nd binary number: ";
    getline(cin,b2);
    int s=0;
    int i =b1.length()-1;
    
    int diff = abs((int)b1.length() - (int)b2.length());
        if (b1.length() < b2.length())
            b1 = string(diff, '0') + b1;
        else
            b2 = string(diff, '0') + b2;
            
    for (i=b1.length()-1;i>=0;i--){
        s=(b1[i]-'0')+(b2[i]-'0') +nho;
        if (s<2) {
            nho=0;
            result = to_string(s) + result;
        } else {
        nho=1;
        result = to_string(s%2) + result;
        }
    }
    if (nho > 0)
        result = to_string(nho) + result;
    
        cout<<"The sum of two binary numbers is:: "<<result;
}

