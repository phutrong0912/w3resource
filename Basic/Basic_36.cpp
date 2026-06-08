/*  Write a program in C++ to test Type Casting.

Sample Output:
Formatting the output using type casting:
----------------------------------------------
Print floating-point number in fixed format with 1 decimal place:
Test explicit type casting :
0
0.5
0.5
0.0
Test implicit type casting :
0
0
int implicitly casts to double:
4.0
double truncates to int!:
6*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<fixed<<setprecision(1)<<endl;
    
	int a=6,b=9;
    cout<<(double)a/b<<endl;
    cout<<(double)(a/b)<<endl;
    cout<<a/(double)b<<endl;
    
	double c=6.5,d=8.5;
    cout<<(int)c/d<<endl;
    cout<<(int)(c/d)<<endl;
    cout<<(c/(int)d)<<endl;
    
	c=a;
    b=d;
	cout<<c<<endl;
	cout<<b<<endl;
	
	return 0;
}
