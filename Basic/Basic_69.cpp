/*  For n = 10, write a C++ program that reads the integer n and prints its factorial.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input n: ";
    cin>>n;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is: " << factorial << endl;
}
