/*Write a C++ program to calculate the area of an equilateral triangle. C++ coding exercises

Sample Output:
Calculate the area of the Equilateral Triangle :
----------------------------------------------------
Input the value of the side of the equilateral triangle: 5
The area of equilateral triangle is: 10.8253*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double a,h,area;
	cout<<"Input the value of the side of the equilateral triangle: ";
	cin>>a;
	
	h=sqrt(3)/2*a;
	area=(1.0/2)*h*a;
	
	cout<<"The area of equilateral triangle is: "<<area;
}
