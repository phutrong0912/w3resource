/*  Write a C++ program to print the area of a hexagon.

Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double s,a;
    cout<<"Input the side of the hexagon: ";
    cin>>s;
    a=(3*sqrt(3))/2*s*s;
    cout<<"The area of the hexagon is: "<<a;
}