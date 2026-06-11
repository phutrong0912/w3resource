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
using namespace std;

int main(){
    /*
    
	int a=6,b=9;
    cout<<(double)a/b<<endl;
    cout<<(double)(a/b)<<endl;
    cout<<a/(double)b<<endl;
    
	double c=6.5,d=8.5;
    cout<<(int)c/d<<endl;
    cout<<(int)(c/d)<<endl;
    cout<<(c/(int)d)<<endl;
    
	c=(double)a;
    b=d;
    cout<<d<<endl;
	cout<<"int implicitly casts to double: "<<c<<endl;
	cout<<"double truncates to int :"<<b<<endl;*/
	
	double x=6.0/9;
	double y=(x*100)/100.0;
	cout<<y<<endl;
	return 0;
}
