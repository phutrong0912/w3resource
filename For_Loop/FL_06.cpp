/*Write a program in C++ to find a prime number within a range.

Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
The total number of prime numbers between 1 to 100 is: 25*/

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

int main(int argc, char const *argv[])
{
    int n, N;
    cout << "Input number for starting range: ";
    cin >> n;
    cout << "Input number for ending range: ";
    cin >> N;

    bool Prime[1000];

    Eratos(Prime, N);

    int count = 0;

    cout << "The prime numbers between " << n << " and " << N << " are: " << endl;

    for (int i = n; i <= N; i++)
    {
        if (Prime[i])
        {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << "The total number of prime numbers between " << n << " and " << N << " is: " << count << endl;
    return 0;
}