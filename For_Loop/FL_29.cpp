/*Write a program in C++ to find the LCM of any two numbers using HCF.
Sample Output:
Input 1st number for LCM: 15
Input 2nd number for LCM: 25
The LCM of 15 and 25 is: 75*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Input 1st number for LCM: ";
    cin >> n;
    cout << "Input 2nd number for LCM: ";
    cin >> m;
    int hcf;
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            hcf = i;
        }
    }
    int lcm = (n * m) / hcf;
    cout << "The LCM of " << n << " and " << m << " is: " << lcm;
    return 0;
}
