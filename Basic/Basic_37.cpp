/*Write a C++ program to print a mystery series from 1 to 50.

Sample Output:
Print a mystery series:
-------------------------
The series are:
5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 40 38 43 47 46 44 49*/

#include<iostream>
using namespace std;

int main(){
	int n,a=10;
	
	/*while (true) {
		++n;
		if ((n%3)==0) 
			continue;
		if (n==a)
			break;
		if ((n%2)==0) 
			n+=3;
		else n-=3;
		cout<<n<<" ";
		} */
	for	(n=2;n!=a;n++){
		if((n%3)==0)
			continue;
		if((n%2)==0) 
			n+=3;
		else n-=3;
		cout<<n<<" ";
	}
}
