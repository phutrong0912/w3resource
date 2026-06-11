/*Write a C++ program to enter P, T, R and calculate Simple Interest.

Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000*/

#include<iostream>
using namespace std;

int main(){
	double p,r,t,s;
	cout<<"Input the Principle: ";
	cin>>p;
	cout<<"Input the Rate of Interest: ";
	cin>>r;
	cout<<"Input the Time :";
	cin>>t;
	
	s=(p*r*t)/100;
	
	cout<<"The Simple interest for the amount "<<p<<" for "<<t<<" years @ " <<r<<" % is: "<<s;
	
}
