/*Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5*/

#include<iostream>
using namespace std;

int main() {
	double cm,m,km;
	cout<<"Input the distance in centimeter :";
	cin>>cm;
	
	m=cm/1000;
	km=cm/100000;
	
	cout<<"The distance in meter is: "<<cm<<endl;
	cout<<"The distance in kilometer is: "<<km<<endl;
}

