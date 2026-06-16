/*Write a C++ program to compute the sum of the specified number of prime numbers.

For example when n = 7,
s = 2 + 3 + 5 + 7 + 11 + 13 + 17 = 58.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, N = 1000, primes[1000];
    cout << "Input number: ";
    cin >> n;
    fill(begin(primes), end(primes), 1);
    primes[0] = 0;
    primes[1] = 0;
    for (int i = 0; i < N; i++)
    {
        int num = primes[i];
        if (num == 1)
        {
            for (int j = 2; j * i <= N; j++)
            {
                primes[j * i] = 0;
            }
        }
    }

    int sum = 0;
    int count = 0;
    for (int i = 2; count < n ; i++)
    {
        if (primes[i] == 1)
        {
            sum += i;
            count++;
        }
        }
    cout << "The first " << n << " prime(s): " << sum;
    return 0;
}
