/*Write a program in C++ to find the last prime number that occurs before the entered number.

Sample Output:
Input a number to find the last prime number occurs before the number: 50
47 is the last prime number before 50*/

#include <iostream>
using namespace std;
void Eratos(bool Prime[], int n)
{
    for (int i = 0; i <= n; i++)
        Prime[i] = true;

    Prime[0] = false;
    Prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (Prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                Prime[j] = false;
        }
    }
}
int lastPrime(bool Prime[], int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        if (Prime[i])
            return i;
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input number : ";
    cin >> n;
    bool Prime[1000];
    Eratos(Prime, n);
    int N = lastPrime(Prime, n);
    
    if (N == -1)
        cout << "There is no prime number before " << n;
    else
        cout << N << " is the last prime number before " << n;
    return 0;
}