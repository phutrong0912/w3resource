/*Write a C++ program that reads a sequence of integers and prints the mode values of the sequence. The number of integers is greater than or equal to 1 and less than or equal to 100.

Note: The mode of a set of data values is the value that appears most often.*/

#include<iostream>
#include<map>
using namespace std;

int main(){
    int i,n,result,max=0; 
    map<int,int>m;
    cout<<"Input elements:";
    cin>>n;
    int a[100];
    for (i=0;i<n;i++){
        cout<<"Add element ["<<i+1<<"]: ";
        cin>>a[i];
    }
    for (i=0;i<n;i++){
        if (m.count(a[i])){
            m.at(a[i])++;
        } else {
            m.insert({a[i],1});
        }
    }
    for (auto num : m){
        if (num.second > max){
            max=num.second;
            result=num.first;
        }
    }
    cout<<"The modes values of the sequence: "<<result;
   
}