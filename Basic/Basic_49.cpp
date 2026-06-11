/*Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.

Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a*/

#include<iostream>
using namespace std;

int main() {
	char ch;
	cout<<"Input a character: ";
	cin>>ch;
	
	cout<<"The ASCII value of "<< ch <<" is: "<<(int)ch<<endl;
	cout<<"The character for the ASCII value: "<<(int)ch<<" is: "<<ch;
}
