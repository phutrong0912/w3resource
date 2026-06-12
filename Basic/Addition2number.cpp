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
    for (i=b1.length()-1;i>=0;i--){
        s=b1[i]+b2[i] -'0'+nho-'0';
        if (s<10) {
            nho=0;
            result +=to_string(s);
        } else {
        nho=1;
        result+=to_string(s%10);
        }
    }

    cout<<"Result 2 number: "<<result;
}