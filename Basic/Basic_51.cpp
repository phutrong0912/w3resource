/*Write a C++ program that converts kilometers per hour to miles per hour.

Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr.*/

#include<iostream>
using namespace std;

int main() {
	double kmh,mh;
	cout<<"Input the distance in kilometer : ";
	cin>>kmh;
	
	mh=kmh*0.6213711922;
	
	cout<<"The "<<kmh <<" Km./hr. means "<<mh<<" Miles/hr.";
}
