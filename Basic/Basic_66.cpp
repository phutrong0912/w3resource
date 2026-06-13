/*Write a C++ program to add all the numbers from 1 to a given number.

Add 1 to 4: 10
Add 1 to 100: 5050*/

#include<iostream>
using namespace std;

int main(){
    int i,n,s;
    cout<<"Input numbers: ";
    cin>>n;
    if(n<0){
        cout<<"Fail";
    }else {
    s=n*(n+1)/2;
    cout<<"Add 1 to "<<n<<" : "<<s;
    }
}