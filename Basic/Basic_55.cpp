/*Write a C++ program to enter P, T, R and calculate compound interest.

Sample Output:
Calculate the Compound Interest :
------------------------------------- Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10% is: 3073.8 
The total amount after compounded for the amount 20000 for 1.5 years @ 10 % is: 23073.8*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double p,r,t,ci,a;
	cout<<"Input the Principle: ";
	cin>>p;
	cout<<"Input the Rate of Interest: ";
	cin>>r;
	cout<<"Input the Time :";
	cin>>t;
	a=p*pow(1+r/100,t);
	ci=a-p;

	cout<<"The Interest after compounded for the amount "<<p<<" for "<<t<<" years @ " <<r<<" % is: "<<ci<<endl;
	cout<<"The total amount after compounded for the amount "<<p<<" for "<<t<<" years @ " <<r<<" % is: "<<a;
}
