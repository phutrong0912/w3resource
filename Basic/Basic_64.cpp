/*Write a C++ program to compute the sum of the two given integers and count the number of digits in the sum value.*/

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int a,b,s;
    cout<<"Input 1st number: ";
    cin>>a;
    cout<<"Input 2nd number: ";
    cin>>b;
    s=a+b;
    string st =to_string(abs(s));

    cout<<"The sum of the 2 intergers: "<<s<<endl;
    cout<<"The number of digits in the sum value is: "<<st.length();
}