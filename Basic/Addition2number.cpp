#include<iostream>
#include<string>

using namespace std;

int main(){
    string b1,b2;
    int nho=0;
    cout<<"Input 1st number: ";
    getline(cin,b1);
    cout<<"Input 2nd number: ";
    getline(cin,b2);
    int s=0;
    int i =b1.length()-1;
    string result;
    
    int diff = abs((int)b1.length() - (int)b2.length());
        if (b1.length() < b2.length())
            b1 = string(diff, '0') + b1;
        else
            b2 = string(diff, '0') + b2;
            
    for (i=b1.length()-1;i>=0;i--){
        s=(b1[i]-'0')+(b2[i]-'0') +nho;
        if (s<1) {
            nho=0;
            result = to_string(s) + result;
        } else {
        nho=1;
        result = to_string(s%2) + result;
        }
    }
    if (nho > 0)
        result = to_string(nho) + result;
    
        cout<<"Result 2 number: "<<result;
}