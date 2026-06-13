/*Write a C++ program that reads the integer n and prints a twin prime 
that has the maximum size among twin primes less than or equal to n*/

#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int n){
    if (n<2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Input n: ";
    cin>>n;
    for (int i = n ; i >= 3; i--) {
        if (Prime(i) && Prime(i - 2)) {
            cout << " The largest twin prime pair <= " << n << " is (" << (i-2) << ", " << i << ")" << endl;
            return 0;
        }
    }
    cout << "No twin prime found." << endl;
} 
