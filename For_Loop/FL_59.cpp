/*Write a program in C++ to find the frequency of each digit in a given integer.

Sample Output:
Input any number: 122345
The frequency of 0 = 0
The frequency of 1 = 1
The frequency of 2 = 2
The frequency of 3 = 1
The frequency of 4 = 1
The frequency of 5 = 1
The frequency of 6 = 0
The frequency of 7 = 0
The frequency of 8 = 0
The frequency of 9 = 0*/

#include <iostream>
using namespace std;

void frequency(int n)
{
    int freq[10] = {0};
    for (; n > 0; n /= 10)
    {
        freq[n % 10]++;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << "The frequency of " << i << " = " << freq[i] << endl;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout << "Input any number: ";
    cin >> n;
    frequency(n);
    return 0;
}
