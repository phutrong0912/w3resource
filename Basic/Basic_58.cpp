/*  Write a C++ program to print the area of a polygon.

Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double s,n,a,degree=180.0;
    
    cout<<"Input the number of sides of the polygon: ";
    cin>>s;
    cout<<"Input the length of each sides of the polygon: ";
    cin>>n;
    double radians =(degree *acos(-1.0)/180.0)/n;
    double result = tan(radians);
    a=(n*s*s)/(4*(result));
    cout<<"The area of the polygon is: "<<a;
}