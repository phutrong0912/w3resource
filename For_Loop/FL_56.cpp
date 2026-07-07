/*Write a program in C++ to find the first and last digits of a number.

Sample Output:
Input any number: 5679
The first digit of 5679 is: 5
The last digit of 5679 is: 9*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, f, l;
    cout << " Input any number: ";
    cin >> n; 
    f = n; 
    l = n % 10; 
    for (f = n; f >= 10; f = f / 10); 
    cout << " The first digit of " << n << " is: " << f<< endl;
    cout << " The last digit of " << n << " is: " << l << endl;

    return 0;
}
