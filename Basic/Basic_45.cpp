/*Write a C++ program to calculate the volume of a cone.

Sample Input: 5 3
Sample Output:
Input Cone's radius: Input Cone's height: The volume of the cone is: 78.5397*/
#include<iostream>
using namespace std;

int main() {
	double r,v,h,pi=3.14;
	cout<<"Input Cone's radius: ";
	cin>>r;
	cout<<"Input Cone's height: ";
	cin>>h;
	
	v=(1.0/3)*pi*r*r*h;
	cout<<"The volume of the cone is: "<<v;
}
