#include<iostream>
using namespace std;

int main() {
    int a,b,j;
    cin>>a>>b;
    j=a;
	a=b;
    b=j;
    cout<<a<<" "<<b;
    return 0; 
}

