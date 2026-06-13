/*Write a C++ program to check whether a given length of three sides forms a right triangle.*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Input the 1st sides of the triangle: ";
    cin>>a;
    cout<<"Input the 2nd sides of the triangle: ";
    cin>>b;
    cout<<"Input the 3rd sides of the triangle: ";
    cin>>c;
    if(a<=0 ||b<=0 ||c<=0){
        cout<<"No exits triangle";
    }
    else if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
        cout<<"The given lengths form a right triangle.";
    } else 
    cout<<"The given lengths do not form a right triangle.";    
}