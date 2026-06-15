/*Write a C++ program that accepts the sales unit price and sales quantity of various items and computes the total 
sales amount and the average sales quantity. All input values must be greater than or equal to 0 and less than or equal 
to 1,000. In addition, the number of pairs of sales unit and sales quantity does not exceed 100. 
If a fraction occurs in the average of the sales quantity, round to the first decimal place.*/

#include<iostream>
using namespace std;

int main() {
    double upr,qua,s2=0,s1=0,i=0;
    cout<<"Input unit price and sales quantity: ";
    while(cin>>upr>>qua){
        s1+=upr*qua;
        s2+=qua;
        i++;
    }
    cout<<"The total sales amount: "<<s1<<endl;
    cout<<"The average sales quantity: "<<(s2/i);
    
}