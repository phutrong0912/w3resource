/*Write a C++ program that accepts the radius of a circle from the user and computes the area and circumference.

Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159*/

#include<iostream>
using namespace std;

int main() {
	double r,area,circum,pi=3.14;
	cout<<"Input the radius(1/2 of diameter) of a circle : ";
	cin>>r;
	area=pi*r*r;
	circum=2*pi*r;
	cout<<"The area of the circle is :"<<area<<endl;
	cout<<"The circumference of the circle is : "<<circum;
	
	return 0;
}
