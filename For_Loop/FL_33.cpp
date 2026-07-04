/*Write a program in C++ to check whether a number can be expressed as the sum of two.
Sample Output:
Input a positive integer: 20
20 = 3 + 17
20 = 7 + 13*/

#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

void findSum(int n)
{
    bool found = false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (Prime(i) && Prime(n - i))
        {
            cout << n << " = " << i << " + " << n - i << endl;
            found = true;
        }
    }
    if (!found)
        cout << "Cannot be expressed as the sum of two prime numbers." << endl;
}
int main()
{
    int n;
    cout << "Input a positive integer: ";
    cin >> n;
    findSum(n);
    return 0;
}
