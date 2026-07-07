/*Write a program in C++ to find the power of any number using a for loop.

Sample Output:
Input the base: 2
Input the exponent: 5
2 ^ 5 = 32*/

#include <iostream>
using namespace std;

int power(int x, int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int x, n;
    cout << "Input the base: ";
    cin >> x;
    cout << "Input the exponent: ";
    cin >> n;
    cout << x << " ^ " << n << " = " << power(x, n) << endl;
    return 0;
}
