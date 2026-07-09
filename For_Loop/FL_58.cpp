/*Write a program in C++ to calculate the product of the digits of any number.

Sample Output:
Input a number: 3456
The product of digits of 3456 is: 360*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, r, p = 1;
    cout << " Input a number: ";
    cin >> n; 
    m = n;
    for (int i = n; i > 0; i = i / 10) 
    {
        r = i % 10; 
        p = p * r; 
    }
    cout << " The product of digits of " << m << " is: " << p << endl;
    return 0;
}
