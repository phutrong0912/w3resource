#include<iostream>
using namespace std;

const float pi =3.14;
float volumeSphere(float radius) {
	if (radius>0) {
		float v=((float)4/3)*pi*(radius*radius*radius);
		return v; 
	}
}
int main(){
	float radius,v;
	cin>>radius;
	cout<<volumeSphere(radius)<<endl;
	return 0;
}
