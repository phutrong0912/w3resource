/*  Write a C++ program to compute the distance between two points on the surface of the earth.

Sample Output:
Print the the distance between two points on the surface of earth:
-----------------------------------------------------------------------
Input the latitude of coordinate 1: 25
Input the longitude of coordinate 1: 35
Input the latitude of coordinate 2: 35.5
Input the longitude of coordinate 2: 25.5
The distance between those points is: 1480.08*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double la1,lo1,la2,lo2,d,r=6371;
    cout<<"Input the latitude of coordinate 1: ";
    cin>>la1;
    cout<<"Input the longtitude of coordinate 1: ";
    cin>>lo1;
    cout<<"Input the latitude of coordinate 2: ";
    cin>>la2;
    cout<<"Input the longtitude of coordinate 2: ";
    cin>>lo2;

    la1=la1*acos(-1.0)/180;
    lo1=lo1*acos(-1.0)/180;

    la2=la2*acos(-1.0)/180;
    lo2=lo2*acos(-1.0)/180;

    //d = 2*r*asin(sqrt((pow(sin((la2-la1)/2),2)))+cos(la1)*cos(la2)*(pow(sin((lo2-lo1)/2),2)));
    d = 2*r*asin(sqrt(pow(sin((la2-la1)/2),2)+cos(la1)*cos(la2)*pow(sin((lo2-lo1)/2),2)));
    cout<<"The distance between those points is: "<<d;
    
}