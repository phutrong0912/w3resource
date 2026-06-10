/*Write a C++ program to calculate the volume of a cylinder.

Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92*/
#include<iostream>
using namespace std;

int main() {
	double r,v,h,pi=3.14;
	cout<<"Input the radius of the cylinder: ";
	cin>>r;
	cout<<"Input the height of the cylinder: ";
	cin>>h;
	
	v=pi*r*r*h;
	cout<<"The volume of the cylinder is: "<<v;
}
