/*Write a program in C++ to check whether a number can be expressed as the sum of two.
Sample Output:
Input a positive integer: 20
20 = 3 + 17
20 = 7 + 13*/

#include <iostream>
using namespace std;

void Eratos(bool prime[], int n)
{
    for (int i = 0; i <= n; i++)
        prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}
void findSum(int n)
{
    bool prime[1000];
    Eratos(prime, n);
    bool found = false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (prime[i] && prime[n - i])
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