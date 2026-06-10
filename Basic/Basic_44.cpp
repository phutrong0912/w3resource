/*Write a C++ program to get the volume of a sphere with radius 6.

Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.333*/

#include<iostream>
using namespace std;

int main() {
	double r,v,pi=3.14;
	cout<<"Input the radius of a sphere : ";
	cin>>r;
	v=(4.0/3)*pi*r*r*r;
	cout<<"The volume of a sphere is : "<<v;
}
