/*Write a C++ program that reads seven numbers and sorts them in descending order   */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[7],i;
    for (i=0;i<7;i++){
        cout<<"Input A["<<i+1<<"]: ";
        cin>>a[i];
    }
    // sort(a,a+7,greater<int>());
    
    for (int i=0;i<7;i++){
        for (int j=0;j<7-i-1;j++){
            if (a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Sort in descending order: ";
    for(int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }
}